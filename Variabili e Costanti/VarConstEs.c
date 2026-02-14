#include <stdio.h>
#define EBOLLIZIONE 100

int main (){
    int acqua;
    printf("Inserisci la temperatura attuale dell'acqua: ");
    scanf("%d", &acqua);

    if (acqua >= EBOLLIZIONE)
    {
        printf("L'acqua sta bollendo!");
    }
    else{
        printf("L'acqua non sta bollendo.");
    }
    
    return 0;
}