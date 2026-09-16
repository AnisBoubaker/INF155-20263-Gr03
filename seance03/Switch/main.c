/*
 *
 * Programme qui saisit deux nombres réels et demande l'opération à réaliser (+,-,/,*) et affcihe le résultat.
 *
 * Si l'opération à réaliser n'est pas permise, on affiche opération invalide.
 */


#include <stdio.h>
#define FFLUSH() do{} while(getchar() != '\n');

int main(void) {
    double nb1, nb2;
    char operation;

    printf("Valeur 1: ");
    scanf("%lf", &nb1);
    printf("Valeur 2: ");
    scanf("%lf", &nb2);

    printf("Operation (+, -, *, /): ");
    FFLUSH();
    scanf("%c", &operation);

    switch (operation) {
        case 'a':
        case '+':
            printf("Le resultat: %lf\n", nb1 + nb2);
            break;
        case 's':
        case '-':
            printf("Le resultat: %lf\n", nb1 - nb2);
            break;
        case 'm':
        case '*':
            printf("Le resultat: %lf\n", nb1 * nb2);
            break;
        case 'd':
        case '/':
            printf("Le resultat: %lf\n", nb1 / nb2);
            break;
        default:
            printf("Operation invalide\n");
    }

    // if (operation == '+') {
    //     printf("Le resultat: %lf\n", nb1 + nb2);
    // } else if (operation == '-') {
    //     printf("Le resultat: %lf\n", nb1 - nb2);
    // } else if(operation == '*') {
    //     printf("Le resultat: %lf\n", nb1 * nb2);
    // } else if(operation == '/') {
    //     printf("Le resultat: %lf\n", nb1 / nb2);
    // } else {
    //     printf("Operation invalide\n");
    // }

    return 0;
}
