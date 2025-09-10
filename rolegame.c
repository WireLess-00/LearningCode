#include <stdio.h>
#define PlayerName() printf("Votre pseudo est : %c%c%c%c%c%c%c%c\n", Player1.name.namec1, Player1.name.namec2, Player1.name.namec3, Player1.name.namec4, Player1.name.namec5, Player1.name.namec6, Player1.name.namec7, Player1.name.namec8)

/*
- On nous demande quel rôle on veut être
- Png qui explique le monde au début du jeu (univers)
- il a fini de parler, un combat démarre,
- avoir un système de combat avec des hp des deux côtés
- voir ceux de l'ennemi et les tiens
- mini choix de compétences
- Fin de combat avec système d'xp
- Dialogue pour célébrer ton combat ou bien ta défaite
*/

typedef enum Genres
{
    Male = 1,
    Female

}Genres;

typedef struct Name
{
    char namec1;
    char namec2;
    char namec3;
    char namec4;
    char namec5;
    char namec6;
    char namec7;
    char namec8;
}Name;

typedef enum Roles
{
    Ghost = 0,
    Alien = 42,
    Possessed = 666,
    Medium = 8

}Roles;

typedef enum Skills
{
    Skill1,
    Skill2,
    Skill3

}Skills;

typedef struct Player
{
    Name name;
    Genres genres;
    Roles roles;
    int hp;
    int attack;
    int defense;
    int xp;
    Skills skills;

}Player;


