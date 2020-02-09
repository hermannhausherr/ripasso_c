 /*
 se vogliamo usare una funzione per modifcare il valore di una variabile
 dobbiamo passare alla funzione l'indirizzo di essa e farne modificare il contenuto
 infatti si noti come nella scanf non sia stata inserita la &, questo
 perché val è già l'indirizzo. 

 invece per una funzione in cui dobbiamo solo operare
 basta passare il valore, dato che non lo deve modificare

 se dobbiamo far uscire un valore dalla funzione basta dichiararla
 col tipo di valore di ritorno
 e indicare alla fine di essa il valore da tornare
 */
 #include <stdio.h>

void ins(int *val){
    printf("Inserisci il valore: ");
    scanf("%d", val);
}
int somma(int x, int y){
    int tot = x + y;
    return tot;
}
int main(){
    int a, b ,c;
    ins(&a);
    ins(&b);
    c = somma(a,b);
    printf("La somma e': %d", c);
    return 0;
}
