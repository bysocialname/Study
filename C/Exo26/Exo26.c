#include <stdio.h>

typedef struct {
    int heure;
    int minute;
    int seconde;

} TEMPS;

TEMPS Somme(TEMPS T1, TEMPS T2);
int TRANSFORM(TEMPS T);
TEMPS DECOMPOS(int S);

int main(){

    TEMPS T1, T2;
    printf("Saisir l'heure de T1 \n");
    scanf("%d", &T1.heure);
    printf("Saisir le minute de T1 \n");
    scanf("%d", &T1.minute);
    printf("Saisir le seconde de T1 \n");
    scanf("%d", &T1.seconde);

    printf("Saisir l'heure de T2 \n");
    scanf("%d", &T2.heure);
    printf("Saisir le minute de T2 \n");
    scanf("%d", &T2.minute);
    printf("Saisir le seconde de T2 \n");
    scanf("%d", &T2.seconde);
    TEMPS T = Somme(T1, T2);

    TEMPS temps;
    printf("Saisir l'heure de temps \n");
    scanf("%d", &temps.heure);
    printf("Saisir le minute de temps \n");
    scanf("%d", &temps.minute);
    printf("Saisir le seconde de temps \n");
    scanf("%d", &temps.seconde);
    int S = TRANSFORM(temps);

    int Seconde;
    printf("Donner un nombre aleatoire de secondes \n");
    scanf("%d", &Seconde);
    TEMPS T3 = DECOMPOS(Seconde);

    printf("Affichage \n");
    printf("La somme de temps T1 avec T2 est : %d heure %d minute %d seconde \n", T.heure, T.minute, T.seconde);
    printf("%d heure %d minute %d seconde correspond a %d secondes \n", temps.heure, temps.minute, temps.seconde, S);
    printf("%d secondes correspond a %d heure %d minute %d seconde \n", Seconde, T3.heure, T3.minute, T3.seconde);

    return 0;
}

TEMPS Somme(TEMPS T1, TEMPS T2){

    TEMPS T;

    T.heure = T1.heure + T2.heure;
    T.minute = T1.minute + T2.minute;
    T.seconde = T1.seconde + T2.seconde;

    if(T.seconde > 60){
        T.seconde = T.seconde - 60;
        T.minute = T.minute + 1;
    }
    if(T.minute > 60){
        T.minute = T.minute - 60;
        T.heure = T.heure + 1;
    }

    return T;
}

int TRANSFORM(TEMPS T){
    int S = (T.heure * 3600) + (T.minute * 60) + T.seconde;
    return S;
}

TEMPS DECOMPOS(int S){

    TEMPS T;
    T.heure = 0;
    T.minute = 0;
    T.seconde = 0;

    do{
        S -= 3600;
        T.heure++;
    }while(S >= 3600);

    do{
        S -= 60;
        T.minute++;
    }while(S >= 60);

    T.seconde = S;
    
    if(T.seconde > 60){
        T.seconde -= 60;
        T.minute += 1;
    }
    if(T.minute > 60){
        T.minute -= 60;
        T.heure += 1;
    }

    return T;
}
