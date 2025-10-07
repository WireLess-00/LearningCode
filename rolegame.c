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
    Skill1 = 1,
    Skill2,
    Skill3

}Skills;

typedef struct Player
{
    Name name;
    Genres genres;
    Roles roles;
    int hp;
    int xp;
    Skills skills;

}Player;

typedef enum Food
{
    Chaussonpommes =1,
    Painraisins

}Food;

int main(void)
{
    Player Player1;
    Player1.hp = 100;
    Player1.xp = 0;
    Player1.genres = 0;
    Player1.roles = 1;

    Player Enemy1;
    Enemy1.hp = 100;

    unsigned int sure = 0;
    unsigned int yes = 1;
    unsigned int no = 2;

    unsigned int round = 1;
    unsigned int choiceskill = 0;

    unsigned int choicefood = 0;

    while (Player1.genres == 0) 
    {
        printf("Choisissez votre genre :\n\n1 - Gros Male\n2 - Petite Femelle\n\n");
        scanf("%d", &Player1.genres);
        printf("\n");

        if (Player1.genres == Male)
        {
            printf("Vous avez dit Un Male virile ?\n\n1 - Oui\n2 - Non\n\n");
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

    printf("Pour le moment votre pseudos se constitue de %c%c%c, Voulez vous continué ?\n\n1 - Oui\n2 - Non\n", Player1.name.namec1, Player1.name.namec2, Player1.name.namec3);
    scanf("%d",&sure);
    printf("\n");

    if (sure == yes)
    {
        printf("Ecrivez le quatrième caractère :\n");
        getchar();
        Player1.name.namec4 = getchar();
        printf("\n");
        printf("Maintenant votre pseudo se constitue de %c%c%c%c, Voulez vous continué ?\n\n1 - Oui\n2 - Non\n\n", Player1.name.namec1, Player1.name.namec2, Player1.name.namec3, Player1.name.namec4);
        scanf("%d",&sure);
        printf("\n");

        if (sure == yes) 
        {
            printf("Ecrivez le cinquième caractère :\n");
            getchar();
            Player1.name.namec5 = getchar();
            printf("\n");
            printf("Maintenant votre pseudo se constitue de %c%c%c%c%c, Voulez vous continué ?\n\n1 - Oui\n2 - Non\n\n", Player1.name.namec1, Player1.name.namec2, Player1.name.namec3, Player1.name.namec4, Player1.name.namec5);
            scanf("%d",&sure);
            printf("\n");

            if (sure == yes) 
            {
                printf("Ecrivez le sixième caractère :\n");
                getchar();
                Player1.name.namec6 = getchar();
                printf("\n");
                printf("Maintenant votre pseudo se constitue de %c%c%c%c%c%c, Voulez vous continué ?\n\n1 - Oui\n2 - Non\n\n", Player1.name.namec1, Player1.name.namec2, Player1.name.namec3, Player1.name.namec4, Player1.name.namec5, Player1.name.namec6);
                scanf("%d",&sure);
                printf("\n");

                if (sure == yes) 
                {
                    printf("Ecrivez le septième caractère :\n");
                    getchar();
                    Player1.name.namec7 = getchar();
                    printf("\n");
                    printf("Maintenant votre pseudo se constitue de %c%c%c%c%c%c%c, Voulez vous continué ?\n\n1 - Oui\n2 - Non\n\n", Player1.name.namec1, Player1.name.namec2, Player1.name.namec3, Player1.name.namec4, Player1.name.namec5, Player1.name.namec6, Player1.name.namec7);
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

    /*
    printf("Vous êtes envoyé au Japon sur une île pour combattre Pépé Turbo qui veut éliminer Mémé Turbo, seul problème si Pépé Turbo élimine Mémé Turbo elle ne nous révélera jamais ou est cacher la deuxième boule d'Okarun.\n\n");
    
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
                printf("Vous êtes un Medium.\n");
                printf("\n");
            }
        }
        else
        {
            Player1.roles = 1;
        }
    }
    
*/
    while (Player1.roles != 0 && Player1.roles != 42  && Player1.roles != 666 && Player1.roles != 8) 
    {
        printf("Maintenant %c%c%c%c%c%c%c%c, choisissez une classe pour anéantir Pépé Turbo :\n\n0 - Ghost\n42 - Alien\n666- Possessed\n8 - Medium\n", Player1.name.namec1, Player1.name.namec2, Player1.name.namec3, Player1.name.namec4, Player1.name.namec5, Player1.name.namec6, Player1.name.namec7, Player1.name.namec8);
        printf("\n");
        scanf("%d", &Player1.roles);
        printf("\n");

        switch (Player1.roles)
        {
            case Ghost:
                printf("Vous voulez être un Ghost ?\n\n1 - Oui\n2 - Non\n\n");

                scanf("%d", &sure);
                printf("\n");

                if (sure == yes)
                {
                    printf("Vous êtes un Ghost.\n");
                    printf("\n");
                }

                else
                {
                    Player1.roles = 1;
                }

                break;

            case Alien:
                printf("Vous voulez être un Alien ?\n\n1 - Oui\n2 - Non\n\n");

                scanf("%d", &sure);
                printf("\n");

                if (sure == yes)
                {
                    printf("Vous êtes un Alien.\n");
                    printf("\n");
                }

                else
                {
                    Player1.roles = 1;
                }

                break;

            case Possessed:
                printf("Vous voulez être un Possessed ?\n\n1 - Oui\n2 - Non\n\n");

                scanf("%d", &sure);
                printf("\n");

                if (sure == yes)
                {
                    printf("Vous êtes un Possessed.\n");
                    printf("\n");
                }

                else
                {
                    Player1.roles = 1;
                }

                break;

            case Medium:
                printf("Vous voulez être un Medium ?\n\n1 - Oui\n2 - Non\n\n");

                scanf("%d", &sure);
                printf("\n");

                if (sure == yes)
                {
                    printf("Vous êtes un Medium.\n");
                    printf("\n");
                }

                else
                {
                    Player1.roles = 1;
                }

                break;

                default:
                Player1.roles = 1;

                break;
        }
    }

    while (choicefood == 0)
    {
        printf ("Après ce débriefing dans l'avion, vous atterrissez et un marchand ambulant vous propose quelque chose à manger, vous choisissez :\n\n 1 - Un Chausson aux pommes\n 2 - Un Pain aux raisins\n");
        printf("\n");
        scanf("%d", &choicefood);

        switch (choicefood)
        {
        case Chaussonpommes:
            Player1.hp = Player1.hp - 5;
            printf("\n");
            printf ("Mauvais choix gourmand !, Tu perds 5 points de vie.");
            printf("\n");
            break;

        case Painraisins:
            Player1.hp = Player1.hp + 5;
            printf("\n");
            printf ("Bon choix !, Tu gagnes 5 points de vie.");
            printf("\n");
            break;
            
            default:
            break;
        }
    }

    printf("\n");
    printf ( "Maintenant, tu as : %dhp\n", Player1.hp);
    printf("\n");

    printf("Vous montez dans le vanne vers lequel ont vous conduit naturellement puis vous vous enfoncer dans la foret jusqu'a trouver d'étranges flaques sur le sol.\n");
    printf("\n");
    printf("Ces flaques sentent le Roquefort.\n");
    printf("\n");
    printf("Plus vous vous raprochez plus l'odeur devient insuportable.\n");
    printf("\n");
    printf("Vous vous rendez compte que Pépé Turbo est recouvert de Sauce Roquefort.\n");
    printf("\n");
    printf("Vous courrez pour commencer à l'attaquer !\n");
    printf("\n");

    while ( Player1.hp >= 0 && Enemy1.hp >= 0 )
    {
        printf("DEBUT DU ROUND %d :\n\n", round);
        printf("Choisis une compétences à utiliser :\n\n 1 - Attaquer (- 5 hp)\n 2 - Se soigner (+5 hp) \n 3 - Double attaque (-8 hp pour l'ennemi mais aussi -2 pour toi)\n\n");
        scanf("%d", &choiceskill);

        switch (choiceskill)
        {
        case Skill1:
            Enemy1.hp = Enemy1.hp - 6;
            printf("\n");
            printf("Bien joué, Pépé Turbo perd 6 hp !\n");
            break;

        case Skill2:
            Player1.hp = Player1.hp + 4;
            printf("\n");
            printf("Vous vous soignez, vous gagnez 4 hp !\n");
            break;

        case Skill3:
            Enemy1.hp = Enemy1.hp - 11;
            Player1.hp = Player1.hp - 3;
            printf("\n");
            printf("Ti é un tueur, Pépé Turbo perd 11 hp, mais tu en perd 3.\n");
            break;
            
            default:
            break;
        }

        printf("\n");
        printf("Pépé Turbo vous flanque la paté, vous perdez 6 hp...\n");
        Player1.hp = Player1.hp - 6;
        
        if (Enemy1.hp <= 0)
            {
                printf("\n");
                printf("Vous avez tuer Pépé Turbo, Félicitations !\n");
                Player1.xp = Player1.xp + 100;
                printf("Vous avez gagnez 100 points d'Xp !\n");
                printf("\n");
                break;
            }
        else
            {
                printf("\n");
                printf("Vous avez perdue :C Vous êtes surement gay mais ce n'est pas grave.\n");
                printf("\n");
            }

        printf("FIN DU ROUND %d :\n\n", round);
        printf("Vos hp : %d, Les hp de Pépé Turbo : %d\n\n", Player1.hp, Enemy1.hp);
        round ++;
    }

    printf("Merci grace à vous ont vas pouvoir torturer Mémé Turbo pour lui faire avouer où sont les boules de Okarun <3\n");

    return 0;
}