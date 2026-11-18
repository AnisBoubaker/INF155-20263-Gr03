/*
 * Définir le type de données Capteur. Chaque capteur a un
 * type (chaine de caractères) et une coordonnée (x et y).
 *
 * Écrire un programme qui demande à l'usager le nombre
 * de capteurs, et qui demande la saisie des informations
 * de chaque capteur.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX_TYPE 100

typedef struct capteur {
    char *type; //Chaine de caractères dynamique
    double coord_x;
    double coord_y;
} Capteur;

void afficher_capteurs(Capteur *tab, int taille);

int main(void) {
    int nb_capteurs;
    char buffer[TAILLE_MAX_TYPE]; //Chaine de caractère temporaire pour la saisir

    printf("Combien de capteurs: ");
    scanf("%d", &nb_capteurs);

    Capteur *tab_capteurs = NULL;

    tab_capteurs = (Capteur*)malloc(nb_capteurs * sizeof(Capteur));
    if (tab_capteurs == NULL) {
        printf("Erreur d'allocation memoire\n");
        exit(EXIT_FAILURE);
    }

    for (int i=0; i<nb_capteurs; i++) {
        printf("*** Capteur numero %d\n", i+1);
        printf("Saisir le type du capteur: ");
        getchar(); //Enlever le \n qui traine dans la mémoire du clavier

        //METHODE 1: Chaine de caracteres statique dans le Capteur
        //fgets(tab_capteurs[i].type, TAILLE_MAX_TYPE, stdin);
        //tab_capteurs[i].type[strlen(tab_capteurs[i].type)-1]= '\0';

        //METHODE 2: Chaine de caractère dynamique avec saisie préalable dans buffer
        // fgets(buffer, TAILLE_MAX_TYPE, stdin);
        // buffer[strlen(buffer)-1]= '\0';
        // tab_capteurs[i].type = (char*)malloc(sizeof(char)*(strlen(buffer)+1));
        // if (tab_capteurs[i].type == NULL) {
        //     printf("Erreur d'allocation.\n");
        //     exit(EXIT_FAILURE);
        // }
        // strcpy(tab_capteurs[i].type, buffer);

        //Méthode 3: Chaine de caractères dynamique avec réduction de la taille après saisie
        //On fait saisir le type de capteur dans un grand espace
        tab_capteurs[i].type = (char*)malloc(sizeof(char)*TAILLE_MAX_TYPE);
        fgets(tab_capteurs[i].type, TAILLE_MAX_TYPE, stdin);
        tab_capteurs[i].type[strlen(tab_capteurs[i].type)-1] = '\0';

        //On change la taille de l'espace alloué en fonction de ce que a saisi l'usager
        char *adr_temporaire = NULL;
        adr_temporaire = (char*)realloc(tab_capteurs[i].type, sizeof(char)*(strlen(tab_capteurs[i].type)+1));
        if (adr_temporaire == NULL) {
            printf("Erreur d'allocation.\n");
            exit(EXIT_FAILURE);
        }
        tab_capteurs[i].type = adr_temporaire;

        printf("Saisir la coordonnee x: ");
        scanf("%lf", &tab_capteurs[i].coord_x);
        printf("Saisir la coordonnee y: ");
        scanf("%lf", &tab_capteurs[i].coord_y);
    }

    afficher_capteurs(tab_capteurs, nb_capteurs);

    return 0;
}

// tab: un tableau de Capteur (adresse du premier élément)
void afficher_capteurs(Capteur *tab, int taille) {
    for (int i=0; i<taille; i++) {
        printf("Capture #%d\n", i+1);
        printf("Type: %s\n", tab[i].type);
        printf("Coordonnees: (%.2lf, %.2lf)\n", tab[i].coord_x, tab[i].coord_y);
    }
}
