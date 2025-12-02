# 🚀 Gestion Centralisée des Logs
**Projet C++ – BTS CIEL 2**

Ce projet a pour objectif de mettre en place une application C++ permettant de centraliser l’accès et la consultation de différents types de logs système, en particulier sous Linux.  
Il est découpé en plusieurs sprints permettant une mise en place progressive et structurée.

---

# 📑 Table des matières
- [🎯 Objectifs](#-objectifs)
- [📂 Structure du projet](#-structure-du-projet)
- [🛠️ Technologies utilisées](#️-technologies-utilisées)
- [📦 Installation & Compilation](#-installation--compilation)
- [📘 Sprints réalisés](#-sprints-réalisés)
    - [Sprint 1 – Architecture & Menu](#sprint-1--architecture--menu)
    - [Sprint 2 – Refactorisation & Modularisation](#sprint-2--refactorisation--modularisation)
    - [Sprint 3 – Lecture & Gestion des fichiers log](#sprint-3--lecture--gestion-des-fichiers-log)
- [🔎 Mini-projet – sudoLog()](#mini-projet--sudolog)
- [📌 Améliorations futures](#-améliorations-futures)

---

# 🎯 Objectifs
- Mettre en place un système modulaire pour afficher un menu principal.
- Centraliser différentes méthodes de récupération de logs.
- Mettre en place une architecture professionnelle :
    - séparation `.h` / `.cpp`
    - modules indépendants (`Menu`, `Logs`, etc.)
- Lire et filtrer des logs sous Linux.

---

# 📂 Structure du projet

/GestionCentraliseeLogs
│
├── main.cpp
├── main.h
│
├── Menu/
│ ├── menu.cpp
│ └── menu.h
│
├── Logs/
│ ├── log.cpp
│ └── log.h
│
└── README.md

---

# 🛠️ Technologies utilisées
- **C++17**
- **Compilation g++ / CMake**
- **Architecture modulaire (fichiers séparés)**
- Utilisation standard des flux (`ifstream`, `ofstream`)
- Gestion d’erreurs d’E/S
- Manipulation de fichiers système Linux

---

# 📘 Sprints réalisés

## 🔵 Sprint 1 – Architecture & Menu
**Objectifs du sprint :**
- Créer une première version fonctionnelle du programme.
- Implémenter un menu affichant différentes options.
- Structurer le code dans un fichier `main.cpp`.

**Ce qui a été réalisé :**
- Création du menu principal.
- Première gestion du choix utilisateur.
- Organisation basique des fonctions.

---

## 🟢 Sprint 2 – Refactorisation & Modularisation
**Objectifs :**
- Séparer le code dans des modules :
  - `Menu/menu.cpp`
  - `Menu/menu.h`
  - `main.cpp`
- Documenter avec `@file`, `@brief`, etc.
- Améliorer la structure du projet.

**Ce qui a été réalisé :**
- Séparation propre des responsabilités :
  - `main.cpp` → exécutable
  - `menu.cpp` → logique du menu
  - `menu.h` → déclarations
- Amélioration générale du code et des commentaires.

---

## 🟠 Sprint 3 – Lecture & Gestion des fichiers log
**Objectifs :**
- Créer un module `Logs` :
  - `log.cpp`
  - `log.h`
- Ajouter des fonctions :
  - `testEcritureFichier()`
  - `testLectureFichier()`
- Intégrer ces fonctions dans le menu.
- Préparer la gestion de vrais logs système.

**Ce qui a été réalisé :**
- Module complet `Logs/` avec :
  - écriture dans un fichier texte (`test.txt`)
  - lecture d’un fichier texte ligne par ligne
- Système d’import propre dans `menu.cpp` :
  ```cpp
  #include "../Logs/log.h"

🔎 Mini-projet – sudoLog()
🎯 Objectifs

Identifier le fichier contenant les logs sudo → /var/log/auth.log

Lire ce fichier sous Linux.

Filtrer uniquement les lignes contenant sudo.

Afficher les résultats dans la console.

✔️ Ce qui a été réalisé dans ton projet

✦ Création de la fonction :

void sudoLog(const std::string &cheminFichier = "/var/log/auth.log");

| Sprint              | Statut         | Détails                               |
| ------------------- | -------------- | ------------------------------------- |
| Sprint 1            | ✔️ Terminé     | Menu simple                           |
| Sprint 2            | ✔️ Terminé     | Modularisation complète               |
| Sprint 3            | ✔️ Terminé     | Lecture/écriture + début gestion logs |
| Mini-projet sudoLog | ✔️ Implémenté  | Lecture filtrée de /var/log/auth.log  |
| Sprint Poco         | ⏳ Non commencé | À venir                               |

📬 Auteur

Ah-hong Emmanuel
BTS CIEL – 2025
