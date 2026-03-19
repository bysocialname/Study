#include <stdio.h>

int a, b, N;

void main(){

    printf("Saisir la valeur de a \n");
    scanf("%d", &a);

    printf("Saisir la valeur de b \n");
    scanf("%d", &b);

    printf("Saisir la valeur de N \n");
    scanf("%d", &N);

    int Un = 1;
    int sum = Un;

    for(int i = 0; i < N; i++){
        Un = (a * Un) + b;
        sum += Un;
    }
    printf("U(N) est egale a : %d", Un);
    printf("\n");
    printf("La somme des U(n) allant de 0 a N est : %d", sum);
}