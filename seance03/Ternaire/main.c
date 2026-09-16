#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double val;
    double val_absolue;

    printf("Saisir une valeur: ");
    scanf("%lf", &val);

    val_absolue = val > 0 ? val : -val;

    printf("La valeur absolue est: %lf\n", val_absolue);

    // if (val < 0) {
    //     val_absolue = -val;
    // } else {
    //     val_absolue = val;
    // }


    return 0;
}
