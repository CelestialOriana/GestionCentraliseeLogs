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
 * @brief affiche le titre de l'application du programme
 * @return
 */
int main(){
    cout << "CIEL - Gestion centralisee des logs" << endl;
    afficherMenu();
    return 0;

}

