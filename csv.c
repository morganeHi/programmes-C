#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("car.csv", "a");
    // 1e arg : nom du fichier
    //2e arg soit r (read), w (write), a

    if (!file)
    {
        return 1;
    }
    // obtenir modèle et immatriculation
    char model[100];
    char immat[100];
    printf("modèle : ");
    scanf("%99s", model);
    printf("immatriculation : ");
    scanf("%99s", immat);



    //écrire dans le fichier csv
    fprintf(file, "%s, %s \n", model, immat);

    //fermer le fichier csv
    fclose(file);
}
