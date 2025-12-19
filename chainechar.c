#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//On recréer la fonction strlen
unsigned long str_len(char *str10)
{
    unsigned long taille = 0;
    while(*str10) //une condition while(expr) continue tant que expr est différent de 0
    {
        taille++;
        str10++;
    }
    return taille;
}

int main(void)
{
    char str2[64];
    char str3[64];

    char str4[50];
    int n = 300;

    int m;
    float p;
    char strentier[] = "666";
    char strfloat[] = "3.14";

    char str[128] = "Hello world!"; // 13 car "Hello world!"= 12 mais il faut une place en plus pour stokés le caractère NULL = \0
    printf("%s\n", str);
    
    puts(str);//Affiche un string, ajoute automatiquement un saut de ligne

    printf("Ce Str contient %lu caractères.\n", strlen(str)); //Affiche le nombre de caractères
    printf("Ce Str contient %lu caractères.\n", str_len(str));

    scanf("%12s",str2); //On peut limiter la saisi a 12 par ex
    //scanf("%12c",str2); On peut forcer à saisr au moins 12 caractères
    puts(str2);

    printf("%s%s\n", str, str2);
    strcat(str, str2); //Cherche le \0 à la fin de str, copie tous les caractères de str2 à partir de ce point ajoute \0 au bout
    printf("%s\n", str); //str à été remplacer

    sprintf(str4, "%d Bonjour", n); /*On creer un buffer pour afficher n mais il se transforme en chaine de caractères pour ensuite le print,
    attention car il n'a aucune limite, dépassement de mémoire...*/

    /*snprintf écrit dans str en limitant à la taille du buffer
    snprintf(str, sizeof(str), "%d Bonjour", n);*/

    fprintf(stdout, "%s\n", str4); //Affiches mais il lui faut une chaine de caractères


    getchar(); /*Ajouter ceci pour nettoyer le buffer après un scanf sinon rest un = /n Quand tu utilises scanf, 
    ça lit jusqu'à ce que tu presses Entrée ( \n - caractère de nouvelle ligne), et ce caractère reste dans le buffer stdin. 
    Si tu utilises fgets après, ça va lire ce caractère et s'arrêter, parce que ça pense que tu as déjà pressé Entrée*/
    fgets(str3, 64, stdin);//équivalent Scanf

    // Supprimer le \n
    if (str3[str_len(str3) - 1] == '\n') //si le dernier caractère est un \n
    {
        str3[str_len(str3) - 1] = '\0'; //Alors on le transforme en \0 pour supprimer le \n
    }

    puts(str3); //Ajoute automatiquement un saut de ligne

    m = atoi(strentier); //Inverse, transforme une chaine de caratères en int valeur
    p = atof(strfloat); //Inverse, transforme une chaine de caratères en float 

    printf("%d\n",m);
    printf("%f\n",p);

    /*Comparer des chaines de caractères grace à L'ASCII
    < 0 si str1 est inférieure à str2 (dans l’ordre ASCII)
    > 0 si str1 est supérieure à str2*/
    if(strcmp(strentier, strfloat)==0)
    {
        puts("égales");
        printf("%d\n", strcmp(strentier, strfloat));
    }
    else
    {
        puts("pas égales");
        printf("%d\n", strcmp(strentier, strfloat));
    }

    puts(strentier); //print strentier
    strcpy(strentier, strfloat); //copy strfloat dans strentier
    puts(strentier); // print le nouveau strentier

    //On cherche l'adresse d'une case contenant un caractère en particulier
    char alpha[] = "abcdefgh";
    char *ptrc = NULL; //pour stock l'adresse d'un caractère en dessous
    ptrc = strchr(alpha, 'f'); //cherche un caractère dans une chaîne
    printf("%lu   %lu\n", alpha, ptrc);

    //On cherche l'infice d'un caractère (son nombre de case)
    int ptrc2; //pour stock l'adresse d'un caractère en dessous
    ptrc2 = strchr(alpha, 'f') - alpha; //adresse de la premiere case - adresse de la case de f donne l'indice (la différence entre les 2 adresses)
    printf("%d\n", ptrc2);

    //On cherche l'adresse du premier caractère de la sous-chaîne
    char *ptrc3 = NULL; //pour stock l'adresse d'un caractère en dessous
    ptrc3 = strstr(alpha, "ef"); //cherche une sous-chaîne dans une chaîne
    printf("%s\n", ptrc3);

    return 0;
}
//Chaine de caractères = vecteurs de caractères avec une cases en plus contenant un caratère NULL 0
// Dans le compilateur -Wall permet d'afficher les erreurs non logiaue pour la machine