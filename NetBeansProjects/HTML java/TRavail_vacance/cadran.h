#ifndef CADRAN_H
#define CADRAN_H

/**
  * @file   :   cadran.h
  * @author :   Philippe Cruchet
  * @date   :   02/02/2022
  * @detail :   Assure la gestion d'un Cadran en Mode texte compatible avec version ESP32
  *             à partir des séquences d'échappement ANSI
  */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Cadran
{
public:
    Cadran(const int _posX=1,const int _posY=1,const int _hauteur=1,const int _largeur=7);
    ~Cadran();

    void Afficher (const int _heures, const int _minutes);
    void Afficher (const string _chaine, const int _valeur);
    void Afficher (const string _message,const string _valeur);

private:
    void PositionnerCurseur(const int _posx, const int _posy);
    int posX;   /// coordonnée en X du premier caractère dans le cadran
    int posY;   /// coordonnée en Y du premier caractère dans le cadran
    int hauteur;    /// nombre de lignes du cadran
    int largeur;    /// nombre de caratères par ligne
};

#endif // CADRAN_H
