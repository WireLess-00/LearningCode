/*#include <stdio.h> /*Un header (.h) = fichier qui contient des déclarations utilisées dans plusieurs fichiers sources .c.*/
#include "stars.h" /*Ont peut creer son header, permet de ne pas faire de coompilation séparée*/

/*extern void submtom(); /*Ont peut justes mettre le prototype de la fonction*/

/*Le linker est un programme qui assemble plusieurs fichiers objets (.o)  pour créer un seul exécutable. Donc ont transforment nos .c en .o puis ont les compilent = compilation séparée*/

int main(void)
{
    stars();

    return 0;
}
