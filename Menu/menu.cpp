/*********************************************************************************************
* @file main.h
* @brief déclaration des fonctions d'affichage et du traitement du menu
* @author Ah-hong Emmanuel
* @version v1.0
* @class BTS CIEL 2
* @date 18/11/2025
*********************************************************************************************/

#include <iostream>
#include "menu.h"

/*********************************************************************************************
* @file menu.cpp
* @brief Définitions des fonctions du module Menu.
*********************************************************************************************/

using namespace std;

void afficherMenu() {
    cout << endl;
    cout << "===== MENU PRINCIPAL =======" << endl;
    cout << "1 - Afficher log sudo" << endl;
    cout << "2 - Afficher et enregistrer log ssh" << endl;
    cout << "3 - pocoGetAllLog" << endl;
    cout << "4 - pocoGetOneLog" << endl;
    cout << "5 - pocoPostSSHLog" << endl;
    cout << "0 - Sortir du programme" << endl;
}

/**
 * @brief Lit le choix de l'utilisateur, contrôle la saisie, et traite directement l'action.
 */
void choisirLog() {
    int choix;
    cout << "Quelle est votre choix ?" << endl;
    cin >> choix;

    // Gestion d'erreur de saisie
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << ">>> ERREUR : vous devez ecrire un nombre uniquement !" << endl;
        return;
    }

    // Traitement du choix
    switch (choix) {
        case 1:
            cout << "\nTraitement de l'option 1 : Affichage log sudo" << endl;
            break;

        case 2:
            cout << "\nTraitement de l'option 2 : Affichage et enregistrement log ssh" << endl;
            break;

        case 3:
            cout << "\nTraitement de l'option 3 : pocoGetAllLog" << endl;
            break;

        case 4:
            cout << "\nTraitement de l'option 4 : pocoGetOneLog" << endl;
            break;

        case 5:
            cout << "\nTraitement de l'option 5 : pocoPostSSHLog" << endl;
            break;

        case 0:
            cout << "\nArret du programme. Au revoir !" << endl;
            break;

        default:
            cout << "\nOption invalide. Choisissez un nombre entre 0 et 5." << endl;
            break;
    }
}
