#include <stdio.h>

// struct etudiant {
//     double tp1;
//     double tp2;
//     double intra;
//     double final;
// };
//
// typedef struct etudiant etudiant;

typedef struct etudiant {
    double tp1;
    double tp2;
    double intra;
    double final;
} etudiant;



typedef unsigned int uint;


int main(void) {

    uint v1;

    //struct etudiant e1;
    etudiant e1;
    e1.tp1 = 80;
    e1.tp2 = 85;
    e1.intra = 76;
    e1.final = 82;

    printf("L'etudiant a obtenu %.2lf a sont TP1, %.2lf a son TP2, %.2lf a son intra et %.2lf a son final",
        e1.tp1, e1.tp2, e1.intra, e1.final);

    struct etudiant classe[40];

    //Changer la note du TP1 du 3e etudiant
    classe[2].tp1 = 89;

    return 0;
}
