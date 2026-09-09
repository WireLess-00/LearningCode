#include <stdio.h>

void fonction1(int *tab, const int size) /*Fonction affiche les valeurs dans un tableau de int*/
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void inversefonction1(int *tab, const int size) /*Fonction qui affiche les valeurs dans un tableau de int mais dans le sens inverse*/
{
    int i;
    for (i = size -1; i >= 0; --i)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void impairfonction(int *tab, const int size) /*Fonction qui affiche les valeurs d'un tableau mais qui s'arrête dès qu'il tombe sur un nombre impair
Si le modulo donc le reste d'une divion par 2 = 0 alors il est pair sinon = 1 il est impair*/
{
    int i;
    for (i = 0; i < size && tab[i] % 2 == 0; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void chartab(char *chartab, const int size) /*Fonction qui affiche les charactères dans un tableau de charactères*/
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%c ", chartab[i]);
    }
    printf("\n");
}

void inversechartab(char *chartab, const int size) /*Fonction qui affiche les charactères dans un tableau de charactères mais dans le sens inverse*/
{
    int i;
    for (i = size -1; i >= 0; --i)
    {
        printf("%c ", chartab[i]);
    }
    printf("\n");
}

void printstring(char *str) /*Fonction qui affiche les charactères dans un string*/
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c ", str[i]);
    }
    printf("\n");
    printf("Compteur de caractères = %d, sans compter le dernier caractère NULL d'un string\n", i);
    i++;
    printf("Sinon le Compteur de caractères est de = %d\n", i);
}

void printstrlen(char *str) /*Fonction qui compte le nombres de caractères d'un string*/
{
    int compteur = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        compteur ++;
    }
    printf("Compteur de caractères = %d, sans compter le dernier caractère NULL d'un string\n", compteur);
    compteur++;
    printf("Sinon le Compteur de caractères est de = %d\n", compteur);
}

int main(void)
{
    int vec1[4] = {4,2,8,16};

    fonction1(&vec1[0], 4);
    inversefonction1(&vec1[0], 4);
    impairfonction(&vec1[0], 4);

    char vec2[4] = {'M','a','y','o'};

    chartab(&vec2[0], 4);
    inversechartab(&vec2[0], 4);

    char str[] = "Hello world!";
    
    printstring(&str[0]);
    printstrlen(&str[0]);

    return 0;
}