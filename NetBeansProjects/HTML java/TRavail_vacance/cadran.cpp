/**
  * @file   :   cadran.cpp
  * @author :   Philippe Cruchet
  * @date   :   24/08/2020
  * @detail :   Assure la gestion d'un Cadran en Mode texte
  *             à partir des séquences d'échappement ANSI
  */

#include "cadran.h"

/**
 * @brief Cadran::Cadran
 * @details : Constructeur de la classe Cadran, initialise et trace le contour du cadran
 * @param _posX     :   Coordonnée en X du coin gauche du cadran
 * @param _posY     :   Coordonnée en Y du coin gauche du cadran
 * @param _hauteur  :   Nombre de lignes d'affichage du cadran
 * @param _largeur  :   Nombre de caractères par ligne
 */
Cadran::Cadran(const int _posX, const int _posY, const int _hauteur, const int _largeur):
    posX(_posX+1),
    posY(_posY+1),
    hauteur(_hauteur),
    largeur(_largeur)
{

    PositionnerCurseur(_posX,_posY);
    cout << '+' <<  setfill('-') << setw(_largeur+1) << '+' <<setfill(' ');
    for(int indice = 1 ; indice <= _hauteur ; indice++)
    {
        PositionnerCurseur(_posX + indice,_posY);
        cout << '+' ;
        cout << "\e[0;33;42m";  // Fixe la couleur fond en vert et le texte en jaune
        cout <<  setfill(' ') << setw(_largeur) << ' '  ;
        cout << "\e[0m";        // Remet à zéro les attributs de couleur
        cout << '+' ;
    }
    PositionnerCurseur(posX + _hauteur,_posY);
    cout << '+' <<  setfill('-') << setw(_largeur+1) << '+' <<setfill(' ') ;
    cout << "\e[?25l" << flush;         // Fait disparaître le curseur
}

/**
 * @brief Cadran::~Cadran
 * @details : Destructeur de la classe restitue le contexte de l'application
 */
Cadran::~Cadran()
{
    cout << "\e[?25h";          // Refait apparaître le curseur
    cout << "\e[0m";            // Remet à zéro les attributs de couleur
    cout << "\e[2J" << flush;   // Efface l'écran
}

void Cadran::Afficher(const int _heures, const int _minutes)
{
    PositionnerCurseur(posX,posY+1);

    // au choix
    cout << "\e[0;33;42m";
    cout << setfill('0') << setw(2) << _heures;
    cout << ":";
    cout << setfill('0') << setw(2) << _minutes;

//    autre solution vue en cours !!! maintenant elle fonctionne avec to_String
//    string heuresMinutes ;
//    if(_heures < 10)
//        heuresMinutes += "0";
//    heuresMinutes += to_string(_heures);
//    heuresMinutes += ":" ;
//    if(_minutes < 10)
//        heuresMinutes += "0";
//    heuresMinutes += to_string(_minutes);
//    cout << heuresMinutes;

    cout << "\e[0m" << flush;
}

void Cadran::Afficher(const string _chaine, const int _valeur)
{
    PositionnerCurseur(posX,posY+1);
    cout << "\e[0;33;42m";
    cout << _chaine << " " << setfill('0') << setw(2) << _valeur ;
    cout << "\e[0m" << flush;
}

void Cadran::Afficher(const string _message, const string _valeur)
{
    PositionnerCurseur(posX,posY+1);
    cout << "\e[0;33;42m";
    cout << _message << " " <<  _valeur ;
    cout << "\e[0m" << flush;
}

/**
 * @brief Cadran::PositionnerCurseur
 * @details :   Positionne le curseur sur l'écran de l'ordinateur
 * @param _posx :   Coordonnée en X
 * @param _posy :   Coordonnée en Y
 */
void Cadran::PositionnerCurseur(const int _posx, const int _posy)
{
    cout << "\e[" << _posx <<";" << _posy << 'f' ;
}
