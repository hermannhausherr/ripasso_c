#include <stdio.h>

#define N 10

int main(){
    const float PI_GRECO = 3.14159;
    const int IVA = 22;
    //come possiamo notare sono state dichiarate 2 costanti. Esse non sono modificabili, quindi una
    //(Nota: Il fatto che abbiano tutte nomi in maiuscolo è solo per fìconformità, non cambia nulla
    //se sono dichiarate in minuscolo).
    //futura operazione come pi_greco = 3 non sono consentite. inoltre si può notare come
    //logicamente serva solo il valore iniziale.
    //Un altro modo per definire una costante è usando il #define NOME_COSTANTE valore
    printf("N = %d\n", N);
    printf("Pi greco = %f\n", PI_GRECO);
    printf("Iva = %d\n", IVA);
    return 0;
}
/*
in questa lezione vedremo le costanti. Dati che non possono essere modificati in alcun modo dal
programma. Esistono anche delle costanti speciali sotto forma di caratteri ASCII: '\007' ->
Campanello
'\n' e '\013' -> A capo
'\t' -> tabulatore

