#include <stdio.h>

void main(){
    int s;

    printf("Saisir la valeur de s (le seuil) \n");
    scanf("%d", &s);

    int Un, n;

    Un = 1;
    n = 0;
    
    while(Un < s){

        Un = (Un*Un) + Un + 1;
        n++;
    }
    printf("La plus petit valeur de n tq Un >= s est : %d", n);
}