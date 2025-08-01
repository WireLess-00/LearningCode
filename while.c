#include <stdio.h>

#define until(condition) while(!(condition)) /*until(condition) devient while (!(condition))*/

int main(void)
{
    int i = 0;
    int o;
    int j = 0;
    int p = 0;

    while(i < 5) /*Boucle*/
    {
        if(i == 3)
            break; /*Arreter la boucle*/
        printf("Tom1\n");
        i++;
    }

    for(o = 0; o < 3; o++) /*Pour*/
    {
        printf("Tom2\n");
        continue; /*Continue la boucle sans faire attention a la suite*/
        printf("%d",o);
    }
    do /*Tant...*/
    {
        printf("Tom3\n");
        j++;
    } while (j<2); /*...Que*/

    do /*Fait...*/
    {
        printf("Tom4\n");
        p++;
    } until (p == 7); /*...Jusqu'a ce que; while (!(p==7)) donc !(p==7) = false*/

    return 0;
}