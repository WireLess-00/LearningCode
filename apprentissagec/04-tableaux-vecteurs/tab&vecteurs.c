#include <stdio.h>

void print_vect(int vec3[10]) /*Fonction pour lire ce qu'il y a dans un vecteur*/
{
    int v;
    for ( v = 0; v < 10; v++)
    {
        printf("%d\n", vec3[v]);
    }
}

void print_vect2(int *vec5, const int nbel) /*Fonction pour lire ce qu'il y a dans un vecteur avec un pointeur*/
{
    int v2;
    for ( v2 = 0; v2 < nbel; v2++)
    {
        printf("%d\n", vec5[v2]);
    }
}

void print_vect3(int *vec7, const int nbl, const int nbc) /*Fonction pour lire ce qu'il y a dans un vecteur avec un pointeur*/
{
    int n4;
    for ( n4 = 0; n4 < nbl; n4++)
    {
        for (int n5 = 0; n5 < nbc; n5++)
        {
            printf("%d ", *(vec7+n4*nbc+n5));
        }
        printf("\n");
    }
}

int main(void)
{
    /*Vecteurs*/
    int vec2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; /*vec est aussi un pointeur*/
    int i;

    printf("vec = %p\n", vec2); /*vec indique bien le commencement du vecteur, l'adresse de i, case 1*/

    for (i = 0; i < 10; i++) /*Pour i = , tant que i est pas plus grand que 10 ajouter 1*/
    {
        printf("%d %p\n", vec2[i], &vec2[i]); /*On demande d'afficher ce qu'il y a dans i à chaque case ainsi que leurs adresses*/
        printf("*%d\n", *(vec2+i)); /*vec = pointeur, On peut donc aussi print comme ça en déférençant*/
    }

    int *pvec = vec2; /*Pointeur pvec qui pointe vers vec*/
      for (i = 0; i < 10; i++)
    {
        printf("%d\n", *pvec); /*On print pvec en déférencant donc ont print ce qu'il contient*/
        pvec++;
    }
    pvec = vec2; /*On oublie pas de remettre pvec à la première adresse sinon ont risque de déborder du tableau, au dessus de 10*/

    /*Tableaux*/
    int tab[2][5] = {/*2 cases dont chacunes pointes vers le premiers élément d'un vecteur de 5 entiers*/
        {1, 2, 3, 4, 5}, /* On déclare une matrice qui contient 2 lignes de 5 éléments*/
        {6, 7, 8, 9, 10}
    };
    
    int a, b;
    tab[1][1] = 4; /*Permet de mofidier l'élément 2 de la 2ème lignes car les indices commence toujours de 0*/

    for (a = 0; a < 2; a++) /* Pour passer dans les 2 cases*/
    {
        for (b = 0; b < 5; b++) /* Pour passez dans les 5 entiers stokés dans les cases à chaque fois*/
        {
            printf("%d ", tab[a][b]);
        }
        printf("\n");
    }
    
    int v[5];
    for (int m = 0; m < 5; m++) /*Ont peut tout stokées dans un vecteur de 5 points qui permet d'encoder puis d'afficher les 5 éléments*/
    {
        scanf("%d", &v[m]);
    }
    for (int m = 0; m < 5; m++)
    {
        printf("%d ", v[m]);
    }

    printf("\n");

    const int test = 5; /*La taille du vecteur est défini à la compilation donc pas de scan f possible pour laisser l'utilisateur l'indiquer mais ont peut initier un tableau de 1000 cases et lui demander combien il veut en utiliser*/
    int vec1[test] = {}; /*On doit initier une constante (ex code) ou un define : #define MAX 5 et int vec[MAX] = {0};*/

    int vec0[10] = {0};
    print_vect(vec0); /*On utilise notre première fonction*/

    int vec00[3] = {3,3,3};
    print_vect2(&vec00[0], 3); /*On utilise notre deuxième fonction*/

    int vec100[100][50] = {0};
    print_vect3(&vec100[0][0], 100, 50); /*On utilise notre troisième fonction*/
    

    return 0;
}

/*Definition vecteur = Suite de nombres qui sont stokés l'un a la suite de l'autre en mémoire mis sous un meme identifiant, comme un gros bloc de variables
Vecteur = Tableau à une dimension 
Tableau = Vecteur à 2 dimensions*/