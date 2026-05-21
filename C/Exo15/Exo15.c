#include <stdio.h>

int main(){

    // Declaration des variables locales
    int i, j, N, a, div, counter;

    // Controle de saisie
    do {
        printf("Saisir la valeur de N \n");
        scanf("%d", &N);

    }while(N <= 5);
    // Definition d'un variable tampon
    a = 3;
    // Iteration de i entre 1 - N
    for(i = 3; i <= N; i++){
        // Initialise le nombre de diviseur a 0
        // Sachant que nombre a deja 2 diviseurs
        counter = 0;
        // Iteration de j entre 2 et i - 1
        for(j = 2; j <= i - 1; j++){
            // Verfication : La fonction s'execute si le nombre n'est pas premier
            if(i % j == 0){
                counter++;
            }
        }
        // Affichage du couple jumeaux si on trouve un nombre premier
        if(counter == 0){
            div = i;
            if(div - a == 2){
                printf("(%d : %d) \t",a ,div);
                printf("\n");
            }
            // Permutation
            a = div;
        }
    }
}
