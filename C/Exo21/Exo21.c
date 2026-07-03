#include <stdio.h>

int longueurChaine(char texte[]);

int main(){

    char mot[30];

    printf("Saisir un mot francais ! \n");
    scanf("%s", mot);

    int counter = longueurChaine(mot);

    printf("Le nombre de caractere du mot saisi est %d \n", counter);

    return 0;
}

int longueurChaine(char texte[]){
    int i = 0;

    while(texte[i] != '\0')
        i++;

    return i;
}