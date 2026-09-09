#include <stdio.h>

int ascii(char c)
{
    printf("%c\n", c);
    return (int)c;
}

void printc(void)
{
    printf("coucou\n");
}

void print(char format, void *var)
{
    switch(format)
    {
        case 'i':
            printf("%d\n", *(int*)var);
            break;

        case 'c':
            printf("%c\n", *(char*)var);
            break;

        case 'f':
            printf("%f\n", *(float*)var);
    }
}

int main(void)
{
    int vara = 5;
    float varf = 6.7;
    char lettre = 'F'; /*char = 1 byte*/

    void *pg = NULL;/*Pointeur générique vide qui peut pointer vers n'importe quoi = void*/
    pg = &vara;
    printf("%d\n", *(int *)pg); /*Pour déférencer un pointeur générique ont doit d'abbord lui indiquer quel type de pointeur doit pointer*/

    pg = &varf;
    printf("%f\n", *(float *)pg);

    print('c', &lettre);

    printf("Adresse de la fonction printc : %p, %p\n", printc, &print);

    void (*id)(void); /* Pointeur de fonction = Type fonction (*Nom)(Parametre de la fonction);*/
    id = printc;

    (*id)();/*Déréférence le pointeur puis appelle la fonction*/

    (*printf)("hello\n");

    int (*peperoni)(char) = &ascii;
    peperoni('E');

    return 0;
}
/*Exemple : Print f quand ont insere nos variable ont a pas besoin de renseigner le type car il utiliser des pointeurs, il sait ce aue l'ont veut car ont entre la chaine de charactere demander %d ...s*/