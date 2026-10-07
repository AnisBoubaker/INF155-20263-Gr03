#include <stdio.h>


// void tripler(double tab[], int taille) {
//     for (int i=0; i<taille; i++) {
//         tab[i] = 3*tab[i];
//     }
// }
void tripler(double *tab, int taille) {
    for (int i=0; i<taille; i++) {
        *(tab+i) = 3* *(tab+i);
    }
}


int main(void) {
    double valeurs[10] = {10.5, 34.6, 28.9, 110.0, 86.4};

    tripler(valeurs, 5);

    for (int i=0; i<5; i++) {
        printf("%.2lf\t", valeurs[i]);
    }
    printf("\n");


    int un_entier = 10;

    printf("L'adresse de un entier: %d\n", &un_entier);
    printf("L'adresse de un entier + 1: %d", (&un_entier) + 1);




    return 0;
}
