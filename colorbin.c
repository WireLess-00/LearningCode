#include <stdio.h>
 
/*
colorbin :: permet de visualiser un nombre sous sa forme binaire en couleur
maxbit : la taille en bit de la donnée à visualiser
value  : la valeur à visualiser
!!! les codes couleurs peuvent ne pas fonctionner sur Windows
!!! les codes utilisés sont issus de l'environnement UNIX
*/

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