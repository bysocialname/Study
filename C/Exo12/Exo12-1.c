#include <stdio.h>

int main(){

    int option;

    printf("Menu calculatrice simple \n");
    printf("Saisir l'option de votre choix \n");
    printf("Addition (1) Soustraction (2) Multiplication (3) Division entier (4) Modulo (5) \n");
    scanf("%d", &option);

    if(option == 1){

        float a, b;

        printf("Saisir la valeur de a \n");
        scanf("%f", &a);

        printf("Saisir la valeur de b \n");
        scanf("%f", &b);

        printf("Addition entre a et b = %.2f \n", a+b);
    }
    else if(option == 2){
        float a, b;

        printf("Saisir la valeur de a \n");
        scanf("%f", &a);

        printf("Saisir la valeur de b \n");
        scanf("%f", &b);

        printf("Soustraction entre a et b = %.2f \n", a-b);
    }
    else if(option == 3){
        float a, b;

        printf("Saisir la valeur de a \n");
        scanf("%f", &a);

        printf("Saisir la valeur de b \n");
        scanf("%f", &b);

        printf("Multiplication entre a et b = %.2f \n", a*b);
    }
    else if(option == 4){
        int a, b;

        printf("Saisir la valeur de a \n");
        scanf("%d", &a);

        printf("Saisir la valeur de b \n");
        scanf("%d", &b);

        printf("Division entre a et b = %d \n", a/b);
    }
    else if(option == 5){
        int a, b;

        printf("Saisir la valeur de a \n");
        scanf("%d", &a);

        printf("Saisir la valeur de b \n");
        scanf("%d", &b);

        printf("Modulo entre a et b = %d \n", a%b);
    }
    
    return 0;
}