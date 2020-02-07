#include <stdio.h>

int variabile = 3;

int main(){
    int x; //usata per indicare i numeri interi da -32,767 a +32,767
    char a; //usata per indicare i caratteri (alfabetici e non). 
    float y; //usata per indicare i numeri con la virgola
    double z; //come quella sopra, ma più grandi.
    // nel C sono revisti dei modificatori per le variabili.
    int signed n;   //in questo caso permette valori numerici con segno
    int unsigned m; //non permette valore numerici con segno
    
    short int var; 
    /*
    sono applicabili all'int (infatti possono essere usati senza specificare
    l'int) e ne modificano la dimensione
    //questi modificatori posso essere mescolati, dunque posso creare una vaariabile "signed short int"
    //possono essere anche dichiarate più variabili dello stesso tipo in lista:
*/
int v1, v2, v3;
    {
	int var_blocco = 2;
	printf("%d", var_blocco);
    }
    //printf("var blocco = %d", var_blocco);
    //l'isruzione qua sopra darà errore nonostante sia stata dichiarata, ma in un blocco
    return 0;
}

/*Una variabile è un dato che viene creato dal programma e salvato in memoria. Successivamente questo dato può essere modificato dal programma stesso
Come si può notare una variabile è stata dichiarata fuori dal main, ma sarà comunque visibile da
esso
*/
