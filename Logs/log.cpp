/**
* @file log.cpp
* @brief Définition des fonctions de test d'écriture et de lecture dans un fichier texte
* @author Ah-hong Emmanuel
* @version v3.0
* @class BTS CIEL 2
* @date 02/12/2025
*/

#include "log.h"
#include <fstream>
#include <iostream>

using namespace std;

void testEcritureFichier(const string &nomFichier)
{
    ofstream fichier(nomFichier); // ouverture en écriture (troncation par défaut)

    if (!fichier.is_open()) {
        cerr << ">>> ERREUR : impossible d'ouvrir le fichier \""
             << nomFichier << "\" en ecriture." << endl;
        return;
    }

    fichier << "Ligne 1 : test d'ecriture dans un fichier texte." << endl;
    fichier << "Ligne 2 : ceci est une deuxieme ligne." << endl;
    fichier << "Ligne 3 : encore une ligne pour le test." << endl;

    fichier.close();

    cout << ">>> Le fichier \"" << nomFichier
         << "\" a ete cree et rempli avec succes." << endl;
}

void testLectureFichier(const string &nomFichier)
{
    ifstream fichier(nomFichier);

    if (!fichier.is_open()) {
        cerr << ">>> ERREUR : impossible d'ouvrir le fichier \""
             << nomFichier << "\" en lecture." << endl;
        return;
    }

    cout << ">>> Lecture du fichier \"" << nomFichier << "\" :" << endl;

    string ligne;
    while (getline(fichier, ligne)) {
        cout << ligne << endl;
    }

    fichier.close();

    cout << ">>> Fin de la lecture du fichier." << endl;
}
