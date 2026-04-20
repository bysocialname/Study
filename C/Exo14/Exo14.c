#include <stdio.h>
#include <math.h>

int main() {
    int N;

    do {
        printf("Entrez la taille de la liste (N > 2) : ");
        scanf("%d", &N);
    } while (N <= 2);

    int T[N];

    printf("Entrez les %d entiers :\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    int min = T[0];
    int max = T[0];
    for (int i = 1; i < N; i++) {
        if (T[i] < min) min = T[i];
        if (T[i] > max) max = T[i];
    }
    printf("\n1. Maximum = %d et Minimum = %d", max, min);

    int trouve = 0;
    for (int i = 2; i < N; i++) {
        if (T[i] * T[i] == T[i-1] + T[i-2]) {
            printf("\n2. Le nombre est %d (car %d^2 = %d + %d)", T[i], T[i], T[i-1], T[i-2]);
            trouve = 1;
            break;
        }
    }
    if (!trouve) printf("\n2. Aucun nombre ne correspond au critère du carré.");

    int nb_suites = 1; 
    for (int i = 1; i < N; i++) {
        
        if (T[i] < T[i-1]) {
            nb_suites++;
        }
    }
    printf("\n3. Le nombre de sous-suites croissantes est : %d\n", nb_suites);

    return 0;
}
