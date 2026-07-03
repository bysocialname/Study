#include <stdio.h>

int max(int a, int b);

int main(){

    int a1, a2, a3, a4;

    printf("Donner la valeur de a \n");
    scanf("%d", &a1);

    printf("Donner la valeur de b \n");
    scanf("%d", &a2);

    printf("Donner la valeur de c \n");
    scanf("%d", &a3);

    printf("Donner la valeur de d \n");
    scanf("%d", &a4);

    int max1 = max(a1,a2);
    int max2 = max(max1,a3);
    int max3 = max(max2,a4);

    printf("Le maximum entre [%d %d %d %d] est %d \n", a1, a2, a3, a4, max3);

    return 0;
}

int max(int a, int b){
    if(a > b)
        return a;
    return b;
}