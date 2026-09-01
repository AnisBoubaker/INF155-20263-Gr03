/*
 * Notre premier programme en C
 * Auteur:...
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //La variable age ne peut avoir que des valeurs positives
    unsigned int age;
    unsigned int increment = 2;
    //Affectation: Changer la valeur de age à 18.
    age = 18;
    age = 22+increment;

    unsigned char note = 'A'; //Stocke la valeur 65
    int bizarre;
    bizarre = note + 3;

    printf("La variable age contient: %d\n", age);
    printf("La variable bizarre contient: %d\n", bizarre);
    printf("La variable note contient: %d\n", note);
    printf("La variable note contient (en caractere): %c\n", note);
    printf("La variable bizarre contient: %c\n", bizarre);

    double moyenne;

    moyenne = 89.66;
    printf("La variable moyenne contient: %.2lf\n", moyenne);

    double note1, note2, note3;
    printf("Veuillez saisir la premiere note: ");
    scanf("%lf", &note1);
    printf("Veuillez saisir la deuxieme note: ");
    scanf("%lf", &note2);
    printf("Veuillez saisir la troisieme note: ");
    scanf("%lf", &note3);

    moyenne = (note1 + note2 + note3)/3;
    printf("La moyenne des notes est: %lf\n", moyenne);



    //printf("Hello, World!\n");
    return EXIT_SUCCESS;
}
