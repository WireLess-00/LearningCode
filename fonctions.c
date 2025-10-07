#include <stdio.h>
#include <math.h>

int factorielle(int x)/*On creer notre fonction pour calculer les factorielle d'entier, on commence par préciser la valeur de retour donc int, son nom et la valeur de son parametre (int = result), le nombre sur lequel effectuer l'opération et son nom aussi*/
{
    int result = 1;
    
    while (x > 1)
    {
        result *= x --;
    }

    return result;
}

void printadd(float n1, float n2)/*Fonction pour additionner qui ne retourne aucune valeur, on appelle ça : Procédures, pas de return*/
{
    printf("%f\n", n1 + n2);
    /*On peut ajouter un return; seul mais cela nous fera focément sortir du code de la fonction*/
}


int main(void)/*Main est bien une fonction qui retourne une valeur entière : return 0; et qui ne prend aucun argument (void)*/
{
    int x = 90;
    printf("%f\n",cos(x));/*On calcul le cosinus de 90*/


    int result1 = 1, n1 = 5; /*On calcul la factorielle de 5! = 5 x 4 x 3 x 2 x 1 = 120*/

    while (n1 > 1)
    {
        result1 *= n1 --;
    }
 
    printf("!5 = %d\n", result1);
 
    printf("!3 = %d\n", factorielle(3));

    printf("%d\n",printf("Hello !"));/*Affiche Hello7 car 7 est la valeur de retour retourner par printf à printf*/

    printadd(1.5,2.5);

    return 0;
}