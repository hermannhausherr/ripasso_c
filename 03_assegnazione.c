#include <stdio.h>

//abbiamo visto come dichiarare una variabile, ma non come inizializzarla, ma lo vedremo adesso.

int main(){
    int x;  //qui la variabile è stata dichiara, ossia una 
	    //parte della memoria servirà per contenere
	    //questa variabile (ha un vaolore, ossia quello scritto in memor		ia)
    
    x = 3; //qui abbiamo dato un valore a x;

    printf("x = %d",x);
    x = 4; //qui andiamo a sostituire il vecchio valore con uno nuovo
    printf("\nx = %d", x);
    return 0;
}
