#include <stdio.h>

int main(){

    int tab[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Saisir la valeur de M[%d][%d] \n", i+1, j+1);
            scanf("%d", &tab[i][j]);
        }
    }

    int counter = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(tab[i][j] != tab[j][i])
                counter++;
        }
    }

    if(counter == 0){
        return printf("La matrice M est symetrique \n");
    }
    return printf("La matrice M n'est pas symetrique \n");
}