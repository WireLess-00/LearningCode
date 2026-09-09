#include <stdio.h>

int main (void)

{
    int first;
    int second;
    printf("Entrez la valeur de la première partie de l'addition :\n");
    scanf("%d", &first);
    printf("Entrez la valeur de la seconde partie de l'addition :\n");
    scanf("%d", &second);
    int result = first + second;
    printf("Le résultat de l'addition %d + %d est égale à : %d\n", first, second, result);
}

