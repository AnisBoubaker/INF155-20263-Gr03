#include <stdio.h>

double calculer_moyenne(double somme, int nombre) {
    double moyenne;

    moyenne = somme / nombre;

    return moyenne;
}

int main(void) {
    double somme_notes, saisie_note, moy;
    int nb_etud;

    printf("Combien d'etudiants: ");
    scanf("%d", &nb_etud);
    somme_notes = 0;
    for (int i=0; i<nb_etud; i++) {
        printf("Note de l'etudiant %d: ", i+1);
        scanf("%lf", &saisie_note);
        somme_notes+=saisie_note;
    }

    moy = calculer_moyenne(somme_notes, nb_etud );
    printf("La moyenne est : %.2lf\n", moy);

    printf("La moyenne poru 10 étudiants dont la somme des notes est 768.5 est: %lf",
        calculer_moyenne(768, (int)10.5 ));

    return 0;
}
