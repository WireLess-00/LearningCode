#include <stdio.h>
/*
Créer un jeu de rôle:

- On nous demande quel rôle on veut être
- Png qui explique le monde au début du jeu (univers)
- il a fini de parler, un combat démarre,
- avoir un système de combat avec des hp des deux côtés
- voir ceux de l'ennemi et les tiens
- mini choix de compétences
- Fin de combat avec système d'xp
- Dialogue pour célébrer ton combat ou bien ta défaite
#include <stdio.h>
*/

typedef enum Roles
{
    Ghost,
    Alien,
    Possessed,
    Medium

}Roles;

typedef struct Player
{
    unsigned char Name;
    Roles Roles;

}Player;


int main(void)
{
    printf("Vous êtes envoyé au Japon pour combattre Pépé Turbo qui veut éliminer Mémé Turbo, seul problème si Pépé Turbo élimine Mémé Turbo elle ne nous révélera jamais ou est cacher la deuxième boule d'Okarun.\n");
    printf("Choisissez une classe pour anéantir Pépé Turbo :\n- Ghost\n- Alien\n- Possessed\n- Medium\n");
    
    
    
    
    
    return 0;
}