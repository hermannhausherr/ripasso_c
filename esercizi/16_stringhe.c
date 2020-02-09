/*
Visti i vettori e i caratteri possiamo immaginare le stringhe, ossia
vettori di caratteri 

l C possiede un metodo semplice per inizializzare le stringhe, infatti dichiarando un vettore senza
dimensione  e poi inserrendoci la stringa, esso la scriverà dentro al vettore terminando con
l'ultimo carattere '\0'

altrimenti posso dichiarare una stringa vuota, ma devo inserire una dimensione
char sr[25]

Inoltre anche per le stringhe esistono varie funzioni utili
la prima è sscanf()
Prende una stringa, ne estrapola i valori e li inserisci in variabili
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char stringa[] = "Ciao!";
    printf("%s", stringa);

    char sr[25];
    printf("Insereisci la seconda stringa: ");
    scanf("%s", sr);
    printf("\n%s", sr);

    char stringa3[] = "08 Febbraio 2020";
    char mese[9];
    int giorno, anno;
    sscanf(stringa3,"%d %s %d", &giorno, &mese, &anno );
    printf("\n===================");
    printf("\nGiorno: %d", giorno);
    printf("\nMese: %s", mese);
    printf("\nAnno: %d", anno);

    char stringa4[50];
    sprintf(stringa3, "%d %s %d", anno, mese, giorno);
    printf("\n===========\n");
    puts(stringa3);
    
    /*
    //per leggere stringhe e stamparle semplicemente
    char stringa5[20];
    stringa5 = gets();
    */
    return 0;
}
