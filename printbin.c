#include <stdio.h>

void colorbin(int maxbit, int value)
{
    for(int i = maxbit-1; i >= 0; i--)
    {
        if((value >> i) & 1) //affiche le bit de valeur '1' en rouge
        {
            //      \033[91m : code couleur correspondant au rouge
            printf("\033[91m1\033[0m ");
            //      \033[0m : code correspondant à la remise des couleurs par défaut
        }
        else //affiche le bit de valeur '0' en bleu
        {
            //      \033[96m : code couleur correspondant au bleu ciel
            printf("\033[96m0\033[0m ");
        }
    }
    printf("\n");
}

int main(void)
{
    unsigned int entier = 0;
    int huitbits = 7;
    int result = 0;
    int mask = 0;

    printf("Entrer le nombre entier a afficher en binaire :\n");
    scanf("%u",&entier);

/*     
Isoler le bit de la position que l'on veut toujours en decallant

    printf("Entier : %d\n", entier >> 3 & 1);

        ""

    if ((entier >> 3) & 1)
    {
        printf("1\n", entier);
    }
    else
    {
        printf("0\n", entier);
    }     

En deplacant le bit vers la droite, ont utilise un masque mais toujours en premiere position
    
    while (huitbits >= 0)
    {
        result = (entier >> huitbits) & 1;
        printf("%d", result);
        huitbits --;
    }
*/

// En utilisant un mask

     while (huitbits >= 0)
    {
        mask = 1 << huitbits;
        
        if ((entier & mask) > 0) 
        {
            result = 1;
        }
        else
        {
            result = 0;
        }
        
        printf("%d", result);

        huitbits --;
    }
    printf("\n");
    colorbin(8, 10);
/*
    for(int mask = 128; mask > 0; mask /= 2 /*128 = 1000 0000 ect..*/
/*    {
        printf("%d", (entier & mask)== mask); /*condition si le and est identique au masque alors ce sera True = 1/*
    }
    printf("\n"); /*Sinon = 0/*
*/

    return 0;
}