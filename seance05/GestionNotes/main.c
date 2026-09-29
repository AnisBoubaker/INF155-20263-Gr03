#include <stdio.h>


// Taille maximale du tableau
#define NB_MAX_NOTES 20

double moyenne_tab( double tab[], int taille );
int selectionner_meilleures_notes(
    double notes[],
    int nb_notes,
    double note_plancher,
    double meilleures[],
    int max_meilleures);

int main(void) {
    int nb_notes;
    double notes[NB_MAX_NOTES];

    printf("Saisir le nombre de notes: (<=20)");
    do {
        scanf("%d", &nb_notes);
        if (nb_notes<1 && nb_notes>NB_MAX_NOTES) printf("Valeur incorrecte!");
    } while (nb_notes<1 && nb_notes>NB_MAX_NOTES);

    //nb_notes TAILLE EFFECTIVE du tableau

    //Saisie des nb_notes valeurs:
    for (int i=0; i<nb_notes; i++) {
        printf("Saisir la note %d: ", i+1);
        scanf("%lf", &notes[i]);
    }

    for (int i=0; i<nb_notes; i++) {
        printf("Note %d: %lf\n", i+1, notes[i]);
    }
    double moyenne;
    // double somme = 0;
    // for (int i=0; i<nb_notes; i++) {
    //     somme += notes[i];
    // }
    // moyenne = somme / nb_notes;
    //
    moyenne = moyenne_tab(notes, nb_notes);
    printf("La moyenne est : %.2lf\n", moyenne);

    double meilleures[5];
    int nb_meilleures;
    nb_meilleures = selectionner_meilleures_notes(notes, nb_notes, 80, meilleures, 5);

    printf("Liste des meilleures notes: ");
    for (int i=0; i<nb_meilleures; i++) {
        printf("%lf\n", meilleures[i]);
    }

    return 0;
}


double moyenne_tab( double tab[], int taille ) {
    double somme = 0;
    for (int i=0; i<taille; i++) {
        somme+=tab[i];
    }
    return somme / taille;
}

int selectionner_meilleures_notes(
    double notes[],
    int nb_notes,
    double note_plancher,
    double meilleures[],
    int max_meilleures) {

    int compteur_meilleures = 0;

    for (int i=0; i<nb_notes; i++) {
        if (notes[i] > note_plancher && compteur_meilleures<max_meilleures) {
            meilleures[compteur_meilleures] = notes[i];
            compteur_meilleures++;
        }
    }
    return compteur_meilleures;
}
