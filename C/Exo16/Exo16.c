#include <stdio.h>

int main(){

    int n;

    do {
        printf("Saisir la taille du tableau \n");
        scanf("%d", &n);
    }while(n <= 0);

    float tab[n];

    printf("Remplissage du tableau \n");
    for(int i = 0; i < n; i++){
        printf("Saisir le %der element \n", i+1);
        scanf("%f", &tab[i]);
    }

    float som = 0;

    for(int i = 0; i < n; i++){
        som = som + tab[i];
    }

    printf("La somme de ses elements est %.2f \n", som);

    float max = tab[0];

    for(int i = 1; i < n; i++){
        if(max < tab[i])
            max = tab[i];
    }

    printf("Le plus grand element est %.2f \n", max);

    float value;

    printf("Saisir un valeur aleatoire \n");
    scanf("%f", &value);

    for(int i = 0; i < n; i++){
        if(value == tab[i])
            printf("%.2f se trouve bien dans le tableau avec l'indice %d \n", value, i);
    }

}