int main(void)
{
    Player Player1;
    Player1.hp = 100;
    Player1.xp = 0;
    Player1.attack = 10;
    Player1.defense = 5;
    Player1.genres = 0;
    Player1.roles = 1;

    Player Enemy1;
    Enemy1.hp = 100;
    Enemy1.attack = 10;
    Enemy1.defense = 5;

    unsigned int sure = 0;
    unsigned int yes = 1;
    unsigned int no = 2;

/*
    while (Player1.genres == 0) 
    {
        printf("Choisissez votre genre :\n\n1. Gros Male\n2.Petite Femelle\n\n");
        scanf("%d", &Player1.genres);
        printf("\n");

        if (Player1.genres == Male)
        {
            printf("Vous avez dit Un Male virile ?\n\n1.Oui\n2.Non\n\n");
        }
        else if (Player1.genres == Female)
        {
            printf("Vous avez dit Une Petite femelle sans défense ?\n\n1.Oui\n2.Non\n\n");
        }

        scanf("%d",&sure);
        printf("\n");

        if (sure == yes)
        {
            if (Player1.genres == Male) 
            {
                printf("Vous êtes un garçon.\n");
                printf("\n");
            }
            else if (Player1.genres == Female) 
            {
                printf("Vous êtes une fille.\n");
                printf("\n");
            }
        }
        else
        {
            Player1.genres = 0;
        }
    }

    printf("Maintenant choisissez votre Pseudo caractères par caractères avec un minimum de 3 caractères et un maximum de 8 caractères.\n");
    printf("\n");
    printf("Ecrivez le premier caractère :\n");
    getchar();
    Player1.name.namec1 = getchar();
    getchar();
    printf("\n");
    printf("Ecrivez le deuxième caractère :\n");
    Player1.name.namec2 = getchar();
    getchar();
    printf("\n");
    printf("Ecrivez le troisième caractère :\n");
    Player1.name.namec3 = getchar();
    getchar();
    printf("\n");

    printf("Pour le moment votre pseudos se constitue de %c%c%c, Voulez vous continué ?\n\n1.Oui\n2.Non\n", Player1.name.namec1, Player1.name.namec2, Player1.name.namec3);
    scanf("%d",&sure);
    printf("\n");

    if (sure == yes)
    {
        printf("Ecrivez le quatrième caractère :\n");
        getchar();
        Player1.name.namec4 = getchar();
        printf("\n");
        printf("Maintenant votre pseudo se constitue de %c%c%c%c, Voulez vous continué ?\n\n1.Oui\n2.Non\n\n", Player1.name.namec1, Player1.name.namec2, Player1.name.namec3, Player1.name.namec4);
        scanf("%d",&sure);
        printf("\n");

        if (sure == yes) 
        {
            printf("Ecrivez le cinquième caractère :\n");
            getchar();
            Player1.name.namec5 = getchar();
            printf("\n");
            printf("Maintenant votre pseudo se constitue de %c%c%c%c%c, Voulez vous continué ?\n\n1.Oui\n2.Non\n\n", Player1.name.namec1, Player1.name.namec2, Player1.name.namec3, Player1.name.namec4, Player1.name.namec5);
            scanf("%d",&sure);
            printf("\n");

            if (sure == yes) 
            {
                printf("Ecrivez le sixième caractère :\n");
                getchar();
                Player1.name.namec6 = getchar();
                printf("\n");
                printf("Maintenant votre pseudo se constitue de %c%c%c%c%c%c, Voulez vous continué ?\n\n1.Oui\n2.Non\n\n", Player1.name.namec1, Player1.name.namec2, Player1.name.namec3, Player1.name.namec4, Player1.name.namec5, Player1.name.namec6);
                scanf("%d",&sure);
                printf("\n");

                if (sure == yes) 
                {
                    printf("Ecrivez le septième caractère :\n");
                    getchar();
                    Player1.name.namec7 = getchar();
                    printf("\n");
                    printf("Maintenant votre pseudo se constitue de %c%c%c%c%c%c%c, Voulez vous continué ?\n\n1.Oui\n2.Non\n\n", Player1.name.namec1, Player1.name.namec2, Player1.name.namec3, Player1.name.namec4, Player1.name.namec5, Player1.name.namec6, Player1.name.namec7);
                    scanf("%d",&sure);
                    printf("\n");    

                    if (sure == yes) 
                    {
                        printf("Ecrivez le huitième et dernier caractère :\n");
                        getchar();
                        Player1.name.namec8 = getchar();
                        printf("\n");
                        PlayerName();
                        printf("\n");
                    }    
                }
            }            
        }                
    }
    
    PlayerName();
    printf("\n");
*/

    // if role nanan attaque et defe == x tout les role et finir avec un else ?

    printf("Vous êtes envoyé au Japon pour combattre Pépé Turbo qui veut éliminer Mémé Turbo, seul problème si Pépé Turbo élimine Mémé Turbo elle ne nous révélera jamais ou est cacher la deuxième boule d'Okarun.\n\n");
    
     while (Player1.roles != 0 && Player1.roles != 42  && Player1.roles != 666 && Player1.roles != 8) 
    {
        printf("Maintenant %c%c%c%c%c%c%c%c, choisissez une classe pour anéantir Pépé Turbo :\n\n0 - Ghost\n42 - Alien\n666- Possessed\n8 - Medium\n", Player1.name.namec1, Player1.name.namec2, Player1.name.namec3, Player1.name.namec4, Player1.name.namec5, Player1.name.namec6, Player1.name.namec7, Player1.name.namec8);
        scanf("%d", &Player1.roles);
        printf("\n");

        if (Player1.roles == Ghost)
        {
            printf("Vous voulez être un Ghost ?\n\n1.Oui\n2.Non\n\n");
        }

        else if (Player1.roles == Alien)
        {
            printf("Vous voulez être un Alien ?\n\n1.Oui\n2.Non\n\n");
        }
        else if (Player1.roles == Possessed)
        {
            printf("Vous voulez être un Possessed ?\n\n1.Oui\n2.Non\n\n");
        }
        else if (Player1.roles == Medium)
        {
            printf("Vous voulez être un Medium ?\n\n1.Oui\n2.Non\n\n");
        }

        scanf("%d",&sure);
        printf("\n");

        if (sure == yes)
        {
            if (Player1.roles == Ghost) 
            {
                printf("Vous êtes un Ghost.\n");
                printf("\n");
            }
            else if (Player1.roles == Alien) 
            {
                printf("Vous êtes un Alien.\n");
                printf("\n");
            }
            else if (Player1.roles == Possessed) 
            {
                printf("Vous êtes un Possessed.\n");
                printf("\n");
            }
            else if (Player1.roles == Medium) 
            {
                printf("Vous êtes un Medim.\n");
                printf("\n");
            }
        }
        else
        {
            Player1.roles = 1;
        }
    }
    
    
    
    return 0;
}