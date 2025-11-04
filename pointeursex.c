#include <stdio.h> 
/*
    Fonction "compare" :
    - Compare deux valeurs de type inconnu (void*) en utilisant une fonction de comparaison passée en paramètre
    - Retourne le résultat de la fonction cmp (soit -1, soit 1)
*/
int compare(void *p1, void *p2, int (*cmp)(void*, void*))
{
    return cmp(p1, p2);  // Appel de la fonction de comparaison passée en paramètre
}

/*
    Fonction "cmpInt" :
    - Compare deux entiers (int)
    - Retourne 1 si le premier entier est plus grand, sinon -1
*/
int cmpInt(void *p1, void *p2)
{
    return *(int *)p1 > *(int *)p2 ? 1 : -1;
    // On convertit les pointeurs void* en int*
    // Puis on compare les valeurs pointées
}

int cmpFloat(void *p1, void *p2)
{
    return *(float *)p1 > *(float *)p2 ? 1 : -1;
}

typedef struct
{
    int age;
    int money;
} User;

/*
    Fonction "cmpUser" :
    - Compare deux utilisateurs (User) selon leur âge.
    - Utilise la fonction cmpInt pour comparer les champs "age".
*/
int cmpUser(void *p1, void *p2)
{
    User *u1, *u2;     // On crée deux pointeurs vers des User
    u1 = (User *)p1;   // Conversion du void* en User*
    u2 = (User *)p2;   // Conversion du void* en User*
    return cmpInt(&u1->age, &u2->age);  // Compare les âges des deux utilisateurs
}

int main(void)
{
    /* int (*p)(void*, void*, int (*)(void*, void*)) = compare; = Un pointeur vers une fonction qui prend trois arguments et retourne un int*/

    int a = 5;
    int b = 10;

    float c = 3.14;
    float d = 5.5;

    User Dog, Cat;

    Dog.age = 50;
    Dog.money = 1000;

    Cat.age = 18;
    Cat.money = 10000;

    // Appelle compare() avec cmpInt
    printf("%d\n", compare(&a, &b, cmpInt));

    printf("%d\n", compare(&c, &d, cmpFloat));

    printf("%d\n", compare(&Dog, &Cat, cmpUser));

    return 0;
}
