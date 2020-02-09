/*
Adesso vedremo i primi cicli. Un ciclo server per far eseguire più volte una stessa operazione
Quelli che vedremo adesso sono il "while(){...}" e il "do{...}while().
La differenza è molto semplice. Il "while" esegue subito il controllo, quindi se non
soddisfatto non entra nel ciclo!
invece il do while esegue almeno una volta il ciclo dato che esegue il controllo a fine ciclo
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(){
    int i = 0;
    printf("Inserire il numero di i: ");
    scanf("%d", &i);
    
    printf("\n--------Ciclo while--------\n");
    while(i < N){
	printf("\nil numero e': %d", i);
	i++;	    //i++ è per incrementare di 1 il valore di i. Si può anche scrivere i = i + 1
		    // oppure i += 1
    }
    printf("\n");
     printf("\n--------Ciclo Do while---------\n");
     do{
	printf("\nIl numero e': %d", i);
    }while(i < N);
    return 0;
}
/*
Se si esegue il programma inserendo un valore di i >= 10 si può notare
come venga eseguito il do while una sola volta, ma non il while
*/
