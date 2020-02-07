#include <stdio.h>

int main(){
    int x = 3;
    float y = 3.14;
    //viste le variabili, impariamo a mostrarle a video
    //per fare ciò useremo la funzione printf()
    //essa può essere utilizzata semplicemente per stampare a video
    //una frase
    printf("Questa e' una frase semplice\n"); //nota lo \n server per andare a capo
    //oppure possiamo usarla per stampare una variabile, in questo caso è un po' particolare dato
    //che dobbiamo
    //specificare il tipo di dato da stampare
    //%d per gli interi
    //%f per i float e %g per i double
    //%c per i char e così via
    printf("\n%d", x);
    printf("\n%d", y);//eseguendo il programma questa parte non avrà senso
			//questo succede perché abbiamo dichiarato un
			//float, ma stiamo cercando di stampare un int
    printf("\n%f", y);
    //nulla vieta di inserire una frase per rendere più comprensibile il
    //testo
    printf("\nStampo la variabile x: %d",x);
    //e possono essere stampate anche più variabili insieme!
    printf("\nAdesso stampo tutte le variabili in colonna:\n\tx\t=\t%d\n\ty\t=\t%f\n", x, y);
    return 0;
}
