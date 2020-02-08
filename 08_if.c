/*
L'istruzione if è molto importante perché consente di
effettuare un controllo tra le variabili

si può sallungare con l'istruzione "else" o "else if()" se necessario inserire un'altra condizione
*/
#include <stdio.h>

int main(){
    int a, b, c, d;

    printf("Inserisci il valore di a: ");
    scanf("%d%", &a);
    printf("\nInserisci il valore di b: ");
    scanf("%d", &b);

    if(a < b)	//in questo caso si controlla se il valore di a è inferiore a quello di b
	printf("\nA < B");  //questo è quello che esegue se la condizione è vera
    else if(a > b)
	printf("\nA > B");  //questa è quello che succede se la condizione è falsa
    else
	printf("\nI numeri sono uguali!");
    //le condizioni possono essere inserite dentro delle {}, necessarie se più di un'istruzione!

    if (a == b){
	printf("\nI numeri inseriti sono uguali!");
	c = a+b;
	printf("\nla loro somma e' = %d ", c);
    }
    else{
	printf("\nI numeri inseriti non sono uguali");
    }

    
    //si possono fare anche fare degli if annidati
    //per esempio se voglio controllare che un numero inserito sia compreso tra un range
    //e pari o dispari, farò così:
    printf("\nInserisci un altro numero: ");
    scanf("%d", &d);

    if(d > 100 && d < 1000){	//si noti inoltre come siano state inserite 2 condizioni legate da un
				//"and" per l'or basta mettere "||"
	printf("\nIl numero è compreso tra 100 e 1000");
	if(d%2 == 0){
	    printf(" ed è pari");
	}
    }


    return 0;
}
