/*
Abbiamo già visto i caratteri in precedenza, oggi vedremo come usarli al meglio
e alcune funzioni che li riguardano

Le prime sono getchar() e putchar()
Servono per gestire l'input e l'output di caratteri, dunque
sono come il scanf e printf!
==========================
int getchar();

server per inserire un carattere, questa funzione non opereà direttamente sulla
variabile, ma restituirà come intero il valore inserito da tastiera
Quindi se volgliamo scrivere su una variabile ipotetica 'char lettera'
dobbiamo fare in modo che in essa venga salvato il valore di ritorno di
getchar()

char lettera;
lettera = getchar();

NOTA: Potrebbe capitare di incappare in un carattere speciale 'EOF' (End Of File)
esso indica che vi è stata un'interruzione da parte del utente (Ctrl+Z su windows o Ctrl+D su Linux)
====================================
invece per stampare con putchar() basyta inserire la variabile da stampare dentro le prarentesi
dato che opererà sul valore inserito

char lettera = 'F';
putchar(lettera);

*/
#include <stdio.h>

int main(){
    char c;
    char f;
    c = getchar();
    putchar(c);

    f = getchar();
    if(f != EOF){
	putchar(f);
    }
    else{
	printf("Errore! ");
    }
    return 0;
}
/*
Viste le prime due funzioni ecco una lista di altre funzioni che potrebbero servire

int isalnum (char c)	
int isalpha (char c)
isdigit (char c)
islower(char c)
isupper (char c) 
int isspace(char c
int isascii(char c)
int iscntrl(char c)
oint isgraph(char c)
isprint(char c)	
int ispunct(char c)
int tolower(char c)
int toupper(char c)
*/
