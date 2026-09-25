#include <stdio.h>

int bizarre(int a) {
    int x;
    if (a<0) {
        return 0;
    }
    x = a*a*a;
    a = 150;
    return a;
}


int main(void) {

    int a;
    int resultat;
    a = 10;
    bizarre(a);
    printf("La variable a vaut: %d\n", a);


    return 0;
}
