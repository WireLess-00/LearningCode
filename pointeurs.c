#include <stdio.h>

void swap(int *var1, int *var2) /*On creer uen fonction pour swap la valeur des deux variables*/
{
    int swp = *var1;/*Grace a "*" on a acces au contenu de la var*/
    *var1 = *var2;
    *var2 = swp;
}

/*Pointeur = Variable qui contient l'adresse d'une autre variable = 8 octets*/

int main(void)
{
    int v1 = 1;
    int v2 = 2;

    int pointeur = 5;
    int * p = &pointeur; /*pointeur p qui contient l'adresse de pointeur, ont peut ajouter restrict après * pour être sur que ce soit le seul pointeur de la variable*/
    int * * pp = &p;/**/
    printf("pointeur = %d\n", pointeur);/*Affiche pointeur donc 5*/
    printf("& = %d\n", p);/*Affiche p, ponteur de pointeur donc affiche l'adresse de pointeur*/

    * p = 500;
    printf("nouvel valeur de pointeur = %d\n", pointeur);/*Affiche la nouvelle valeur donner à pointeur = 500*/
    printf("& = %d\n", p);/*Affiche toujours l'adresse de pointeur*/

    printf("nouvel valeur de pointeur = %d\n", pointeur);/*Affiche la nouvelle valeur donner à pointeur = 500*/
    printf("& = %d\n", pp);/*Affiche toujours l'adresse de pointeur*/

    printf("AVANT = v1 = %d et v2 = %d\n",v1,v2);
    swap(&v1,&v2);
    printf("APRES = v1 = %d et v2 = %d\n",v1,v2);
}

/*Pour être sure que le pointeur est le seul qui pointe la var = ont ajoute * restrict p = &var*/