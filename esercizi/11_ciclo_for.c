/*
Il ciclo for è solo un po' complesso nella sua sintassi, ma a suo modo usatissimo;

for(int i = 0	    ;   i < n	   ;	i++)			    {...}
    qui vi è la	    in questo blocco	questo è per indicare	    dentro le parentesi
    dichiarazione   sono inserite	l'incremento		    ci sono le istruzioni
    della	    le condizioni di
    variabile	    fine
    del ciclo


Qui sotto vedremo come far fare un ciclo per 20 volte
*/
#include <stdio.h>
#define N 20
int main(){
    int i = 0;
    for(int i = 0; i < N; i++){
	printf("\nQuesta e' la volta n %d", i);
    }

    /*
    Mettiamo caso che voglia farlo eseguire solo 10 volte lasciando la costante
    N = 20
    per farlo posso o far partire i da 10
    Quindi for(i = 10; i < N; i++)...
    oppure impostando come traguardo N/2
    for(i = 0; i < N/2 ; i++)...
    Mentre l'ultimo modo è incrementando i di 2 invece che di uno
    for(i = 0; i < N; i+= 2)...
    
    si può notare come cambieranno gli output 
    */
    return 0;
}


/*
Visti i cicli si può provare ad annidarli (molto utile per le matrici in futuro)
*/
