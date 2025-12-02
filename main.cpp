#include <iostream>
#include "Menu/menu.h"

/**
* @file main.cpp
* @brief Programme principal : affiche le menu puis laisse choisirLog() gérer le reste.
*/

using namespace std;

int main() {
    cout << "CIEL - Gestion centralisee des logs" << endl;

    afficherMenu();
    choisirLog();

    return 0;
}
