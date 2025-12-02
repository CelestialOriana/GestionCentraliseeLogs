/**
* @file menu.cpp
* @brief Définitions des fonctions du module Menu.
*/

#include <iostream>
#include "menu.h"
#include "../Logs/log.h"   // accès aux fonctions testEcritureFichier / testLectureFichier

using namespace std;

void afficherMenu() {
    cout << endl;
    cout << "===== MENU PRINCIPAL =====" << endl;
    cout << "1 - Test d'ecriture dans un fichier texte" << endl;
    cout << "2 - Test de lecture d'un fichier texte" << endl;
    cout << "3 - pocoGetAllLog" << endl;
    cout << "4 - pocoGetOneLog" << endl;
    cout << "5 - pocoPostSSHLog" << endl;
    cout << "0 - Sortir du programme" << endl;
}

void choisirLog() {
    int choix;

    cout << "Quelle est votre choix ? " << endl;
    cin >> choix;

    // Gestion d'erreur de saisie
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << ">>> ERREUR : vous devez ecrire un nombre uniquement !" << endl;
        return;
    }

    switch (choix) {
        case 1:
            cout << "\nTraitement de l'option 1 : Test d'ecriture dans un fichier texte" << endl;
            testEcritureFichier();   // crée/écrase test.txt et écrit des lignes
            break;

        case 2:
            cout << "\nTraitement de l'option 2 : Test de lecture d'un fichier texte" << endl;
            testLectureFichier();    // lit et affiche test.txt
            break;

        case 3:
            cout << "\nTraitement de l'option 3 : pocoGetAllLog" << endl;
            // TODO: ajouter l'appel POCO plus tard
            break;

        case 4:
            cout << "\nTraitement de l'option 4 : pocoGetOneLog" << endl;
            // TODO: ajouter l'appel POCO plus tard
            break;

        case 5:
            cout << "\nTraitement de l'option 5 : pocoPostSSHLog" << endl;
            // TODO: ajouter l'appel POCO plus tard
            break;

        case 0:
            cout << "\nArret du programme. Au revoir !" << endl;
            break;

        default:
            cout << "\nOption invalide. Choisissez un nombre entre 0 et 5." << endl;
            break;
    }
}
