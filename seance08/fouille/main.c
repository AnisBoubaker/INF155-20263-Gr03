#include <stdio.h>

int fouille_binaire(const int valeurs[], int nombre, int cible)
{
    int debut = 0, fin = nombre;

    while (debut < fin) {
        int milieu = debut + (fin - debut) / 2;

        if (valeurs[milieu] == cible) return milieu;

        if (valeurs[milieu] < cible) {
            debut = milieu + 1;
        } else {
            fin = milieu;
        }
    }

    return -1;
}

void tri_insertion(int tab[], int taille) {
    for (int i=1; i<taille; i++) {
        int copie = tab[i];
        int j = i;

        while (j>0 && tab[j-1] > copie) {
            tab[j] = tab[j-1];
            j--;
        }
        tab[j] = copie;
    }
}

void tri_selection(int tab[], int taille) {
    for (int i=0; i<taille-1; i++) {
        int indice_min  = i;

        for (int j=i+1; j<taille; j++) {
            if (tab[j]<tab[indice_min]) {
                indice_min = j;
            }
        }

        if (indice_min!=i) {
            int copie = tab[indice_min];
            tab[indice_min] = tab[i];
            tab[i] = copie;
        }
    }
}




void afficher_tableau(int tab[], int taille) {
    for (int i=0; i<taille; i++) {
        printf("%d\t", tab[i]);
    }
    printf("\n");
}


int main(void) {
    // int tab[] = {3, 8, 10, 23, 30, 45, 57, 68, 90, 100};
    //
    // printf("L'element se trouve a la position %d\n", fouille_binaire(tab, 10, 35));

    int mon_tableau[] = {45, 23, 89, 67, 12, 19, 23, 5, 18, 101, 34};
    int mon_tableau2[] = {45, 23, 89, 67, 12, 19, 23, 5, 18, 101, 34};
    printf("Tableau original: ");
    afficher_tableau(mon_tableau, 11);

    tri_insertion(mon_tableau, 11);
    printf("Apres tri insertion: ");
    afficher_tableau(mon_tableau, 11);

    tri_selection(mon_tableau2, 11);
    printf("Apres tri selection: ");
    afficher_tableau(mon_tableau2, 11);



    return 0;
}
