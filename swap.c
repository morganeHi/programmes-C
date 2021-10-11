#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b); // appel de la fonction

int main(void)
{
    int *a = malloc(sizeof(int)); // allocation mémoire
    int *b = malloc(sizeof(int));

    printf("entier a : "); // recueillir un entier
    scanf("%i", a); // scanner l'entrée
    printf("entier b : ");
    scanf("%i", b);
    printf("a vaut %i et b vaut %i\n", *a, *b); // affichage des valeurs initiales de a et b
    swap(a, b); // utilisation de la fonction
    printf("a vaut %i et b vaut %i\n", *a, *b); // résultat final
    free(a);// libération de la mémoire
    free(b);
}

void swap(int *c, int *d) // fonction qui permet l'échange
{
    int tmp = *c; // variable temporaire de stockage
    *c = *d;
    *d = tmp;
}
