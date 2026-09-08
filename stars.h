/*#include <stdio.h>*/

#ifndef __STARS__ /*Pour éviter d'inclure un fichier plusieurs fois à la compilation par erreur, temps de compilation plus rapide*/
#define __STARS__ /*Gardiens = Protection si stars pas définit, il le définit*/

void stars();

static int var = 7;/*Variables globales, ne peut être que static ici car sinon il pense qu'il doit diviser la variable en deux et quelle est donc différentes dans les deux fichier*/

/*On peut aussi y mettre unions, énum, struc...*/

/*{
    printf("Je suis une étoiles !\n");
}

En général dans le .h il n'y a que le prototype de la fonction puis le code dans le .c qui porte le meme nom*/

#endif
