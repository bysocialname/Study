#include <stdio.h>

void main(){

    int _0, _1, N;

    printf("Saisir la valeur de U(0) \n");
    scanf("%d", &_0);

    printf("Saisir la valeur de U(1) \n");
    scanf("%d", &_1);

    printf("Saisir le terme N de la suite \n");
    scanf("%d", &N);

    int Un;

    for(int i = 0; i < N-1; i++){
        Un = _1 + _0;

        _0 = _1;
        _1 = Un;
    }
    printf("Le terme U(N) de la suite est : %d", Un);
}