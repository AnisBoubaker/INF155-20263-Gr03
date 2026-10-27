#include <stdio.h>
#include <string.h>

#define MAX_SAISIE 1000

int main(void) {

    //char bonjour[] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
    char bonjour[] = "Bonjour";
    char *lemonde = "Le Monde!";



    printf("%s %s\n", bonjour, lemonde);

    //bonjour = {'A', 'l', 'l', 'o', 0, 0 ,0, '\0'};
    bonjour[0]= 'A';
    bonjour[1] = 'l';
    bonjour[2] = 'l';
    bonjour[3] = 'o';
    bonjour[4] = '\0';
    printf("%s\n", bonjour);


    lemonde = "tout le monde!";
    //CECI EST INTERDIT! Zone mémoire en lecture seule
    // lemonde[0]='T';
    // lemonde[1]='o';
    // lemonde[2]='u';
    // lemonde[3]='s';
    // lemonde[4]='\0';

    printf("%s %s\n", bonjour, lemonde);


    char saisie_usager[MAX_SAISIE];

    //printf("Quel est votre nom: ");
    //scanf("%s", saisie_usager); //Pas de & car un tableau c'est déjà un pointeur!

    //printf("Bonjour %s\n", saisie_usager);

    // Le scanf s'arrête de lire après un espace.
    printf("Quel est votre nom: ");
    fgets(saisie_usager, MAX_SAISIE, stdin);
    // int i=0;
    // while (saisie_usager[i]!='\n') {
    //     i++;
    // }
    saisie_usager[strlen(saisie_usager)-1] = '\0';
    printf("Bonjour %s\n", saisie_usager);



    return 0;
}
