#include <stdio.h>

int main(){

    int option;

    printf("Menu calculatrice simple \n");
    printf("Saisir l'option de votre choix \n");
    printf("Addition (1) Soustraction (2) Multiplication (3) Division entier (4) Modulo (5) \n");
    scanf("%d", &option);

    switch(option){

        case 1 : 
            float a1, b1;

            printf("Saisir la valeur de a \n");
            scanf("%f", &a1);

            printf("Saisir la valeur de b \n");
            scanf("%f", &b1);

            printf("Addition entre a et b = %.2f \n", a1 + b1);
        break;

        case 2 :

            float a2, b2;

            printf("Saisir la valeur de a \n");
            scanf("%f", &a2);

            printf("Saisir la valeur de b \n");
            scanf("%f", &b2);

            printf("Soustraction entre a et b = %.2f \n", a2 - b2);
        break;

        case 3 :

            float a3, b3;

            printf("Saisir la valeur de a \n");
            scanf("%f", &a3);

            printf("Saisir la valeur de b \n");
            scanf("%f", &b3);

            printf("Multiplication entre a et b = %.2f \n", a3 * b3);
        break;

        case 4 :

            int a4, b4;

            printf("Saisir la valeur de a \n");
            scanf("%d", &a4);

            printf("Saisir la valeur de b \n");
            scanf("%d", &b4);

            printf("Division entre a et b = %d \n", a4 / b4);
        break;

        case 5 :

            int a5, b5;

            printf("Saisir la valeur de a \n");
            scanf("%d", &a5);

            printf("Saisir la valeur de b \n");
            scanf("%d", &b5);

            printf("Modulo entre a et b = %d \n", a5 % b5);
        break;
    }

    return 0;
}