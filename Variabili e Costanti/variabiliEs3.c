#include <stdio.h>
//Eseguire una semplice operazione aritmetica utilizzando due variabili e salvare il risultato in una terza variabile.
int main (){

    float num1,num2,somma;

    printf ("Inserisci il primo numero: ");
    scanf("%f",&num1);
    printf("Inserisci il secondo numero: ");
    scanf("%f", &num2);


    somma = num1 + num2;

    printf("La somma dei due numeri è = %f", somma);

    return 0;

}