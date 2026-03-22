#include <stdio.h>

int a, b, c;

int main(){

    printf("Saisir la valeur de a \n");
    scanf("%d", &a);

    printf("Saisir la valeur de b \n");
    scanf("%d", &b);

    printf("Saisir la valeur de c \n");
    scanf("%d", &c);

    int a_, b_, c_;

    a_ = b;
    b_ = c;
    c_ = a;
    
    printf("Avant : a = %d, b = %d, c = %d\n", a, b, c);
    printf("Apres : a = %d, b = %d, c = %d\n", a_, b_, c_);
    
    return 0;
}