#include <iostream>
/*********************************************************************************************
* @file main.cpp
* @brief Programme principal de l'application "Gestion centralisée des logs
* @brief Ce programme gère l'affichage d'un menu et le traitement du choix de son utilisateur
* @author Ah-hong Emmanuel
* @version v1.0
* @class BTS CIEL 2
* @date 18/11/2025
*********************************************************************************************/
using namespace std;
/**
 * @brief affiche le menu principal de l'application
 */
void afficherMenu() {
    cout << endl;
    cout << "=====MENU PRINCIPAL=======" << endl;
    cout << " Choisir une option" << endl;
    cout << "1 - Afficher log sudo" << endl;
    cout << "2 - Afficher et enregistrer log ssh" << endl;
    cout << "3 - pocoGetAllLog" << endl;
    cout << "4 - pocoGetOneLog" << endl;
    cout << "5 - pocoPostSSHLog" << endl;
    cout << "0 - Sortir du programme" << endl;
}
/**
 * @brief fonction qui demande à l'utilisateur de choisir dans le menu avec des switch/case
 * @param choix du numéro sélectionné
 */
void traiterChoix(int choix){
    switch (choix){
        case 1:
            cout << "\n Traitement de l'option 1 : Affichage log sudo" << endl;
            //  lire et afficher les logs sudo.
            break;
        case 2:
            cout << "\n Traitement de l'option 2 : Affichage et enregistrement log ssh" << endl;
            //  lire, afficher et sauvegarder les logs ssh.
            break;
        case 3:
            cout << "\n Traitement de l'option 3 : pocoGetAllLog (Recuperation tous les logs via POCO)" << endl;
            //  fonction POCO pour récupérer tous les logs.
            break;
        case 4:
            cout << "\n Traitement de l'option 4 : pocoGetOneLog (Recuperation un log specifique via POCO)" << endl;
            //  fonction POCO pour récupérer un log.
            break;
        case 5:
            cout << "\n Traitement de l'option 5 : pocoPostSSHLog (Envoye un log SSH via POCO)" << endl;
            //  fonction POCO pour poster un log SSH.
            break;
        case 0:
            cout << "\n Arret du programme. Au revoir !" << endl;
            break;
        default:
            cout << "\n Option " << choix << " FAUX !. Veuillez choisir une option valide (0-5)." << endl;
            break;
    }
}

/**
 * @brief affiche le titre de l'application du programme
 * @return
 */
int main(){
    cout << "CIEL - Gestion centralisee des logs" << endl;
    afficherMenu();
    int choix;
    cout << "Quelle est votre choix?" << endl;
    cin >> choix;

    //gestion des erreurs de saisie
    if (cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << ">>> ERREUR : vous devez ecrire un nombre uniquement !" << endl;
        return 0;
    }
    traiterChoix(choix);
    return 0;
}

