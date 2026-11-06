#include <stdio.h>
#include <string.h>
#define TAILLE_MAX_CHAINE 100

int main(void) {
    char nom1[TAILLE_MAX_CHAINE];
    char nom2[TAILLE_MAX_CHAINE];

    printf("Saisir le premier nom: ");
    fgets(nom1, TAILLE_MAX_CHAINE, stdin);
    nom1[strlen(nom1)-1]='\0';

    printf("Saisir le premier nom: ");
    fgets(nom2, TAILLE_MAX_CHAINE, stdin);
    nom2[strlen(nom2)-1]='\0';

    //if (nom1 == nom2) { //Aucun sens on compare des adresses
    if (strcmp(nom1, nom2)==0){
        printf("Vous avez saisi deux noms identiques!\n");
    } else {
        printf("Vous avez saisi deux noms différents!\n");
    }

    return 0;
}
