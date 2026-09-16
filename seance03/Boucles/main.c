#include <stdio.h>
#define FFLUSH() do{} while(getchar() != '\n')

int main(void) {

    int nb_repetitions;
    for(nb_repetitions=0;nb_repetitions<100; nb_repetitions++) {
        printf("Hello, World!\n");
    }

    // int nb_repetitions = 0;
    // while ( nb_repetitions < 100) {
    //     printf("Hello, World!\n");
    //     nb_repetitions++;
    // }


    // char saisie;
    //
    // do {
    //     printf("Saisir une valeur parmi A, B ou C: ");
    //     scanf("%c", &saisie);
    //     FFLUSH();
    //     if (saisie!='A' && saisie != 'B' && saisie != 'C') {
    //         printf("Saisie invalide!\n");
    //     }
    // } while (saisie!='A' && saisie != 'B' && saisie != 'C');



    // Validation de saisie avec une boucle while
    // printf("Saisir une valeur parmi A, B ou C: ");
    // scanf("%c", &saisie);
    // FFLUSH();
    // while (saisie!='A' && saisie != 'B' && saisie != 'C') {
    //     printf("Saisie invalide!\n");
    //     printf("Saisir une valeur parmi A, B ou C: ");
    //     scanf("%c", &saisie);
    //     FFLUSH();
    // }





    //Boucle While de base
    // int nb_repetitions = 0;
    // while ( nb_repetitions < 100) {
    //     printf("Hello, World!\n");
    //     nb_repetitions++;
    // }

    return 0;
}
