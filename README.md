*Questo progetto è stato creato come parte del curriculum 42 da dioppolo.*

# ft_printf

## Descrizione

Questo progetto consiste nell'implementazione di una versione personalizzata della funzione `printf` in linguaggio C. L'obiettivo è creare una libreria che gestisca vari specificatori di formato, come caratteri, stringhe, numeri interi, numeri esadecimali e puntatori, fornendo un'alternativa leggera e controllata alla funzione standard della libreria C.

La libreria include funzioni ausiliarie per la conversione e la stampa di diversi tipi di dati, assicurando compatibilità e prestazioni ottimali.

## Istruzioni

### Compilazione

Per compilare la libreria, utilizzare il comando `make` nella directory del progetto:

```
make
```

Questo genererà il file `libftprintf.a`, la libreria statica contenente l'implementazione.

### Utilizzo

Includere l'header `ft_printf.h` nel vostro codice sorgente:

```c
#include "ft_printf.h"
```

Collegare la libreria durante la compilazione del vostro programma:

```
gcc -o programma programma.c libftprintf.a
```

Esempio di utilizzo:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s! Il numero è %d.\n", "mondo", 42);
    return 0;
}
```

## Risorse

- **Documentazione standard C**: La pagina man di `printf` (`man 3 printf`) fornisce la specifica completa degli specificatori di formato supportati.
- **Tutorial su variadic functions**: Articoli su siti come GeeksforGeeks o Stack Overflow spiegano l'uso di `va_list` per funzioni con numero variabile di argomenti.
- **Riferimenti al curriculum 42**: La documentazione interna di 42 School sui progetti di libreria.

## Spiegazione dettagliata dell'algoritmo e struttura dati scelta

### Algoritmo scelto

L'implementazione di `ft_printf` segue un approccio di parsing sequenziale della stringa di formato. L'algoritmo scansiona la stringa carattere per carattere, identificando gli specificatori di formato (inizianti con `%`) e gestendo la conversione e la stampa degli argomenti corrispondenti utilizzando `va_list` per accedere agli argomenti variabili.

Per la conversione dei numeri:
- I numeri interi vengono convertiti in stringhe utilizzando un algoritmo ricorsivo che divide il numero per 10 e costruisce la stringa al contrario.
- I numeri esadecimali utilizzano una logica simile, con una base 16 e lettere maiuscole/minuscole a seconda dello specificatore.

Questo approccio garantisce efficienza e semplicità, evitando allocazioni dinamiche non necessarie e minimizzando l'uso di memoria.

### Struttura dati scelta

- **Stringhe dinamiche**: Per costruire le rappresentazioni stringa dei numeri, vengono utilizzate stringhe allocate dinamicamente con `malloc`, ridimensionate secondo necessità.
- **Array di caratteri**: Per le conversioni esadecimali, viene utilizzato un array statico di caratteri rappresentanti le cifre esadecimali ("0123456789abcdef").
- **va_list**: Struttura fornita dalla libreria standard C per gestire argomenti variabili, essenziale per replicare il comportamento di `printf`.

La scelta di queste strutture dati è motivata dalla necessità di flessibilità (per stringhe di lunghezza variabile) e performance (array statici per operazioni ripetute), mantenendo la compatibilità con il sistema di memoria C standard senza introdurre dipendenze esterne.