#include <stdio.h>

int main(){
    const float PI = 3.14;
//sia l'input che l'output possono essere formattati a proprio piacimento
//lo si può fare modificando il valore tra % e il tipo di variabile
//da inserire

//	es: %[flag][min dim][.precisione][dimensione]d

//	    con [flag] si usano per esempio:
//		    - per giustificare la stampa a sinistra
//		    + premette sempre il segno
//	    con [min dim] specifico la dimensione minima di stmpa dei caratt		eri
	    
//	    con [precisione] posso specificare l'arrotondamento dopo la
//	    la virgola per i float

//	    [dimensione] serve per specificare su è un long o short


//  per la scanf
//	es: %[*][max dim][dimensione]d
	    
//	    [*] serve per far saltare l'input
//	    [max dim] Dimensione massima in caratteri del campo
//	    [dimensione] Come sopra ('h' per short 'l' per long)

    printf("%f", PI);
    printf("\n%+.2f", PI);
    return 0;
}
