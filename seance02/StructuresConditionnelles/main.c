#include <stdio.h>

int main(void)
{
    int saisie;

    printf("Saisir une valeur a deviner: ");
    scanf("%d", &saisie);

    // if (saisie == 10) {
    //     printf("Vous avez bien devine la valeur!\n");
    // } else {
    //     if (saisie >=5 && saisie <= 15) {
    //         printf("Vous etes proche!\n");
    //     }
    //     else {
    //         printf("Desole, vous avez perdu!\n");
    //     }
    // }


    if (saisie == 10) {
        printf("Vous avez bien devine la valeur!\n");
    } else if (saisie >=5 && saisie <= 15){
        printf("Vous etes proche!\n");
    } else if (saisie >=-10 && saisie<=30){
        printf("Vous etes un peu loin!\n");
    } else {
        printf("Vous avez perdu!\n");
    }


    printf("Fin du jeu!\n");
    return 0;
}
