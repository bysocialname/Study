#include <stdio.h>

void main(){
    int a, b, c;

    printf("Saisir la valeur de a \n");
    scanf("%d", &a);

    printf("Saisir la valeur de b \n");
    scanf("%d", &b);

    printf("Saisir la valeur de c \n");
    scanf("%d", &c);

    if(a > b){
        if(b > c){
            printf("L'ordre du classement est : %d %d %d \n", c, b, a);
        }
        else {
            if(a > c){
                printf("L'ordre du classement est : %d %d %d \n", b, c, a);
            }
            else {
                printf("L'ordre du classement est : %d %d %d \n", b, a, c);
            }
        }
    }
    else {
        if(a > c){
            printf("L'ordre du classement est : %d %d %d \n", c, a, b);
        }
        else {
            if(b > c){
                printf("L'ordre du classement est : %d %d %d \n",a , c, b);
            }
            else {
                printf("L'ordre du classement est : %d %d %d \n",a , b, c);
            }
        }
    }
}