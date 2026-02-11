#include <stdio.h>
// Concetto di Variabile.
int main (){

    /*Le variabili sono contenitori di memoria, tipizzati e identificati da un nome (identificatore),
    che vengono utilizzati per:
    conservare e riutilizzare determinati valori a seconda dell'utilizzo.*/

    /*Concetto chiave da non dimenticare:
    - L'indirizzo: Ogni "contenitore" ha un numero "civico" in memoria, ovvero il suo indirizzo di memoria
    è visualizzabile con l'operatore &;*/
    
    // Come creare una variabile:

    int età = 21; // Inizializzazione - Prima fase della vita di una variabile. È la dichiarazione + assegnazione.
    int etàNonna; // Dichiarazione - Dichiara l'esistenza e il tipo della variabile, sempre parte dell'inizializzazione.
    età = 32; // Assegnazione - Si può fare sia nell'inizializzazione, sia a sé stante nel caso servisse dopo

    //Le variabili possono essere inizialzizate anche insieme, SE sono dello stesso tipo. Esempio:

    int etàCane = 10, etàGatto = 5, etàTartaruga = 23;

    //Le variabili possono essere riutilizzate nei casi di stampa (output):

    printf("Ciao, ho %d",età);
    printf("\nHo compiuto %d anni a settembre",età);
    printf("\nNon vedevo l'ora di compiere %d anni",età);


    return 0;

}
