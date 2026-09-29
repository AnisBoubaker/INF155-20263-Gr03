#include <stdio.h>

#define MAX_FIBO 100
void fibonacci(long long tab[], int max);

int main(void) {
    long long fibo[MAX_FIBO];
    int nb_termes;

    printf("Combien de termes? ");
    scanf("%d", &nb_termes);

    fibonacci(fibo, nb_termes);

    for (int i=0; i<nb_termes; i++) {
        printf("Fibo(%d) = %lld\n", i, fibo[i]);
    }

    return 0;
}

void fibonacci(long long tab[], int max) {
    tab[0] = 1;
    tab[1] = 1;
    for (int i= 2; i<max; i++) {
        tab[i] = tab[i-1] + tab[i-2];
    }
}