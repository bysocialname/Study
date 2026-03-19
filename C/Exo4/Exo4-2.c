#include <stdio.h>

void main(){

    int n, a, b, c;

    printf("Saisir un entier n \n");
    scanf("%d", &n);

    printf("Saisir la valeur de a \n");
    scanf("%d", &a);

    printf("Saisir la valeur de b \n");
    scanf("%d", &b);

    printf("Saisir la valeur de c \n");
    scanf("%d", &c);

    if(n > b){
        if(n > c){
            printf("L'ordre croissant est : %d %d %d %d", a, b, c, n);
        }
        else{
            printf("L'ordre croissant est : %d %d %d %d", a, b, n, c);
        }
    }
    else{
        if(n > a){
            printf("L'ordre croissant est : %d %d %d %d", a, n, b, c);
        }
        else{
            printf("L'ordre croissant est : %d %d %d %d", n, a, b, c);
        }
    }
}