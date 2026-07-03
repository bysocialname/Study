#include <stdio.h>
#define N 5

int saisieTableau(int tab[], int n);
int somme(int tab[], int n);

int tab[N];

int main(){

    saisieTableau(tab, N);
    printf("La somme des elements est %d \n", somme(tab, N));

    return 0;
}

int somme(int tab[], int n){

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += tab[i];
    }
    return sum;
}

void saisieTableau(int tab[], int n){

    for(int i = 0; i < n; i++){
    printf("Saisir l'element %d \n", i+1);
    scanf("%d", &tab[i]);
    }

}