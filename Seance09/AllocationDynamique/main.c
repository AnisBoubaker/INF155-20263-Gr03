#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int *un_entier_dynamique = NULL;
    un_entier_dynamique = (int*)malloc(sizeof(int));

    //Important: Toujours vérifier si l'allocation a fonctionné
    if (un_entier_dynamique == NULL) {
        printf("Erreur d'allocation");
        exit(EXIT_FAILURE);
    }
    *un_entier_dynamique = 10;
    printf("Mon entier dynamique contient: %d\n", *un_entier_dynamique);


    //Créer un tableau dynamique
    double *un_tableau_de_doubles = NULL;

    //Création d'un tableau de 50 doubles
    un_tableau_de_doubles = (double*)malloc(50*sizeof(double));
    if (un_tableau_de_doubles == NULL) {
        printf("Erreur d'allocation");
        exit(EXIT_FAILURE);
    }

    un_tableau_de_doubles[0] = 10.5;
    un_tableau_de_doubles[1] = 25.2;

    printf("La case 1 contient: %lf\n", un_tableau_de_doubles[1]);

    free(un_tableau_de_doubles);
    un_tableau_de_doubles = NULL;

    un_tableau_de_doubles[10] = 25;

    return 0;
}
