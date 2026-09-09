# Calculatrice

Petit programme en console qui demande deux nombres entiers à l'utilisateur et affiche leur somme.

## Fonctionnement

1. Le programme demande une première valeur (`scanf`)
2. Il demande une seconde valeur
3. Il calcule et affiche le résultat de l'addition

## Compiler et exécuter

```bash
gcc -Wall -o calculatrice calculatrice.c
./calculatrice
```

## Ce que ça m'a appris

- Saisie utilisateur avec `scanf`
- Manipulation de variables `int`
- Formatage de l'affichage avec `printf`

## Pistes d'amélioration

- Ajouter la soustraction, multiplication, division (avec gestion de la division par zéro)
- Boucler pour enchaîner plusieurs calculs sans relancer le programme
- Gérer les erreurs de saisie (valeur non numérique)
