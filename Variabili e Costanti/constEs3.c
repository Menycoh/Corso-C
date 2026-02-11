#include <stdio.h>
#define  ORE_GIORNO 24

int main (){
    int giorni,calcolo;
    printf("Quanti giorni vuoi calcolare? ");

    scanf("%d", &giorni);

    calcolo = giorni * ORE_GIORNO;

    printf("In %d giorni ci sono %d ore", giorni,calcolo);

    return 0;
}