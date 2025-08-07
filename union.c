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

typedef union
{
    unsigned eax;
    unsigned short ax;
    struct 
    {
        unsigned char al;
        unsigned char ah;
    };

}Reg;

typedef union /*Regroupe la structure*/
{
    unsigned int all;
    struct /*Permet de faire en sorte que les variables ne se melangent pas*/
    {
        unsigned char green;
        unsigned char red;
        unsigned char alpha;
        unsigned char blue;
    };

}Color;



int main(void)
{
    Reg reg;
    reg.eax = 100000;

    Color color;
    
    color.green = 255;
    color.red = 200;
    color.alpha = 35;
    color.blue = 0;

    colorbin(32, reg.eax);
    colorbin(16, reg.ax);
    colorbin(8, reg.al);
    colorbin(8, reg.ah);
    printf("%u     %hu     %hhu     %hhu\n", reg.eax, reg.ax, reg.al, reg.ax);

    colorbin(32, color.all);
    colorbin(8, color.green);
    colorbin(8, color.red);
    colorbin(8, color.alpha);
    colorbin(8, color.blue);
    printf("%u     %hhu     %hhu     %hhu     %hhu\n", color.all, color.green, color.red, color.alpha, color.blue);

    return 0;
}