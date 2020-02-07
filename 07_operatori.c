/*
CAST
L'operatore di cast serve per quando dobbiamo convertier una variabile
da un tipo all'altro. ciò si può notare quando dobbamo fare una divisione
tra interi. Il risultato verrebbe un intero, quindi perdendo le cifre
decimali, ma per conservarlo possiamo usa reil cast
sull'operazione cosicché il risultato sarà un float

SIZEOF
Questo operatore è molto semplice poiché ritorna sempicemente la
dimensione di una variabile data
*/
#include <stdio.h>

int main(){
    int a = 32;
    int b =  7;
    float c = a/b;
    printf("%d/%d = %f", a, b, c); //mostrerà 4.000
    //printf("Il valore di a e' %d, quello di b e' %c", a, b);
    c = (float) a/b;
    printf("%d/%d = %f", a, b, c);  //mostrerà 4.428

    printf("\nLa dimnsione di un float e': %d B", sizeof(c));
    printf("tipo        n.byte\n");
    printf("-----------------\n");
    printf("char        \t%d\n", sizeof(char));
    printf("int         \t%d\n", sizeof(int));
    printf("long        \t%d\n", sizeof(long));
    printf("long long   \t%d\n", sizeof(long long));
    printf("float	\t%d\n", sizeof(float));
    printf("double      \t%d\n", sizeof(double));
    printf("long double \t%d\n", sizeof(long double));
    return 0;
}
