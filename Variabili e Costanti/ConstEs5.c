#include <stdio.h>
#define SOGLIA 50

int main (){
    float costo;
    printf("Inserisci il costo: ");
    scanf("%f",&costo);

    if (costo > SOGLIA){
        costo = costo - 10;    
        printf("Sconto applicato. Il costo è: %f", costo);
    }
    else{
        printf("Il costo rimane invariato. Costo: %f", costo);
    }

    return 0;
}