#include <stdio.h>

int main(void)
{
    int glace = 10;
    unsigned int valise = 3;
    double pizza = (float)glace / valise;/*(float) pour que glace devienne flottant*/
    pizza ++;
    printf("%ld\n", sizeof(pizza));/*sizeof = lis le nombre d'octets*/
    printf("%lf\n", pizza);
    /*
    table of thruth :
    3 ->       00000011
    10 ->      00001010
    & = and = 00000010
    | = or  = 00001011
    ^ = xor = 00001001
    ~ = not = 11111100 valise ~= valise;
    >> = decaller de ... 00000000 ou << 00001100
    */
    valise = valise << 2;
    printf("%d\n", valise);
    return 0;
}

/*
var = var + 5; -> var += 5; (raccourci pour tout operator)
++ = + 1 Si à droite de la var s'incrémente apres sinon avant
-- = - 1
*/