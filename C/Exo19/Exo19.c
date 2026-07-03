#include <stdio.h>

int main(){

    typedef struct {
        float ord;
        float abs;
    } Point;

    typedef struct {
        Point point;
        float rayon;
    } Cercle;

    Cercle cercle1;

    printf("Saisir les coordonnee du point central \n");

    printf("Saisir l'ordonne du point central \n");
    scanf("%f", &cercle1.point.ord);

    printf("Saisir l'abscisse du point central \n");
    scanf("%f", &cercle1.point.abs);

    printf("Saisir le rayon du cercle \n");
    scanf("%f", &cercle1.rayon);

    printf("Affichage : Soit un cercle C de centre I(%.2f, %.2f) et de rayon %.2f \n", cercle1.point.ord, cercle1.point.abs, cercle1.rayon);

    Cercle tab[5];

    for(int i = 0; i < 5; i++){
        printf("Cercle C%d \n", i+1);
        printf("Saisir l'ordonne du point central \n");
        scanf("%f", &tab[i].point.ord);

        printf("Saisir l'abscisse du point central \n");
        scanf("%f", &tab[i].point.abs);

        printf("Saisir le rayon du cercle \n");
        scanf("%f", &tab[i].rayon);
    }

    printf("Soit : \n");
    for(int i = 0; i < 5; i++){
        printf("Un cercle C%d de centre I(%.2f, %.2f) et de rayon %.2f \n", i+1, tab[i].point.ord, tab[i].point.abs, tab[i].rayon);
    }

    printf("Les cercles dont les coordonnes sont negatifs sont : \n");
    for(int i = 0; i < 5; i++){
        if(tab[i].point.ord < 0 && tab[i].point.abs < 0)
            printf("C%d de centre I(%.2f, %.2f) et de rayon %.2f \n", i+1, tab[i].point.ord, tab[i].point.abs, tab[i].rayon);
    }

    return 1;
}