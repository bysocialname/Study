#include <stdio.h>

void main(){
    int x, y;

    printf("Saisir la valeur de x \n");
    scanf("%d", &x);

    printf("Saisir la valeur de y \n");
    scanf("%d", &y);

    int xy;

    if(x % 2 == 0){
        xy = (x / 2)*(2 * y);
        printf("La multiplication russe de %d et %d est : %d", x, y, xy);
    }
    else{
        xy = ((x - 1)*y) + y;
        printf("La multiplication russe de %d et %d est : %d", x, y, xy);
    }
}