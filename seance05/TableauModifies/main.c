#include <stdio.h>


void f1(int a) {
    a = a*a;
}

//En mettant const au pramètre tableau, la fonction ne peut plus modifier
//le contenu du tableau.
void f2(const int tab[], int taille) {
    for (int i=0; i<taille; i++) {
        //Instruction invalide: on n'a plus le droit de modifier le
        // contenu du tableau.
        //tab[i] = 0;
    }
}

int main(void) {
    int a;
    a=10;
    f1(a);
    printf("La variable a contient: %d\n", a);
    int tab[] = {4, 6, 1, 9, 10};
    f2(tab, 5);
    for (int i=0; i<5; i++) {
        printf("La case %d contient %d\n", i, tab[i]);
    }
    return 0;
}
