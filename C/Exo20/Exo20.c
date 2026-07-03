#include <stdio.h>
#include <stdlib.h>


int main(){

    typedef struct {
        int numero;
        char type[12];
        float montant;
    } Compte;

    typedef struct {
        int jour;
        int mois;
        int annee;
        char lieu[20];
    } DateLieuNaissance;

    typedef struct {
        char nom[20];
        char prenom[20];
        char adresse[20];
        int telephone;
        DateLieuNaissance date;
        Compte compte[10];
    } Client;

    Client tab[20];

    int n, flag = 0;

    do{
        printf("Saisir le nombre de clients a afficher.");
        scanf("%d", &n);
        getchar();

        if(n > 0 && n <= 20)
            flag = 1;

    }while(!flag);

    for(int i = 0; i < n; i++){
        printf("Saisir votre nom \n");
        fgets(tab[i].nom, 20, stdin);
        printf("Saisir votre prenom \n");
        fgets(tab[i].prenom, 20, stdin);
        printf("Saisir votre adresse \n");
        fgets(tab[i].adresse, 20, stdin);
        printf("Saisir votre numero de telephone \n");
        scanf("%d", &tab[i].telephone);
        printf("Saisir votre jour de naissance \n");
        scanf("%d", &tab[i].date.jour);
        printf("Saisir votre mois naissance \n");
        scanf("%d", &tab[i].date.mois);
        printf("Saisir votre annee naissance\n");
        scanf("%d", &tab[i].date.annee);
        getchar();
        printf("Saisir votre lieu de naissance \n");
        fgets(tab[i].date.lieu, 20, stdin);

        for(int j = 0; j < 2; j++){
            printf("Saisie le numero de votre compte \n");
            scanf("%d", &tab[i].compte[j].numero);
            getchar();
            printf("Saisie le type de votre compte \n");
            fgets(tab[i].compte[j].type, 12, stdin);
            printf("Saisie le montant de votre compte \n");
            scanf("%f", &tab[i].compte[j].montant);
            getchar();
        }

    }

        for(int i = 0; i < n; i++){
        printf("Votre nom est : %s \n", tab[i].nom);
        printf("Votre prenom est : %s \n", tab[i].prenom);
        printf("Votre adresse est : %s \n", tab[i].adresse);
        printf("Votre numero de telephone est : %d \n", tab[i].telephone);
        printf("Votre jour de naissance est : %d \n", tab[i].date.jour);
        printf("Votre mois naissance est : %d \n", tab[i].date.mois);
        printf("Votre annee naissance est : %d \n", tab[i].date.annee);
        printf("Votre lieu de naissance est : %s \n", tab[i].date.lieu);
        for(int j = 0; j < 2; j++){
            printf("Le numero de votre compte est : %d \n", tab[i].compte[j].numero);
            printf("Le type de votre compte est : %s \n", tab[i].compte[j].type);
            printf("Le montant de votre compte est : %.3f\n", tab[i].compte[j].montant);
        }

    }


}
