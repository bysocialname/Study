#include <stdio.h>
#define PI 3.14

int main(){

    float rayon, diametre, circonf, surface;

    printf("Saisir le rayon d'un cercle \n");
    scanf("%f", &rayon);

    diametre = rayon * 2;
    circonf = PI * diametre;
    surface = PI * rayon * rayon;

    printf("Pour un rayon egal a %.2f\n", rayon);
    printf("Diametre = %.2f\n", diametre);
    printf("Circonference = %.2f\n", circonf);
    printf("Surface = %.2f\n", surface);

    return 0;
}
