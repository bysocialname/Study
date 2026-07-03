#include <stdio.h>

int main(){

    typedef struct {
        float reel;
        float img;
    }complexe;

    complexe c1, c2;

    printf("Saisir la partie reel de C1 \n");
    scanf("%f", &c1.reel);
    printf("Saisir la partie imaginaire de C1 \n");
    scanf("%f", &c1.img);

    printf("Saisir la partie reel de C2 \n");
    scanf("%f", &c2.reel);
    printf("Saisir la partie imaginaire de C1 \n");
    scanf("%f", &c2.img);


    printf("La somme entre C1 et C2 est : %.2f + %.2fi \n", c1.reel + c2.reel, c1.img + c2.img);
    printf("Le produit entre C1 et C2 est : %.2f + %.2fi \n", (c1.reel*c2.reel) - (c1.img*c2.img), (c1.reel*c2.img) + (c1.img*c2.reel));
}