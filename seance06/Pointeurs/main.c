#include <stdio.h>

int main(void) {

    int un_entier = 10;

    printf("Le contenu de un_entier est: %d\n", un_entier);

    // %p est le code pour afficher des adresses.
    printf("La variable un entier se trouve à : %p\n", &un_entier);

    int *adr_un_entier = NULL;

    adr_un_entier= &un_entier;

    printf("%p\n", adr_un_entier);

    printf("Ce qui se trouve à l'adresse est: %d\n", *adr_un_entier );



    return 0;
}
