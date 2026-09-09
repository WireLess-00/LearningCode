#include <stdio.h>

int main(void)

{
    double note1;
    double note2;
    double note3;
    double note4;
    double note5;
    
    printf("Entrez votre première note :\n");
    scanf("%lf", &note1);
    printf("Voici la première note : %.1lf\n", note1);
    
    printf("Entrez votre deuxième note :\n");
    scanf("%lf", &note2);
    printf("Voici la dexième note : %.1lf\n", note2);    
    
    printf("Entrez votre troisième note :\n");
    scanf("%lf", &note3);
    printf("Voici la troisième note : %.1lf\n", note3);

    printf("Entrez votre quatrième note :\n");
    scanf("%lf", &note4);
    printf("Voici la quatrième note : %.1lf\n", note4);

    printf("Entrez votre cinquième note :\n");
    scanf("%lf", &note5);
    printf("Voici la cinquième note : %.1lf\n", note5);

    double resultat = (note1 + note2 + note3 + note4 + note5) / 5;

    printf("La moyenne des 5 notes est : %.1lf\n", resultat);

    return 0;
}