#include <stdio.h>

int main(void)

{
    int nombre1;
    int nombre2;

    printf("Entre un nombre pour savoir si il est divisible avec ta futur seconde entrée :\n");
    scanf("%d",&nombre1);
    printf("Entre un second nombre pour savoir si il est divisible avec %d :\n",nombre1);
    scanf("%d",&nombre2);

    if (nombre1 % nombre2 == 0)
    {
        printf("%d est bien divible par %d car le reste de la division est égal à 0\n",nombre1,nombre2);
    }

    else 
    {
        printf("%d n'est pas divisible par %d car le reste de la division n'est égal à 0\n",nombre1,nombre2);
    }

    return 0;
}