#include <stdio.h>
#include <math.h>

int factorielle(int);/*Prototype de la fonction*/

void printadd(float n1, float n2)/*Fonction pour additionner qui ne retourne aucune valeur, on appelle ça : Procédures, pas de return*/
{
    printf("%f\n", n1 + n2);
    /*On peut ajouter un return; seul mais cela nous fera focément sortir du code de la fonction*/
}

static int add(int p1, int p2)/*Static + Inline fonction très petite pour insérée directement dans le code donc opti si la machine ne juge pas ça opti elle ne vas pas le faire et vas chercher le code de la fonction dans un autre fichier, c'est pour ça que je suis obligé de rajouter static et de lui faire savoir quee c'est une fonction lier à seulement ce fichier*/
{
    return p1 + p2;
}

static void print(void) /*Fonction static qui ne pourra pas être utiliser dans un autre fichier + Procédure*/
{
    printf("PommeCerise\n");
}

void print2(const int m) /*Ont peut utiliser des constantes dans notre codes de fonctions qui ne seront donc alors pas changeable dans la fonction*/
{
    printf("%d\n",m);
}

int main(void)/*Main est bien une fonction qui retourne une valeur entière : return 0; et qui ne prend aucun argument (void)*/
{
    volatile int poulet = 4;/*On demande au compilateur de ne pas optimiser*/

    register int speed = 8; /*Variable stocker dans un registre du micro processeur accesible plus rapidement car plus proches des unités de calcul que la RAM*/

    int x = 90;
    printf("%f\n",cos(x));/*On calcul le cosinus de 90*/


    int result1 = 1, n1 = 5; /*On calcul la factorielle de 5! = 5 x 4 x 3 x 2 x 1 = 120*/

    while (n1 > 1)
    {
        result1 *= n1 --;
    }
 
    printf("!5 = %d\n", result1);
 
    printf("!3 = %d\n", factorielle(3));/*Ici ont copie notre valeur 3 dans int x du code de la fonction pour calculer sa factorielle*/

    printf("%d\n",printf("Hello !"));/*Affiche Hello7 car 7 est la valeur de retour retourner par printf à printf*/

    printadd(1.5,2.5);

    print();

    printf("factorielle : %p\nprintadd: %p\nprint : %p\nmain : %p\n", &factorielle, &printadd, &print, &main);/*Ce sont les adresses du code de la fonctions*/

    print2(x);

    printf("!! = %d\n", factorielle(factorielle(5))); /*Fonctionne mais Affiche 0 car overflow (dépassement de mémoire)*/

    printf("%d\n", add(4,2));
    
    return 0;
}

int factorielle(int x)/*On creer notre fonction pour calculer les factorielle d'entier, on commence par préciser la valeur de retour donc int, son nom et la valeur de son parametre (int = result), le nombre sur lequel effectuer l'opération et son nom aussi*/
{
    static int var = 0; /*Variable static est une varible qui ne se dépile pas, elle reste*/
    var ++; /*Vu que lq fonction n'est jamais dépiler je pourrais connaitre le nombre de fois que j'ai utiliser ma fonction factorielle*/
    int result = 1; /*Code de la fonction*/
    printf("utilisation n° : %d\n", var);
    
    while (x > 1)
    {
        result *= x --;
    }

    return result;
}

/*
Quand une fonction est appelée, elle est empilée, puis dépilée quand elle se termine, si trop de fonctions sont empilées sans dépilement (ex. récursivité infinie = répétitions), il y a stack overflow = dépassement de pile
Une varables n'est accessible que dans la fonction dans laquelle elle se trouve, elle est une mémoire locale
Il existe des variables globales déclarer en dehors de tout blocs/fonctions qui peuvent être utiliser partout
*/