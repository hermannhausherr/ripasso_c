Ripasso Informatica
====================
# Linguaggio C
## Fondamenti
### Keywords
Sono delle parole usate in gergo informatico per indicare uno specifico argomento. Per esempio "print" significa stampare a video.
### Dati 
Un dato è un insieme di bit memorizzato in una cella di memoria esso viene indentificato con:
-un nome
-un'interpretazione
-una modalità di accesso. 
#### Nome (Identificatore)
Indica semplicemente il nome del dato che il programma e l'utente devono sapere. infatti permette di dare nomi comprensibili e indicativi per l'utente in modo che possa capire l'utilità. Anche il programma capirà il nome. è Importante usare nomi diversi per dati diversi!
E' molto importante il fatto che in C sono case sensitive, ossia due parole apparentemente uguali, ma con anche un solo carattere in minuscolo o maiuscolo vengono viste come differenti.
#### Tipo
Indica l'interpretazione del dato, ossia quanto spazio in memoria occuperà e come verrà letto. Infatti un float verrà letto in modo diverso da un integer.
#### Variabili e Costanti
Quando si tratta di una variabile allora il valore contenuto in essa sarà modificabile nel programma. Nel caso di una costante no.
#### Dichiarazione di un dato
Essa serve per allocare lo spazio in memoria per quel dato e assegnarvi un nome. Per dichiarare una variabile prima si indica il tipo poi il nome. In più si può aggiungere un modificatore (esempio per fare una costante) o assegnare subito il valore.
> const int var = 2;

Ci sono alcune costanti che in C hanno già un significato. Per esempio '\007' fa eseguire un bip dal sitema o '\013' serve per indicare l'"A capo" (anche '\n').

### Input e output
Con input si intende prelevare un valore da tastiera. Output indica "mostrare" un valore su schermo.
La libreria *stdio.h* include già i metodi per eseguire queste operazioni.
Per la funzione di *Output* viene usata l'istruzione *printf()*.
Per la funzione di *Input* viene usata l'istruzione *scanf()*.
Esse hanno una sintassi similie, ma il loro funzionamento è leggermente diverso!
#### Printf
> int var_a = 3;
> printf("Valore di a = %d", var_a);

Questa istruzione stamperà a video la seguente frase
> Valore di a = 3


Come si puù notare all'interno delle parentesi tonde() sono stati inseriti in ordine il **formato** dell'autput e un **argomento**.
Il **formato** può contenere una frase per indicare cosa verrà stampato e delle **direttive**. Un esempio di direttiva è il '%d' inserito dopo 'a = '. Esso indica che in quella parte dell'**argomento** ci sarà un numero intero.
Altre direttive possibili sono le seguenti:
- %d o %i|	intero
- %u	|	unsiged
- %s	|	Stringa
- %c	|	Char
- %f	|	float
- %g	|	double

Il numero di argomenti necessari è indicato dal numero di direttive inserite.

Si possono inserire ulteriori direttive per creare un testo formattato avanzato.
Per esempio scrivendo "%.[dimensione]" si può indicare il numero di cifre decimali dopo la virgola.


#### scanf()
Come il printf() anche la **scanf()** ha la sintassi composta da
> scanf(<formato>,n<arg>);

**Vi è solo un'importante differenza! Gli argomenti nella scanf() devo essere passti per idirizzo, ossia preceduti da un '&'**
> scanf("Inserisci il valore di a: %d", *&*a);

Dunque il valore acquisito da a sarà quello immesso dall'utente.
Anche nello scanf() si può avere un testo formattato avanzato. per esempio con "*" si può saltare l'input del dato.
Per esempio:
>1	#include <stdio.h>
>2
>3 int main(){
>4         int a = 0;
>5         printf("Inserisci il valore di a: ");
>6         scanf("%*d %d", &a);
>7         printf("Il valore di a e' : %d", a);
>8 
>9         return 0;
>10 }

L'output che ne verrà fuori sarà:

>Inserisci il valore di a: 23 43
>Il valore di a e': 43

#### Direttive
##### Include
Utilizzando all'initzio del programma la direttiva *#include* posso aggiungere al mio programma un file.
> #include [file]

Esso ha 2 sintassi, una per includere un file di sitema, una per includere un file del programmatore di cui deve specificare la locazione.
> #include <stdio.h> \\ aggiunge una libreria già presente nel sitema

oppure

> #include "miofile.h" \\ aggiunge un file chiamato *miofile.h* presente nella stessa cartella dove è presente il file del programma.

##### Define
Il *#Define* viene usato per aggingere una costante al programma. Essa non potrà essere in alcun modo variata
> #define N 20

Come si può notare una costante è per convenzione indicata con un valore o un nume in maiuscolo.








# Architettura del computer
L'architettura di un computer è relativamente semplice, infatti contiene:
- *Un'unità di elaborazione*
- *Bus* per il trasferimento di dati
- Una o pià *unità di ingresso* (Tastiera e mouse)
- Una o più *Unità di uscita* (Monitor e stampante)
- *Memoria* (RAM e ROM) + *Memoria di massa*

## Microprocessore
Il microprocessore è l'unità centrale del computer, colei che elabora i dati. Esso realizza le funzioni di una *cpu*
### CPU
La CPU (Central Processing Unit) è divisa in varie parti:
- Unità di decodifica istruzioni
- Unità di gestione degli indirizzi
- Unità di gestione dei bus
- *ALU*
- *CU* (Control Unit)
- *Registri*
#### Registri
Elenchi di memoria locale usati per conservare temporaneamente dei dati. Di solito si tratta di un immagazzinamento degli indirizzi o risultati parziali (Prima della Cache)
#### Unità Operativa
E' colei che svolge le operazioni richieste
#### ALU
E' la parte che svolge i calcoli composta da circuiti. Essa procede  in un ordine specifico
1. Preleva ò'istruzione 
2. Interpreta l'istruzione
3. Esegue l'istruzione
Questi passaggi vengono temporizzati da un elemento detto clock, ossia un teporizzatore all'interno della cpu. Il suo multiplo intero in cui un eperazione viene svolta si chiama *ciclo macchina*
### Bus
I *Bus* sono i componenti adibiti al trasporto di informazioni. Trasportano un solo dato alla volta la cui grandezza è specificata dall'**Ampiezza** del Bus. Il numero di dati che trasportano in un secondo è dato dalla **frequenza**.
Dunque è molto importante dimensionarlo bene poiché si potrebbe creare una situazione a "Collo di bottiglia".
Un Bus puù essere diviso in tre *"Sotto Bus"*
- Data Bus
- Addresss Bus
- Control Bus
Attraverso questi dati si può capire la **Massima Dimensione Interna**.
La dimensione dell'**Abus** determina il numero massimo di celle. La dimensione della memoria si può comprendere attraverso un calcolo:
> 2^Abus*Dbus
Invece la massima memoria esterna dipende solo dai Bus di I/O

# Sistema Binario
