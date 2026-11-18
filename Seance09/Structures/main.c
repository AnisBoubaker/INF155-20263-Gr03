#include <stdio.h>
#include <string.h>

#define TAILLE_MAX_NOM 50

typedef struct etudiant {
    int identifiant;
    char nom[TAILLE_MAX_NOM];
    char prenom[TAILLE_MAX_NOM];
    double tp1;
    double tp2;
    double intra;
    double final;
} Etudiant;

double calculer_moyenne(const Etudiant *e);

int main(void) {
    Etudiant e1;

    e1.identifiant = 1;
    //Julie Villeneuve
    //e1.nom = "Villeneuve"; NE JAMAIS faire ça !
    strcpy(e1.nom, "Villeneuve");
    strcpy(e1.prenom, "Julie");
    e1.tp1 = 85;
    e1.tp2 = 75;
    e1.intra = 89;
    e1.final = 78;

    Etudiant e2;

    e2 = e1;

    e2.identifiant = 2;
    printf("id de e1: %d, id de e2: %d\n", e1.identifiant, e2.identifiant);
    printf("L'intra de e2: %lf\n", e2.intra);

    Etudiant *ptr_etudiant = NULL;

    ptr_etudiant = &e1;

    printf("La note du tp1 de l'étudiant: %lf\n", (*ptr_etudiant).tp1);

    printf("La note du tp2 de l'étudiant: %lf\n", ptr_etudiant->tp2);

    printf("e1 s'appelle: %s %s\n", e1.prenom, e1.nom);
    printf("e2 s'appelle: %s %s\n", e2.prenom, e2.nom);

    printf("La moyenne de e1 est: %lf\n", calculer_moyenne(&e1));


    return 0;
}

// const: ma fonction ne peut pas changer le contenu pointé par e
double calculer_moyenne(const Etudiant *e) {
    const double coef_tp1 = 0.2;
    const double coef_tp2 = 0.2;
    const double coef_intra = 0.25;
    const double coef_final = 0.35;


    return coef_tp1 * e->tp1 + coef_tp2 * e->tp2 + coef_intra*e->intra + coef_final * e->final;
}
