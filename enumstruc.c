// Structure Enumerations et Unions
#include <stdio.h>

typedef enum Color
{
    white, /* Ce sont des constantes, elles s'incrementes de 1 par defauts : 0, 1, 2, 3*/
    yellow,
    black,
    blue
}Color;

typedef enum Kind
{
    humain = 1,
    schtroumpf = 0
}Kind0;

typedef struct Clientparent
{
    int ID;
    Kind0 kind:1;
    unsigned char age;
    int argent;
    Color couleurskin;
}Clientparent;

typedef struct Clientenfant
{
    int ID;
    Kind0 kind:1;
    unsigned char age; /*Ce sont les champs de la sctructure . pour y acceder*/
    int argent; /*Variables*/
    enum Color couleurskin;
    Clientparent clientparent;
}Clientenfant0;

// typedef struct Clientenfant Clientenfant0;

int main(void)
{
    Color colorblue;
    colorblue = blue;
    printf("Blue = %d\n", colorblue);
    printf("Size = %lu\n", sizeof(Clientenfant0));

    Clientenfant0 clientenfant;
    Clientparent clientparent1;
    struct Clientparent clientparent2;
    clientenfant.argent = 100;
    clientenfant.age = 5;
    clientenfant.couleurskin = blue;
    clientenfant.ID = 0;
    clientenfant.kind = 0;
    clientparent1.argent = 1000;
    clientparent1.age = 50;
    clientparent1.couleurskin = yellow;
    clientparent1.ID = 0;
    clientparent1.kind = 0;

    if (clientenfant.couleurskin == blue)
    {
        clientenfant.kind = schtroumpf;
    }
    else
    {
        clientenfant.kind = humain;
    }
    
    if (clientparent1.couleurskin == blue)
    {
        clientparent1.kind = schtroumpf;
    }
    else
    {
        clientparent1.kind = humain;
    }

    printf("Entrez votre numero Client Enfant personnel :\n");
    scanf("%d", &clientenfant.ID);

    printf("Entrez votre numero Client Parent1 personnel :\n");
    scanf("%d", &clientparent1.ID);

    clientparent2 = clientparent1; /*Copie*/

    printf("Client Enfant N %d :\nArgent : %d\nAge : %hhu\nSkin : %d\nKind : %d\n",clientenfant.ID, clientenfant.argent, clientenfant.age, clientenfant.couleurskin, clientenfant.kind);
    printf("Client Parent1 N %d :\nArgent : %d\nAge : %hhu\nSkin : %d\nKind : %d\n",clientparent1.ID, clientparent1.argent, clientparent1.age, clientparent1.couleurskin, clientparent1.kind);
    printf("Client Parent2 N %d :\nArgent : %d\nAge : %hhu\nSkin : %d\nKind : %d\n",clientparent2.ID, clientparent2.argent, clientparent2.age, clientparent2.couleurskin, clientparent2.kind);
    printf("%p - %p\n", &clientparent1.ID, &clientparent2.ID); /*Pas la meme adresse donc c'est bien une copie*/
    return 0;
}
// bool is_human = true; type bool = true, false