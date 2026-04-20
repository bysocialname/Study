#include <stdio.h>

int main(){

    int nombre, second, heur, minute;

    printf("Saisir le nombre total de seconde \n");
    scanf("%d", &nombre);

    heur = nombre / 3600;
    minute = (nombre % 3600) / 60;
    second = (nombre % 3600) % 60;

    printf("POur %d secondes \n", nombre);
    printf("%dh %dmn %ds \n", heur, minute, second);

    return 0;
}