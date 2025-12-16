#include <stdio.h>

enum
{
    ADD,SUB,MUL,DIVI,MOD
};

typedef struct //Vecteur de structure
{
    int m;
    int n;
}PAS_DE_NOM;

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mul(int a, int b)
{
    return a*b;
}

int divi(int a, int b)
{
    return a/b;
}

int mod(int a, int b)
{
    return a%b;
}

int main(void)
{
    PAS_DE_NOM v[3] = {{1,2},{3,4},{5,6}};
    printf("%d\n", v[2].n); //Grace a ce print ont accède au 3ème élément du vecteurs dont n = 6

    char vec[5] = {'F','l','e','u','r'}; //Tableau de caractères
    for (int i = 0; i < 5; i++)
    {
        printf("%c", vec[i]);
    }
    printf("\n");

    int (*operation[5])(int, int) = {add, sub, mul, divi, mod}; //Ca évite de faire un switch et permet de faire une boucle pour toutes les opérations avec 2 nombres
    printf("%d\n", operation[MUL](5,6));

    for ( int i = 0; i < 5; i++)
    {
        printf("%d\n", operation[i](5,6));
    }
    

    return 0;
}