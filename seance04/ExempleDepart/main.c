#include <stdio.h>

int main() {
    int nbEtudiants;
    int i;
    float note;
    float somme = 0;
    int nbReussites = 0;

    printf("Nombre d'etudiants : ");
    scanf("%d", &nbEtudiants);

    for (i = 1; i <= nbEtudiants; i++) {

        printf("\nEtudiant %d\n", i);

        printf("Entrez la note : ");
        scanf("%f", &note);

        while (note < 0 || note > 100) {
            printf("Note invalide. Recommencez : ");
            scanf("%f", &note);
        }

        somme = somme + note;

        if (note >= 60) {
            printf("Resultat : Reussite\n");
            nbReussites++;
        }
        else {
            printf("Resultat : Echec\n");
        }

        if (note >= 90) {
            printf("Mention : Excellent\n");
        }
        else if (note >= 80) {
            printf("Mention : Tres bien\n");
        }
        else if (note >= 70) {
            printf("Mention : Bien\n");
        }
        else if (note >= 60) {
            printf("Mention : Passable\n");
        }
        else {
            printf("Mention : Aucune\n");
        }
    }

    printf("\n--- Resultats du groupe ---\n");
    printf("Moyenne : %.1f\n", somme / nbEtudiants);
    printf("Reussites : %d\n", nbReussites);
    printf("Echecs : %d\n", nbEtudiants - nbReussites);

    return 0;
}