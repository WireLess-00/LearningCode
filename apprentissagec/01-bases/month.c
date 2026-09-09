#include <stdio.h>

int main(void)
{
    int numberm;

    printf("Entrez un nombre entre 1 et 12 pour savoir à quel mois il correspond :\n");
    scanf("%d",&numberm);

    switch (numberm) 
    {
    case 1 :
        printf("Le mois 1 de l'année est Janvier\n");
        break;

    case 2 :
        printf("Le mois 2 de l'année est Février\n");
        break;

    case 3 :
        printf("Le mois 3 de l'année est Mars\n");
        break;

    case 4 :
        printf("Le mois 4 de l'année est Avril\n");
        break;

    case 5 :
        printf("Le mois 5 de l'année est Mai\n");
        break;

    case 6 :
        printf("Le mois 6 de l'année est Juin\n");
        break;

    case 7 :
        printf("Le mois 7 de l'année est Juillet\n");
        break;

    case 8 :
        printf("Le mois 8 de l'année est Aout\n");
        break;

    case 9 :
        printf("Le mois 9 de l'année est Septembre\n");
        break;

    case 10 :
        printf("Le mois 10 de l'année est Octobre\n");
        break;

    case 11 :
        printf("Le mois 11 de l'année est Novmebre\n");
        break;

    case 12 :
        printf("Le mois 12 de l'année est Décembre\n");
        break;

    default:
        printf("Le nombre ne correspond à aucun mois\n");
    }

}