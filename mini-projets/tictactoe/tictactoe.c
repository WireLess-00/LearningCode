#include <stdio.h>

void printgame (char tab[3][3])
{
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            printf("%c | ", tab[a][b]);
        }
        printf("\n");
    }
}

typedef struct Player
{
    char nameplayerX[50];
    char nameplayerO[50];

}Player;

int main(void)
{

char tab[3][3] = {
        {'.', '.', '.'},
        {'.', '.', '.'},
        {'.', '.', '.'}
    };

Player Player;
unsigned int round = 1;
int x;
int y;

printf("Vous allez démarrer une partie de Tic Tac Toe, Bonne chance !\n\n");

printf("Entrez le nom du premier joueur qui jouera X : \n");
scanf("%49s", Player.nameplayerX);

printf("Entrez le nom du deuxième joueur qui jouera O : \n");
scanf("%49s", Player.nameplayerO);

printf("Le premier joueur ayant réussi à créer un alignement : Horizontal, Vertical ou encore Diagonal remporte la partie.\n\n");
printgame(tab);
printf("\n");

 while (round <= 9)
    {


        printf("DEBUT DE LA MANCHE %d :\n\n", round);

        if (round % 2 == 1)
        {
            printf("%s écrivez les coordoonés que vous souhaitez jouez (tel que X Y, 0 2) : ", Player.nameplayerX);
            scanf("%d %d", &x, &y);

            if (tab[x][y] == '.')
            {
                tab[x][y] = 'X';
            }
        }

        if (round % 2 == 0)
        {
            printf("%s écrivez les coordoonés que vous souhaitez jouez (tel que X Y, 0 2) : ", Player.nameplayerO);
            scanf("%d %d", &x, &y);

            if (tab[x][y] == '.')
            {
                tab[x][y] = 'O';
            }
        }
        
        printf("\n");
        printf("FIN DE LA MANCHE %d :\n\n", round);
        printf("\n");
        printgame(tab);
        printf("\n");
        round ++;
    }

    printf("L'un des deux joueurs à remporté la partie, Bien joué !\n");

    return 0;
}