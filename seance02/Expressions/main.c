#include <stdio.h>

int main(void) {
    int a;
    double b;

    int val1 = 10;
    int val2 = 3;
    double resultat;

    a = 10*3;
    b = 10.0 / 3;

    printf("La valeur de a: %d\n", a);
    printf("La valeur de b: %lf\n", b);

    //resultat = val1 / (val2*1.0);
    resultat = (double)val1 / val2;
    printf("La valeur de resultat: %lf\n", resultat);

    int reste_division;

    reste_division = 23 % 3;

    //Opérateurs d'incrément
    int x = 20;
    int y = 3;
    int resultat2;

    resultat2 = x++ / y; // resultat2= x/y; x=x+1;
    printf("PRISE 1: Resultat2 contient: %d\n", resultat2);
    printf("PRISE 1: x contient: %d\n", x);

    x = 20;
    resultat2 = ++x / y;
    printf("PRISE 2: Resultat2 contient: %d\n", resultat2);
    printf("PRISE 2: x contient: %d\n", x);


    printf("La comparaison 5 <= 3 donne: %d\n", 5<=3);
    printf("La comparaison 5 >= 3 donne: %d\n", 5>=3);

    int note1=95;
    int note2=95;
    printf("Est-ce que les deux notes sont egales? %d\n", note1==note2);
    printf("Est-ce que les deux notes sont differentes? %d\n", note1!=note2);

    int age = 20;
    int note = 0;

    printf("La condition1 vaut: %d\n", age>18 && note < 65);
    printf("La condition2 vaut: %d\n", age && note ); //note est fausse car ça vaut 0.






    return 0;
}




