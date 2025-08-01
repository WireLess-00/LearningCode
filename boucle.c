#include <stdio.h>

int main(void)
{
    int i; /*Compteur*/
    i = 0;
_et: /*Etiquette*/
    if(i < 5)
    {
        printf("Tom est un égocentrique mais et alors\n");
        i++;
        goto _et;
    }
    return 0;
}