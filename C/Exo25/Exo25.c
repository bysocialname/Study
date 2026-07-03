#include <stdio.h>

int estEgal(int tab1[], int tab2[], int n, int m);

int main(){

    int n,m;
    do{
        printf("Saisir la taille de tab1[] \n");
        scanf("%d", &n);
        printf("Saisir la taille de tab2[] \n");
        scanf("%d", &m);

        if(n < 0 && m < 0)
            printf("Erreur : Ressayer...! \n");

    }while(n < 0 && m < 0);

    int t1[n], t2[m];

    printf("Remplissage du tableau tab1[] \n");
    for(int i = 0; i < n; i++){
        printf("Saisir l'element %d du tableau \n", i+1);
        scanf("%d", &t1[i]);
    }

    printf("Remplissage du tableau tab2[] \n");
    for(int i = 0; i < m; i++){
        printf("Saisir l'element %d du tableau \n", i+1);
        scanf("%d", &t2[i]);
    }

    int check = estEgal(t1, t2, n, m);

    if(check)
        printf("Les deux tableaux sont egaux \n");
    else
        printf("Les deux tableaux ne sont pas egaux \n");

    return 0;
}

int estEgal(int tab1[], int tab2[], int n, int m){

    if(n == m){
        for(int i = 0; i < n; i++){
            if(tab1[i] != tab2[i])
                return 0;
        }
        return 1;
    }
    return 0;
}