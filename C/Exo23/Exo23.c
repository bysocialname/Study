#include <stdio.h>

int estParfait(int n);

int main(){

    int number;

    printf("Donner un entier aleatoire \n");
    scanf("%d", &number);

    int tabNombre[number];
    int ticket = 0;
    for(int j = 0, i = 1; i <= number; i++){
        ticket = j;
        int check = estParfait(i);
        if(check){
            tabNombre[j] = i;
            j++;
        }
    }

    printf("Les nombres parfaites sont : \n");
    for(int k = 0; k < ticket; k++){
        printf("%d ", tabNombre[k]);
    }
    printf("\n");

    return 0;
}

int estParfait(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        return 1;
    return 0;
}