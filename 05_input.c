#include <stdio.h>

int main(){
    int x, y, z;
    //viste come mostrare a schermo le variabili possiamo facilmente
    //chiederne l'inserimento
    //per farlo useremo la funzione scanf()
    //essa è simile nella struttura alla printf, ma dovremo
    //stare attenti a un piccolo dettaglio
    //scanf("%d", &x); come possiamo notare è stata inserita una & per 
    //indicare la variabile in cui vogliamo salvare il dato inserito
    //questo perché la funzione deve operare sulla cella di memoria
    //della variabile.
    //Successivamnte vedremo il significato di quella &
    printf("Inserisci il valore della variabile x: ");
    scanf("%d",&x);
    printf("\nHai inserito %d", x);
    
    //Possiamo prevedere un particolare input dall'utente e quindi 
    //Chiedergli di inserire 2 variabili insieme staccate da un '-'

    printf("\nInserisci 2 variabili nel modo n-n: ");
    scanf("%d-%d", &y, &z);
    printf("\nHai inserito %d e %d", y, z);
    

    return 0;
}
