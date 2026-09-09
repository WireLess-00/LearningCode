#include <stdio.h> /*librairie de fonctionnalité*/
#warning "biz" // entre un message warning et compile ou #error entre un message d'erreur et ne compile pas
#include <string.h> /*librairie de fonctionnalité*/
#define PI 3.1415 /*define = creer une constante*/
#ifdef PI /*Si défini*/
/*#ifndef = Si pas défini */
#define afficher printf("coucou\n");
#define print(constante) printf(constante);

int /*fonction*/ main(void)/*nom de la fonction spé*/
{
    char utilisateur_tape = getchar();/*getchar = lit un char tapé au clavier*/
    printf("l'utilisateur a tapé %c\n", utilisateur_tape);
    float pomme/*variable*/ = 3e8;
    unsigned long tom; 
    printf("%f\n", PI);/*printf = affiche, fprintf donner l'endroit ou affiche*/
    afficher
    print("hello!\n");
    fprintf(stderr/*entrer standard*/, "%f\n", pomme);
    printf("l'utilisateur doit entrer une valeur :");
    fscanf(stdin/*sortie d'erreur*/,"%lu", &tom/*adresse de la var*/);/*fscanf = lis dans l'endroit choisis*/
    printf("l'utilisateur a entré %lu pour la variable\n", tom);
    printf("%p\n", &tom);/*printf est une fonction*/
    
    /*
    Indicateurs d'affichage/conversion
    
        - %hhd = char
        - %d = int
        - %hd = short
        - %ld = long

        - %hhu = unsigned char
        - %u = unsigned int
        - %hu = unsigned short
        - %lu = unsigned long

        - %c = char

        - %f = float
        - %lf = double

        - %p = pointeur
        - %x = héxadécimal

        0b... = binaire
        0x... = héxadécimal
    */
        
    return 0;
}
// variable = espaces mémoire "élémentaires" qui associent un nom à une valeur
#else /*Sinon (si PI pas défini)*/
#endif /*fin de si "PI" défini*/