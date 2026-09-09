# Tic Tac Toe

Jeu du morpion (tic-tac-toe) jouable en console à deux joueurs.

## Fonctionnement

1. Les deux joueurs saisissent leur pseudo
2. Le plateau 3x3 est affiché après chaque tour
3. Les joueurs jouent chacun leur tour en indiquant des coordonnées (ligne, colonne)
4. Le joueur X commence, puis le joueur O, en alternance

## Compiler et exécuter

```bash
gcc -Wall -o tictactoe tictactoe.c
./tictactoe
```

## Ce que ça m'a appris

- Manipulation d'un tableau 2D (`char tab[3][3]`)
- Structures (`struct Player`) pour stocker les noms des joueurs
- Boucles avec alternance de tours via le modulo (`round % 2`)
- Affichage formaté d'un plateau de jeu

## Limites connues / pistes d'amélioration

- Pas de détection automatique de victoire (alignement horizontal, vertical, diagonal) : la boucle tourne pendant 9 manches sans vérifier de condition de victoire
- Pas de vérification que la case jouée est bien dans le plateau (risque de dépassement si des coordonnées invalides sont saisies)
- Pas de vérification qu'une case n'est pas déjà prise avant de la réutiliser dans le message de fin
