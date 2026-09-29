#include <stdio.h>
#include <stdlib.h>

int main(void){
    int taille = 8;
    int nb_bonnes_notes=0;
    int note_max;
    int notes[] = {70, 89, 72, 65, 92, 77, 81, 78};

    printf("Lea bonnes notes sont: ");
    note_max = notes[0];
    for (int i=0; i<taille; i++) {
        if (notes[i]>80) {
            printf("%d, ", notes[i]);
            nb_bonnes_notes++;
        }
        if (notes[i]>note_max) {
            note_max = notes[i];
        }
    }
    printf("\n");
    printf("Il y a %d bonne notes.\n", nb_bonnes_notes);
    printf("La note maximale est: %d\n", note_max);


    return EXIT_SUCCESS;
}