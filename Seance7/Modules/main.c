#include <stdio.h>
#include "chaines.h"

int main(void) {
    char chaine[] = "Bonjour tout le monde!";
    remplacer_caractere(chaine, ' ', '_');
    printf("%s\n", chaine);
    return 0;
}


