/*
 * Calcule le nombre de combinaisons possibles si on retire nb_tirage
 * boules dans une urne contenant nb_boules (sans tenir compte de l'ordre,
 * sans répetition)
 */

#include <stdio.h>

// Déclaration des fonctions
double factorielle(int n);
int nombre_combinaisons(int nb_tirage, int nb_total);

//Programme principal
int main(void) {
    int nb_boules, nb_tirage;

    // printf("%.0lf\n", factorielle(5));
    // printf("%.0lf\n", factorielle(10));
    // printf("%.0lf\n", factorielle(0));
    // printf("%.0lf\n", factorielle(1));

    printf("Combien de boules? : ");
    scanf("%d", &nb_boules);
    printf("Combien par tirage? : ");
    scanf("%d", &nb_tirage);

    printf("Nombre de combinaisons: %d\n", nombre_combinaisons(nb_tirage, nb_boules));


    return 0;
}

// Définition des fonction

int nombre_combinaisons(int nb_tirage, int nb_total) {
    return (int)(factorielle(nb_total) / (factorielle(nb_tirage) * factorielle(nb_total-nb_tirage)));
}

double factorielle(int n) {
    double resultat = 1;

    for (int i=1; i<=n; i++) {
        resultat = resultat * i;
    }
    return resultat;
}

