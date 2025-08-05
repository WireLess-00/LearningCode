#include <stdio.h>

// rgba(200, 255, 0, 35)


// 0000 0000 0000 0000
// 1111 1111 0000 0000
int main(void)
{
    unsigned int var = 10; /*0000 1010*/

    unsigned char alpha = 35;
    unsigned char blue = 0;
    unsigned char green = 255;
    unsigned char red = 200;
    unsigned int color = 0;

    printf("%u\n",color); /*0 = 0b*/

    color = red << 24;
    color = color | (green << 16);
    color = color | (blue << 8);
    color = color | alpha;
    printf("%u\n",color);/* = 3372154915 ont a bien toutes nos valeurs dans 8 bit x 4 = 11001000 11111111 000000000 0100011*/

   var = var | (1 << 6); /*0000 1010, 0100 0000, 0100 1010*/
   var = var | (1 << 0); /*0000 0001, 0100 1011 = 75*/
   printf("%d\n",var);

    return 0;
}

/*
Opérateurs :

- & = et
- | = ou 

    table of thruth :
    & = and = True seulement si A et B = True Sinon False
    | = or  = False seulement si A et B = False Sinon True
    ^ = xor = Si A ou B contient 1 True = True mais si A et B sont tout les deux True ou False alors = False
    ~ = not = Inverse si c'est True sa devient False et inversement
    >> = decaller de .. à droite ou << à gauche
    */