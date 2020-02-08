/*
L'istruzione di "switch()" serve per fare controlli con molteplici 'casi'
si può impostare la fine di un'opzione con un break;

Se nessuna il valore da controllare non risponde a nessuna delle opzioni
allora si può far eseguire un'opzione di default.
*/
#include <stdio.h>

int main(){
    int x;
    char c = 'a';
    
    printf("Inserisci un numero: ");
    scanf("%d", &x);

    switch(x){
	case 1:
	case 2:
	    printf("\nIl nuermo è o 1 o 2");
	    break;
	case 3:
	    printf("\nIl numero e' 3");
	    break;
	default:
	    printf("\nil numero non è tra quelli eseguibili");
	    break;
    };
    printf("\n=================================\n");
    
    printf("\nInserisci una lettera: ");
    scanf("%c", &c);

    switch(c){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	    printf("\n%c e' una volcale!", c);
	    break;
	default:
	    printf("\n %c Non e' una vocale!", c);
	    break;
    }
    return 0;
}
