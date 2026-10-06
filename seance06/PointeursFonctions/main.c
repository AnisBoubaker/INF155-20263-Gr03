/*
 *Écrire la fonction min_max qui reçoit un tableau d'entiers
 *et qui fournit à l'appelant le minimum et le maximum du
 *tableau
 */
#include <stdio.h>

void min_max(const int tab[], int taille, int *min, int *max);

int main(void) {
    int age_min, age_max;
    int ages[100] = {23, 16, 39, 76, 26, 67, 89, 23, 11, 27, 78};
    min_max(ages, 11, &age_min, &age_max);
    printf("Age minimum: %d, Age maximum: %d\n", age_min, age_max);

    return 0;
}

void min_max(const int tab[], int taille, int *min, int *max) {
    int le_min, le_max;

    le_min = tab[0];
    le_max = tab[0];
    for (int i=1; i<taille; i++) {
        if (tab[i]>le_max) {
            le_max = tab[i];
        }
        if (tab[i]<le_min) {
            le_min = tab[i];
        }
    }
    *min = le_min;
    *max = le_max;
}

