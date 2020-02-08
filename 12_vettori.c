/*
immaginimamo di voler immagazzinare 100 dati
Potrei fìdichiarare 100 variabili, ma sarebbe lunghissimo!
Dunqeu uso un "vettore" (array in inglese) Ossia un contenitore
di varibili dello stesso tipo

se dichiaro un vettore di interi dentro potrà contenere solo tali valori

per inizializzare un vettore si usa il seguente modo:

int nome[dimensione] = {n0, n2, ...n_dimensione-1}
dove dimensione e' un valore intero > 0 (nota con v[1] e' come se foss euna variabile normale);
*/
#include <stdio.h>

int main(){
    int vettore[10] = {2, 3, 4, 2 ,23 ,32 ,35, 1, 5, 67};   // in questo caso ho inizializzato un
							    //un vettore con già i valori inseriti
    int vettore_2[5];	//in questo caso non ho inizializzato alcun valore
			//tuttavia come per le varibili conterrà il valore scritto in memoria!


    //per utilizzare un vettore è indispensabile l'utilizzo di un ciclo for!
    //per esempio per stampare il primo vettore

    for(int i = 0; i < 10; i++){
	printf("%d|", vettore[i]);
    }
}
