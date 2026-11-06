#include <stdio.h>
#include <string.h>
#define TAILLE_MAX_CHAINE 100


int main(void) {

    char chaine1[TAILLE_MAX_CHAINE];
    char chaine2[TAILLE_MAX_CHAINE] = " le monde!";
    char resultat[TAILLE_MAX_CHAINE];

    //Pas permis car on n'est pas à la déclaration
    //chaine1 = "Bonjour"; //Ne jamais affecter une chaine de caractères, utiliser strcpy

    strcpy(chaine1, "Bonjour");
    printf("%s\n", chaine1);

    strcpy(resultat, chaine1); //Resultat contient Bonjour
    // for (int i = 0; i<= strlen(chaine2);  i++) {
    //     resultat[strlen(chaine1)+i] = chaine2[i];
    // }

    strcat(resultat, chaine2);
    printf("Resultat: %s\n", resultat);


    int age = 18;
    char nom[] = "Tremblay";
    char prenom[] = "Luc";
    char phrase[TAILLE_MAX_CHAINE];

    sprintf(phrase, "%s a %d ans.\n", nom, age);
    printf("%s\n", phrase);


    char nom2[TAILLE_MAX_CHAINE];
    sprintf(nom2, "%s", nom); //strcpy

    char nom_complet[TAILLE_MAX_CHAINE];
    sprintf(nom_complet, "%s %s", prenom, nom); //eq de strcat


    return 0;
}
