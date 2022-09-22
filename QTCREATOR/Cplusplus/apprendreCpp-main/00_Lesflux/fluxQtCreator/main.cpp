#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    string nomDuFichier;
    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier;
    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str()); // c_str() transforme string en char*
    if (!leFichier .is_open())
    cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
    string pays;
    int nbOr;
    int nbArgent;
    int nbBronze;
    // A compléter, affichage de la première ligne du tableau
    cout << "+" << setfill('-') << setw(21) << "+" << setfill('-') << setw(16) << "+" << setfill('-') << setw(16) << "+" << setfill('-') << setw(16) << "+" <<  setfill(' ') << endl;
    do
    {
    //récupération des valeurs
    leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
    if (leFichier.good())//Si les valeurs ont bien été lues
    {
        cout<< "|" << setw(20) << left << pays << "|" << setw(15) << right << nbOr << "|" << setw(15) << right << nbArgent << "|" << setw(15) << right << nbBronze << "|" << endl;
    // A compléter, affichage de chaque ligne du tableau
    }
    } while (!leFichier.eof());
    cout << "+" << setfill('-') << setw(21) << "+" << setfill('-') << setw(16) << "+" << setfill('-') << setw(16) << "+" << setfill('-') << setw(16) << "+" <<  setfill(' ') << endl;
    // A compléter, affichage de la dernière ligne du tableau.
    }
    return 0;
}




/*
int main()
{
    string motCle ;
    // string remplace un tableau de caractères. la taille de la chaîne est dynamique
    int valeur;
    ifstream fichier("config.txt");
    if (!fichier.is_open())
    cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
    do
    {
    // le fichier contient sur chaque ligne des couples mot clé + valeur
    fichier >> motCle >> valeur ;
    if (fichier.good())//Si les valeurs ont bien été lues
    {
        cout<< motCle << " " << valeur << endl;
    // traitement des variables motCle et valeur
    }
    } while(!fichier.eof());
    }
    return 0;
}


int main()
{
    int val = 192;
    float val2 = 3.141592654;
    bool sortie = true;
    cout << "Affichage par défaut : " << val << endl;
    cout << "Affichage en hexadécimal : " << hex << val << endl;
    cout << "Affichage en décimal : " << dec << val << endl;
    cout << hex << val << " " << uppercase << val << " " ;
    cout << showbase << val << nouppercase << " " << val << endl;
    cout << "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
    cout << "|" << setw(20) << left << "abc" << "|" << endl;
    cout << "|" << setw(20) << right << "abc" << "|" << endl;
    cout << "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
    cout << dec << sortie << " " << boolalpha << sortie << endl;
    cout << val2 << " " << fixed << val2 << " " << scientific << val2 << " ";
    cout << fixed << setprecision(2) << val2 << endl;
    cout << "Entrez un nombre en octal : " ;
    cin >> oct >> val ;
    cout << "vous avez saisie " << dec << val << " en décimal" << endl;
    return 0;
}


int main()
{
    int val = 192;
    cout << "Affichage par défaut : " << val << endl;
    cout << "Affichage en hexadécimal : " << hex << val << endl;
    cout << "Affichage en décimal : " << dec << val << endl; //remettre en decimal pour empecher l'affichage permanent de l'hexa
    return 0;
}

int main()
{
    char phrase[80+1];
    cout << "Saisir une phrase : " ;
    cin.getline(phrase,80) ;
    cout << "Votre phrase est :" << phrase << endl;
    return 0;
}

int main()
{
    float temperature {0.0};
    float humidite {0.0};
    int pression {1024};
    cout << "Saisir la température, l'humidité et la pression : " ;
    cin >> temperature >> humidite >> pression ;
    cout << "la température est : " << temperature << " °" << endl;
    cout << "le taux d'humidité est : " << humidite << " %" << endl;
    cout << "la pression est : " << pression << " hPa" << endl ;
    return 0;
}
*/
