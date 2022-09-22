#include <iostream>
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"
#include "menu.h"
#include "catalogue.h"
#define NB_BARRES 10

using namespace std;

int main()
{
    Barre uneBarre("205316", 5, 12, "Acier");
    BarreRectangle rectangle("205316", 5, 13, "Cuivre", 4);
    BarreRonde rond("456230", 12, 25, "Plastique", 25);
    BarreCarree carre("548630", 15, 23, "Alluminium", 8);
    Catalogue catalogue(NB_BARRES);
    int choix;
    try{
        Menu leMenu("/home/USERS/ELEVES/SNIR2021/tsoulaimana/Qt/BarreV2/Barre/text.txt");
        do
        {
            choix = leMenu.Afficher();
            switch (choix)
            {
            case OPTION_1:
                cout << "_______________________________" << endl;
                cout << "_____________BARRE_____________" << endl;
                uneBarre.AfficherCaracteristiques();
                cout << "_______________________________" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_2:
                cout << "___________________________________" << endl;
                cout << "_____________RECTANGLE_____________" << endl;
                rectangle.AfficherCaracteristiques();
                cout << "Le section du rectangle est de " << rectangle.CalculerSection() << endl;
                cout << "La masse du rectangle est de " << rectangle.CalculerMasse() << endl;
                cout << "___________________________________" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_3:
                cout << "________________________________" << endl;
                cout << "_______________ROND_____________" << endl;
                rond.AfficherCaracteristiques();
                cout << "Le section du rond est de " << rond.CalculerSection() << endl;
                cout << "La masse du rond est de " << rond.CalculerMasse() << endl;
                cout << "________________________________" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_4:
                cout << "________________________________" << endl;
                cout << "______________CARRE_____________" << endl;
                carre.AfficherCaracteristiques();
                cout << "Le section du carre est de " << carre.CalculerSection() << endl;
                cout << "La masse du carre est de " << carre.CalculerMasse() << endl;
                cout << "________________________________" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_5:
                catalogue.AfficherCatalogue();
                Menu::AttendreAppuiTouche();
                break;
            }

        } while(choix != QUITTER);
    }
    catch(std::runtime_error &e){
        cout << e.what() << endl;
        exit(EXIT_FAILURE);
    }

    return 0;
}
