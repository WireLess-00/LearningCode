#include <stdio.h>

int main(void)
{
    int condition1 = 10;
    int condition2 = 1 > 3; /*Opérateur de comparaison 1 n'est pas plus grand que 3 donc faux = 0; vrai = 1*/
    if(condition1 == 10 && condition1 > 0 && condition1 % 2 == 0) /*If = Si*/
    {
        condition2 = 10;
        printf("Comme la valeur est paire je remplace la valeur de condition 2 par %d\n",condition2);
    }
    /* Opérateur de Comparaison :
    != = Différent
    ! = Contraire
    > = Plus grand
    < = Plus petit
    >= = Suppérieur ou égal
    <= = Infférieur ou égalté
    != = Inégalité
    == = Egalité
    && = Et
    || = ou 
    ? = à condition, si vrai renvoie la première valeur sinon l'autre
    : = Sépare les deux valeurs tel que = true : false
    On peut ne pas utiliser If et Else pour demander à ajouter 10 si condition1 est pair sinon 5 :
    condition2 = condition1%2 == 0 ? 5 : 10;
    /*/

    else /* Else = Sinon*/
    {
    condition2 = 5;
    printf("Comme la valeur est impaire je remplace la valeur de condition 2 par %d\n",condition2);
    }
    
    int cond1;
    printf("Choisit un chiffres entre 1 et 10 :");
    scanf("%d",&cond1);

    switch (cond1) /* Permet d'éxécuter les instructions / cases, remplace If et Else*/
{
        case 1: /*Case = 1*/
        printf("La valeur 1 à été ajouté à cond1\n");
        break; /* Permet de mettre fin à l'instruction*/

        case 2:
        printf("La valeur 2 à été ajouté à cond1\n");
        break;

        case 3:
        printf("La valeur 3 à été ajouté à cond1\n");
        break;

        default: /* Instruction par défaut*/
        printf("%d n'est pas une valeur autorisée à être affecté à cond1\n",cond1);
}

    return 0;
}
/* 
% = Modulo, Reste de la division entière
Else if = Sinon si ...
*/