#include <stdio.h>

int main(void) {
    int nb;
    double fact=1;

    printf("Saisir le nombre pour le calcul de la factorielle: ");
    scanf("%d", &nb);

    for (int i=1; i<=nb; i++) {
        fact = fact * i;
    }

    printf("%d! = %.0lf\n", nb, fact);

    return 0;
}
