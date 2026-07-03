#include <stdio.h>

int main(){

    char option;

    printf("Menu calculatrice simple \n");
    printf("Saisir l'option de votre choix \n");
    printf("Addition - Soustraction - Multiplication - Division entier - Modulo \n");
    scanf("%c", &option);

    if(option == '+'){

        float a, b;

        printf("Saisir la valeur de a \n");
        scanf("%f", &a);

        printf("Saisir la valeur de b \n");
        scanf("%f", &b);

        printf("Addition entre a et b = %.2f \n", a+b);
    }
    else if(option == '-'){
        float a, b;

        printf("Saisir la valeur de a \n");
        scanf("%f", &a);

        printf("Saisir la valeur de b \n");
        scanf("%f", &b);

        printf("Soustraction entre a et b = %.2f \n", a-b);
    }
    else if(option == '*'){
        float a, b;

        printf("Saisir la valeur de a \n");
        scanf("%f", &a);

        printf("Saisir la valeur de b \n");
        scanf("%f", &b);

        printf("Multiplication entre a et b = %.2f \n", a*b);
    }
    else if(option == '/'){
        int a, b;

        printf("Saisir la valeur de a \n");
        scanf("%d", &a);

        printf("Saisir la valeur de b \n");
        scanf("%d", &b);

        printf("Division entre a et b = %d \n", a/b);
    }
    else if(option == '%'){
        int a, b;

        printf("Saisir la valeur de a \n");
        scanf("%d", &a);

        printf("Saisir la valeur de b \n");
        scanf("%d", &b);

        printf("Modulo entre a et b = %d \n", a%b);
    }
    
    return 0;
}