#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a; // initialisation des entiers
    int b;
    int c;

    printf("entier a : "); // recueillir l'entier
    scanf("%i", &a); // scanner l'entrée
    printf("entier b : ");
    scanf("%i", &b);
    printf("entier c : ");
    scanf("%i", &c);

    if (a > b && a > c) // comparer les entiers
    {
        printf("a : %i est le plus grand \n", a); // afficher le résultat
        return 0; // tout s'est bien passé
    }
    else if (b > a && b > c)
    {
        printf("b : %i est le plus grand \n", b);
        return 0;
    }
    else if (c > a && c > b)
    {
        printf("c : %i est le plus grand \n", c);
        return 0;
    }
    else
    {
        printf("il y a une égalité \n");
        return 0;
    }

}
