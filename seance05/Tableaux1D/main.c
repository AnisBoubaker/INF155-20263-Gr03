#include <stdio.h>

#define NB_MAX_NOTES 10
#define TOTO 40

int main(void) {
    //Création d'un tableau de notes de NB_MAX_NOTES cases
    //int notes[NB_MAX_NOTES] = {90, 85, 78};

    //Création d'un tableau et initialisation de toutes les cases à 0.
    int notes[NB_MAX_NOTES] = {0};

    printf("La premiere case de mon tableau contient: %d\n", notes[0]);
    printf("La deuxieme case de mon tableau contient: %d\n", notes[1]);
    printf("La troisieme case de mon tableau contient: %d\n", notes[2]);
    printf("La quatrieme case de mon tableau contient: %d\n", notes[3]);

    notes[3] = 100;
    printf("La quatrieme case de mon tableau contient: %d\n", notes[3]);

    //NE FONCRTIONNE PAS: IL N'EST PAS POSSIBLE D'AFFICHER LE CONTENU DU TABLEAU
    //DIRECTEMENT AVEC UN PRINTF
    printf("Le tableu: %d\n", notes);

    for (int i = 0; i<NB_MAX_NOTES; i++) {
        printf("La case %d contient la valeur %d\n", i, notes[i]);
    }



    return 0;
}
