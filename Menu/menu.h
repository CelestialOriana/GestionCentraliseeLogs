/*********************************************************************************************
* @file main.h
* @brief déclaration des fonctions d'affichage et du traitement du menu
* @author Ah-hong Emmanuel
* @version v1.0
* @class BTS CIEL 2
* @date 18/11/2025
*********************************************************************************************/

#pragma once
/*********************************************************************************************
* @file menu.h
* @brief Déclarations des fonctions du module Menu (affichage et gestion des choix).
*********************************************************************************************/

/**
 * @brief Affiche le menu principal de l'application.
 */
void afficherMenu();

/**
 * @brief Demande le choix utilisateur, contrôle la saisie et exécute immédiatement l'action.
 *
 * Cette fonction combine l'ancienne logique :
 *  - lecture du choix
 *  - gestion des erreurs
 *  - switch/case pour traiter les options
 */
void choisirLog();
