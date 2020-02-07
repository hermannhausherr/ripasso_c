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
```
int var_a = 3;
printf("Valore di a = %d", var_a);
```
Questa istruzione stamperà a video la seguente frase
```
Valore di a = 3
```

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
```
scanf(<formato>,n<arg>);
```
**Vi è solo un'importante differenza! Gli argomenti nella scanf() devo essere passti per idirizzo, ossia preceduti da un '&'**
scanf("Inserisci il valore di a: %d", *&*a);
```
Dunque il valore acquisito da a sarà quello immesso dall'utente.
Anche nello scanf() si può avere un testo formattato avanzato. per esempio con "*" si può saltare l'input del dato.
Per esempio:
```
#include <stdio.h>

int main(){
        int a = 0;
        printf("Inserisci il valore di a: ");
        scanf("%*d %d", &a);
        printf("Il valore di a e' : %d", a);

        return 0;
}
```
L'output che ne verrà fuori sarà:
```
Inserisci il valore di a: 23 43
Il valore di a e': 43
```
### Direttive
#### Include
Utilizzando all'initzio del programma la direttiva *#include* posso aggiungere al mio programma un file.
#include [file]

Esso ha 2 sintassi, una per includere un file di sitema, una per includere un file del programmatore di cui deve specificare la locazione.
```
#include <stdio.h> \\ aggiunge una libreria già presente nel sitema
```
oppure
```
#include "miofile.h" \\ aggiunge un file chiamato *miofile.h* presente nella stessa cartella dove è presente il file del programma.

#### Define
Il *#Define* viene usato per aggingere una costante al programma. Essa non potrà essere in alcun modo variata
```
#define N 20
```
Come si può notare una costante è per convenzione indicata con un valore o un nume in maiuscolo.

### Operatori vari
#### Cast
In alcuni casi è necessario dover converire il *tipo* di una variabile.
Se vogliamo conoscere il valore char di un numero intero dobbiamo prima farlo leggere come un *char* dal programma.
Per fare ciò si usa il **casting**, ossia inserendo prima del nome della variabile e tra parentesi il tipo di variabile in cui vogliamo convertire.
```
char a = 'M';
  printf("a = %c\nIl suo valore e': %d",a ,(int)a);
```
Il risultato sarà...
```
a = M
>Il suo valore e': 77
```
#### Sizeof()
Serve semplicemente per calcolare il numero di byte occupati dai vari tipi di dato. Se faccio *sizeof(int)* il risultat sarà 4.
```
int a;
printf(sizeof(a))
```
Che stamperà:
```
4
```
### Cicli
#### For
#### While
#### Do...while

### Istruzioni
#### If
#### Switch

### Array
Un array o vettore è un insieme di variabili dello stesso tipo


### Funzioni e procedure
Una funzione è un **sottoprogramma** che ritorna un risultato indicato. Esso viene richiamato all'interno del programma principale (Main());

```
int stampa_num(){
   printf("%d", x);
}
int main(){
   stampa_num()
}
```

Una procedura è un **sottoprogramma** che non ritorna un risultato...
E' una funzione col void.

Ad una funzione possono essere aggiunti dei parametri di ingresso

```
int stampa_num(int x){
   printf(x);
   return 0;
}
```
E' importante però sapere che quando viene richiamata una funzione che chiede un paramtro bisogna passarglielo poiché la funzione non riconosce il valore dichiarato. Infatti seguendo l'esempio precedente se inserisco nel main() una variabile x non sarà la stessa che chiede la funzione.
```
void stampa_num(int x){
   printf("%d", x); \\ NON STAMPERÀ IL VALORE INSERITO NEL MAIN
}

int main(){
   int x = 3;
   stampa_num();
}
return 0;
```

Per una questione di ordine del programma si potrebbe preferire inserire un **prototipo**, ossia la funzione viene dichiarata sopra il main, ma il suo funzionamento viene indicato al di sotto.




# Architettura del computer
L'architettura di un computer è relativamente semplice, infatti contiene:
- *Un'unità di elaborazione*
- *Bus* per il trasferimento di dati
- Una o pià *unità di ingresso* (Tastiera e mouse)
- Una o più *Unità di uscita* (Monitor e stampante)
- *Memoria* (RAM e ROM) + *Memoria di massa*

## Microprocessore
Il microprocessore è un chip che realizza le funzioni di una CPU in un computer
### CPU
E' il componente che esegue le varie istruzioni dettate dal programma. Il suo funzionamento è diviso
in 4 fasi:
1. Fetching
Il processore prende dalla memoria tutti i dati necessari per eseguire l'operazione e inizialmente
li sposta nella sua memoria interna (Cache).
2. Decoding
Tutti i dati nella memoria vengono convertiti in codice binareio, comprensibile dal
microprocessore.
3. Executing
Elabora i dati.
4. Write Back
Copia il risultato in memoria.
La CPU (Central Processing Unit) è divisa in varie parti:
- Unità di decodifica istruzioni
- Unità di gestione degli indirizzi
- Unità di gestione dei bus
- *ALU* = Svolge le operazioni aritmetiche fondamentali
- *CU* (Control Unit) = Si occupa di stabilire la logica e l'ordine delle operazioni da eseguire.
- *Registri* = Memorie che immagazzinano i dati in fase di esecuzione.
#### Registri
Elenchi di memoria locale usati per conservare temporaneamente dei dati. Di solito si tratta di un immagazzinamento degli indirizzi o risultati parziali (Prima della Cache)
#### Unità Operativa
E' colei che svolge le operazioni richieste
#### ALU
E' la parte che svolge i calcoli composta da circuiti. Essa procede  in un ordine specifico
1. Preleva l'istruzione 
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
### Cache
E' una memoria molto rapida che si occupa di prelevare le informazioni dalla ram le immagazzina
dentro di sé e ler rende immediatamente disponibili al processore.
### Clock
E' ciò che detta la velocità del processore. Come visto in precedenza un ciclo è diviso in 4 fasi.
Ad ogni "colpo" di clock il processore termina un ciclo. La velocità è misurata per miliardi di
volte al secondo. Il clock è misurato in frequenza "Hertz"
# Sistema Binario
