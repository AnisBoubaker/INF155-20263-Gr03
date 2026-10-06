#include <stdio.h>

#define MAX_MESURES 20
#define MAX_JOURS 7

double moyenne_tab(double tab[][MAX_MESURES], int nb_lignes, int nb_colonnes) {
    double somme = 0;
    for (int i=0; i<nb_lignes; i++) {
        for (int j=0; j<nb_colonnes; j++) {
            somme+=tab[i][j];
        }
    }
    return somme / (nb_lignes*nb_colonnes);
}

int main(void) {
    double moyenne;
    //Tableau à deux dimensions de MAX_JOURS lignes et MAX_MESURES colonnes
    double temperatures[MAX_JOURS][MAX_MESURES] = {
        {10.5, 12, 15, 13.8, 14.5},
        {23, 20, 18.5, 22.9, 25},
        {18.4, 16.4, 14.9, 20.3, 18.7}
    };

    for (int i=0; i<3; i++) {
        for (int j=0; j<5; j++) {
            printf("%.2lf\t", temperatures[i][j]);
        }
        printf("\n");
    }

    // moyenne = 0;
    // for (int i=0; i<3; i++) {
    //     for (int j=0; j<5; j++) {
    //         moyenne+=temperatures[i][j];
    //     }
    // }
    moyenne = moyenne_tab(temperatures, 3, 5);
    printf("La moyenne est: %.2lf\n", moyenne);


    // double temperatures[MAX_MESURES] = { 10.5, 12, 15, 13.8, 14.5};
    // double moyenne = 0;
    //
    // moyenne = moyenne_tab(temperatures, 5);
    // printf("La moyenne de températures: %.2lf\n", moyenne);

    return 0;
}

// double moyenne_tab(double tab[], int taille) {
//     double moyenne;
//     for (int i=0; i<5; i++) {
//         moyenne += tab[i];
//     }
//     moyenne /=5;
//     return moyenne;
// }
