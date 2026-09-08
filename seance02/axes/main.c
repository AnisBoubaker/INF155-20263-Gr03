#include <stdio.h>

int main(void) {
    double x, y;

    printf("Valeur de x: ");
    scanf("%lf", &x);
    printf("Valeur de y: ");
    scanf("%lf", &y);

    if (x==0 && y==0) {
        printf("origine\n");
    } else if (x==0) {
        printf("axe vertical\n");
    } else if (y==0) {
        printf("axe horizontal\n");
    } else if (x>0 && y>0) {
        printf("cadran 1\n");
    } else if (x<0 && y>0) {
        printf("cadran 2\n");
    } else if (x<0 && y<0) {
        printf("cadran 3\n");
    } else {
        printf("cadran 4\n");
    }


    return 0;
}
