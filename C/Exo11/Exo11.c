#include <stdio.h>

int main(){

    float note;

    printf("Saisir la note de l'eleve \n");
    scanf("%f", &note);

    if(note < 10)
        printf("L'eleve est recale \n");
    else if(note < 12)
        printf("L'eleve a la mention passable \n");
    else if(note < 14)
        printf("L'eleve a la mention assez bien \n");
    else if(note < 16)
        printf("L'eleve a la mention bien \n");
    else
        printf("L'eleve a la mention tres bien \n");

    return 0;
}