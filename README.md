# Apprentissage du C

Ce dépôt retrace mon apprentissage du langage C : notes commentées directement dans le code, exercices pratiques et mini-projets. L'objectif était de comprendre en profondeur les fondamentaux du langage (gestion mémoire, pointeurs, structures, binaire) avant d'aller plus loin.

## Structure du dépôt

```
apprentissage-c/
├── 01-bases/              → conditions, boucles, opérateurs
├── 02-fonctions/          → déclaration, prototypes, pointeurs de fonction
├── 03-pointeurs/          → pointeurs simples, génériques, pointeurs de fonction
├── 04-tableaux-vecteurs/  → tableaux 1D/2D, vecteurs de structures
├── 05-chaines/            → manipulation de chaînes de caractères
├── 06-binaire-bitwise/    → opérateurs binaires, conversions, visualisation
├── 07-structures/         → struct, enum, union
├── 08-preprocesseur/      → macros, directives, indicateurs de format
├── 09-multi-fichiers/     → compilation séparée (.h / .c)
├── mini-projets/
│   ├── calculatrice/
│   ├── tictactoe/
│   └── rolegame/
└── notes/
    └── GitHubBasics.md
``` 

## Détail des fichiers

| Dossier | Fichiers | Sujet |
|---|---|---|
| `01-bases/` | `conditions.c`, `boucle.c`, `while.c`, `divisible.c`, `month.c`, `numberpnorn.c`, `moyenne.c` | Conditions, boucles (`for`, `while`, `do...while`), `switch` |
| `02-fonctions/` | `fonctions.c`, `exotom.c` | Déclaration/prototype, `static`, `inline`, variables statiques |
| `03-pointeurs/` | `pointeurs.c`, `pointeursex.c`, `ptrgenfonct.c` | Pointeurs simples, doubles, pointeurs génériques (`void*`), pointeurs de fonction |
| `04-tableaux-vecteurs/` | `tab&vecteurs.c`, `vecteurstype.c` | Tableaux 1D/2D, vecteurs de structures, tableaux de pointeurs de fonction |
| `05-chaines/` | `chainechar.c`, `majuscule.c` | `strlen`, `strcat`, `strcmp`, `strchr`, `strstr`, réimplémentation de `strlen` |
| `06-binaire-bitwise/` | `binaire.c`, `colorbin.c`, `printbin.c`, `tableofthruth.c`, `exo_binaires.txt`, `exobinaire1.txt` | Opérateurs `& \| ^ ~ << >>`, conversions décimal/binaire/hexadécimal, affichage coloré des bits |
| `07-structures/` | `enumstruc.c`, `union.c` | `struct`, `enum`, `union`, champs de bits |
| `08-preprocesseur/` | `indicators.c` | `#define`, `#ifdef`, indicateurs de format `printf`/`scanf` |
| `09-multi-fichiers/` | `maintom.c`, `subtom.c`, `subtom.h` | Compilation séparée, guards d'en-tête, variables `static` globales |
| `mini-projets/` | voir plus bas | Programmes complets avec interaction utilisateur |
| `notes/` | `GitHubBasics.md` | Aide-mémoire des commandes Git de base |

## Mini-projets

- **[Calculatrice](mini-projets/calculatrice/)** — addition simple avec saisie utilisateur
- **[Tic Tac Toe](mini-projets/tictactoe/)** — jeu à deux joueurs avec plateau 3x3 (console)
- **[Role Game](mini-projets/rolegame/)** — mini RPG avec création de personnage et système de combat (console)

## Compiler et exécuter un fichier

Tous les fichiers se compilent avec `gcc` :

```bash
gcc -Wall -o programme fichier.c
./programme
```

L'option `-Wall` affiche les avertissements de compilation, utile pour repérer les erreurs de logique que le compilateur autorise mais qui restent risquées.

## Ce que j'ai appris

- Gestion de la mémoire et pointeurs (simples, doubles, génériques, de fonction)
- Représentation binaire des nombres, opérateurs bit à bit, conversions de bases
- Structures de données : `struct`, `enum`, `union`, champs de bits
- Compilation séparée en plusieurs fichiers (`.h`/`.c`) et guards d'en-tête
- Manipulation de chaînes de caractères sans bibliothèque haut niveau
- Construction d'un programme interactif complet (boucle de jeu, machine à états simple)
