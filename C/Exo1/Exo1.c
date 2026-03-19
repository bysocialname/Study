#include <stdio.h>

int a, b, c;

void main(){

    printf("Saisir la valeur de a \n");
    scanf("%d", &a);

    printf("Saisir la valeur de b \n");
    scanf("%d", &b);

    printf("Saisirla valeur de c \n");
    scanf("%d", &c);

    int a_, b_, c_;

    a_ = b;
    b_ = c;
    c_ = a;
    
    printf("Avant : a = %d, b = %d, c = %d", a, b, c);
    printf("\n");
    printf("Apres : a = %d, b = %d, c = %d", a_, b_, c_);
    printf("\n");  
}