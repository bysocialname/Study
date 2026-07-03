#include <stdio.h>

int palindrome(char st[], int i, int f);
int somme(int tab[], int n);

int main(){

    int n;

    do{
        printf("Donner la taille du tableau \n");
        scanf("%d", &n);

    }while(n <= 0);

    int tab[n];

    for(int i = 0; i < n; i++){
        printf("Donner l'element %d du tableau \n", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("La somme des elements du tableau est : %d \n", somme(tab, n));

    char newtab[100];
    int counter = 0;
    
    printf("Entrez un mot : \n");
    scanf("%s", newtab);

    while(newtab[counter] != '\0'){
        counter++;
    }

    if(palindrome(newtab, 0, counter - 1))
        printf("Le mot est un palindrome : %s \n", newtab);
    else
        printf("Le mot n'est pas un palindrome : %s \n", newtab);

    return 0;
}

int palindrome(char st[], int i, int f){
    if(i >= f)
        return 1;
    if(st[i] != st[f])
        return 0;
    return palindrome(st, i + 1, f - 1);
}

int somme(int tab[], int n){
    if(n == 0)
        return 0;
    return tab[n - 1] + somme(tab, n - 1);
}