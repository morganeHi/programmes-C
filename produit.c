#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a = malloc(sizeof(int)); // allocation mémoire
    int *b = malloc(sizeof(int));
    printf("entier 1 : "); // recueillir un entier
    scanf("%i", a); // scanner l'entrée
    printf("entier 2 : ");
    scanf("%i", b);
    // faire le produit et afficher le résultat
    printf("le produit des deux entiers vaut : %i \n", (*a) * (*b));
    free(a); // libérer la mémoire
    free(b);
}
