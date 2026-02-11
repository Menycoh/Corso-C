#include <stdio.h>
/*Le costanti sono l'antitesi delle variabili, contenitori di memoria, tipizzato e
identificato, il cui valore NON può cambiare nell'esecuzione codice.*/

/*Perché usare una costante invece che semplicemente una variabile da ricordare
di non cambiare? 
Per vari motivi: 
1. Il programmatore potrebbe dimenticarsene;
2. Molta meno confusione mentale e errori di distrazione o automatici.
3. Miglior utilizzo della memoria.
*/
int main (){

    const float PI = 3.14159; // Le costanti possono solo essere INIZIALIZZATE direttamente, non è possibile dichiararle e poi assegnarle un valore.
    
    /*Generalmente, per una miglior lettura nel codice, le costanti vengono identificate
    con il nome (identificatore) in maiuscolo, come sopra.*/


    //PI = 30;   - Questo è un errore. Non puoi prima dichiarare una costante e poi assegnarli il valore.

    //PI = 31;   - Questo è un errore, dato che NON puoi modificare il valore della costante.


    return 0;
}