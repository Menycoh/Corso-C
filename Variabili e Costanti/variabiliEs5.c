#include <stdio.h>
//Scambiare il valore di due variabili intere utilizzando una variabile temporanea.
int main (){

    int a = 5;
    int b = 10;
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf ("%d\n", a);
    printf("%d\n",b);
}


