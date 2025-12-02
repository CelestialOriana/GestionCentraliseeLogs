/**
* @file log.h
* @brief Déclaration des fonctions de test d'écriture et de lecture dans un fichier texte
* @author Ah-hong Emmanuel
* @version v3.0
* @class BTS CIEL 2
* @date 02/12/2025
*/
#pragma once

#include <string>

/**
 * @brief Test d'écriture dans un fichier texte.
 *        Crée (ou écrase) un fichier texte et écrit plusieurs lignes dedans.
 * @param nomFichier Nom du fichier à créer/écraser (par défaut "test.txt").
 */
void testEcritureFichier(const std::string &nomFichier = "test.txt");

/**
 * @brief Test de lecture d'un fichier texte.
 *        Ouvre un fichier texte et affiche son contenu ligne par ligne.
 * @param nomFichier Nom du fichier à lire (par défaut "test.txt").
 */
void testLectureFichier(const std::string &nomFichier = "test.txt");

/**
 * @brief Affiche dans la console les lignes du fichier /var/log/auth.log
 *        correspondant aux commandes sudo.
 *
 * Cette fonction :
 *  - ouvre le fichier /var/log/auth.log (ou un chemin passé en paramètre),
 *  - lit le fichier ligne par ligne,
 *  - n'affiche que les lignes contenant "sudo".
 *
 * @param cheminFichier Chemin du fichier de log d'authentification
 *        (par défaut "/var/log/auth.log").
 */
void sudoLog(const std::string &cheminFichier = "/var/log/auth.log");