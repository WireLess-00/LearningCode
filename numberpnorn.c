#include <stdio.h>

int main(void)

{
    int nombre;

    printf("Entre un nombre pour savoir si il est positif, négatif ou nul :\n");
    scanf("%d",&nombre);

    if (nombre == 0)
    {
        printf("Votre nombre est nul\n");
    }

    if (nombre > 0)
    {
        printf("Votre nombre est positif\n");
    }

    if (nombre < 0)
    {
        printf("Votre nombre est négatif\n");
    }
    return 0;
}