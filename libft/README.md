...existing code...
*This project has been created as part of the 42 curriculum by dioppolo.*

# Libft

## Description
Libft è una libreria C realizzata come progetto del curriculum 42. Scopo: reimplementare funzioni di uso generale della libc (per comprendere il loro funzionamento) e fornire utilità aggiuntive e funzioni per liste collegate (bonus). La libreria viene fornita come archivio statico `libft.a`.

## Istruzioni
- Compilazione: esegui la regola principale con [Makefile](Makefile):
  - `make` (compila la libreria)
  - `make bonus` (compila anche le funzioni bonus)
  - `make clean`, `make fclean`, `make re` sono disponibili come da [Makefile](Makefile)
- Uso:
  - Includi l'header: `#include "libft.h"` ([libft.h](libft.h))
  - Compila il tuo programma e collega la libreria: `cc main.c -L. -lft -o main`
  - I file sorgente si trovano nella root del progetto (es. [ft_strlen.c](ft_strlen.c)).

## Dettaglio della libreria
La libreria è organizzata in tre parti principali. Per ogni funzione è fornito il file sorgente.

Parte 1 — Reimplementazione di funzioni libc:
- Controllo caratteri: [`ft_isalpha`](ft_isalpha.c), [`ft_isdigit`](ft_isdigit.c), [`ft_isalnum`](ft_isalnum.c), [`ft_isascii`](ft_isascii.c), [`ft_isprint`](ft_isprint.c)
- Memoria: [`ft_memset`](ft_memset.c), [`ft_bzero`](ft_bzero.c), [`ft_memcpy`](ft_memcpy.c), [`ft_memmove`](ft_memmove.c), [`ft_memchr`](ft_memchr.c), [`ft_memcmp`](ft_memcmp.c)
- Stringhe e copie: [`ft_strlen`](ft_strlen.c), [`ft_strlcpy`](ft_strlcpy.c), [`ft_strlcat`](ft_strlcat.c), [`ft_strchr`](ft_strchr.c), [`ft_strrchr`](ft_strrchr.c), [`ft_strncmp`](ft_strncmp.c), [`ft_strnstr`](ft_strnstr.c), [`ft_strdup`](ft_strdup.c)
- Conversione e allocazione: [`ft_atoi`](ft_atoi.c), [`ft_toupper`](ft_toupper.c), [`ft_tolower`](ft_tolower.c), [`ft_calloc`](ft_calloc.c)

Parte 2 — Funzioni aggiuntive:
- Manipolazione stringhe: [`ft_substr`](ft_substr.c), [`ft_strjoin`](ft_strjoin.c), [`ft_strtrim`](ft_strtrim.c), [`ft_split`](ft_split.c)
- Conversione/iterazione/output: [`ft_itoa`](ft_itoa.c), [`ft_strmapi`](ft_strmapi.c), [`ft_striteri`](ft_striteri.c), [`ft_putchar_fd`](ft_putchar_fd.c), [`ft_putstr_fd`](ft_putstr_fd.c), [`ft_putendl_fd`](ft_putendl_fd.c), [`ft_putnbr_fd`](ft_putnbr_fd.c)

Parte 3 — Liste collegate (bonus):
- Creazione/Aggiunta: [`ft_lstnew`](ft_lstnew.c), [`ft_lstadd_front`](ft_lstadd_front.c), [`ft_lstadd_back`](ft_lstadd_back.c)
- Info/iterazione: [`ft_lstsize`](ft_lstsize.c), [`ft_lstlast`](ft_lstlast.c), [`ft_lstiter`](ft_lstiter.c), [`ft_lstmap`](ft_lstmap.c)
- Eliminazione: [`ft_lstdelone`](ft_lstdelone.c), [`ft_lstclear`](ft_lstclear.c)

Per l'elenco completo dei simboli vedi l'header: [libft.h](libft.h).

## Esempio rapido
1. Compila la libreria: `make`
2. Crea `main.c` che include `libft.h` e usa una funzione (es. [`ft_strlen`](ft_strlen.c)).
3. Compila e collega: `cc main.c -L. -lft -o main`

## Risorse
- Man pages C (es. `man 3 strlen`, `man 3 memmove`)
- Documentazione BSD per `strlcpy`/`strlcat`
- Subject 42: specifiche del progetto Libft

## Note
- La libreria è fornita come archivio statico `libft.a`.
- Controlla i file sorgente per dettagli implementativi (es. [ft_split.c](ft_split.c), [ft_itoa.c](ft_itoa.c)).

---

Autore: dioppolo