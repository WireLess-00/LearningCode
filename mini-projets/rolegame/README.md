# Role Game

Mini RPG jouable en console : création de personnage, choix narratifs, puis combat au tour par tour contre un ennemi.

## Fonctionnement

1. **Création du personnage** : choix du genre, puis saisie d'un pseudo caractère par caractère (3 à 8 caractères)
2. **Choix du rôle** : le joueur choisit une classe parmi Ghost, Alien, Possessed ou Medium
3. **Événement narratif** : un choix de nourriture affecte les points de vie avant le combat
4. **Combat au tour par tour** : à chaque round, le joueur choisit une compétence (attaque, soin, ou double attaque) ; l'ennemi riposte automatiquement
5. Le combat se termine quand l'ennemi ou le joueur atteint 0 points de vie, avec un gain d'XP en cas de victoire

## Compiler et exécuter

```bash
gcc -Wall -o rolegame rolegame.c
./rolegame
```

## Ce que ça m'a appris

- Structures imbriquées (`struct Player` contenant `struct Name`, `enum Genres`, `enum Roles`, `enum Skills`)
- Machine à états simple pilotée par des boucles `while` et des `switch`
- Gestion d'un système de points de vie / expérience avec des conditions de fin de partie
- Macros avec arguments implicites (`#define PlayerName()`) pour éviter la répétition de code d'affichage
- Saisie caractère par caractère avec `getchar()` et gestion du buffer d'entrée

## Limites connues / pistes d'amélioration

- Système de combat basique : l'ennemi n'a pas d'IA, il inflige toujours les mêmes dégâts
- La structure `Name` limite les pseudos à 8 caractères fixes (un `char[9]` classique serait plus simple et plus flexible)
- Le combat ne gère pas d'égalité si les deux personnages tombent à 0 PV le même round

## À propos de la macro `PlayerName()`

Cette macro appelle `printf` en insérant directement les 8 champs `namec1` à `namec8` de la structure `Name`. C'est une façon (un peu détournée) d'éviter de retaper toute la ligne `printf` à chaque fois que le pseudo doit être affiché.
