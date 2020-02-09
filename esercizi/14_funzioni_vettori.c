/*
Immaginimamo di voler realizzare un programma che debba effettuare più volte
una stessa operazione. Risulterebbe scomodo doverla inserire molteplici volte!
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10



void riempi_vet(int v[],int dim){
    srand(time(NULL));   
    for(int i = 0; i < dim; i++){
	v[i] = rand()%99;
    }
}
void stampa_vet(int v[],int dim){
    for(int i = 0;i < dim; i++){
	printf("%d|", v[i]);
    }
}
int main(){
    int vet[N];
    riempi_vet(vet, N);
    stampa_vet(vet, N);
    return 0;
}
