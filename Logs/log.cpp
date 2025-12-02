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
/**
 * @brief Affiche dans la console uniquement les lignes de auth.log
 *        contenant des informations liées à sudo.
 *
 * Remarque : nécessite que l'utilisateur soit dans le groupe "adm"
 * pour pouvoir lire /var/log/auth.log :
 *   sudo usermod -aG adm $USER
 *   newgrp adm
 */
void sudoLog(const string &cheminFichier)
{
    ifstream fichier(cheminFichier);

    if (!fichier.is_open()) {
        cerr << ">>> ERREUR : impossible d'ouvrir le fichier \""
             << cheminFichier << "\" en lecture." << endl;
        cerr << ">>> Avez-vous bien ajouté votre utilisateur au groupe 'adm' ?" << endl;
        return;
    }

    cout << ">>> Lecture des entrees sudo dans le fichier : "
         << cheminFichier << endl << endl;

    string ligne;
    bool trouve = false;

    while (getline(fichier, ligne)) {
        // Filtrer : n'afficher que les lignes contenant "sudo"
        if (ligne.find("sudo") != string::npos) {
            cout << ligne << endl;
            trouve = true;
        }
    }

    fichier.close();

    if (!trouve) {
        cout << ">>> Aucune entree contenant 'sudo' n'a ete trouvee dans ce fichier." << endl;
    } else {
        cout << endl << ">>> Fin de l'affichage des logs sudo." << endl;
    }
}