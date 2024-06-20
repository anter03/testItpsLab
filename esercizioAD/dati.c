#include "dati.h"

typedef struct {
    int matricola;
    char *nome;
    int Nstudenti;
    char *corso;
} Insegnamenti;

Insegnamenti ins[SIZE];

typedef Insegnamenti *insPtr;

insPtr startPtr = NULL;

unsigned int numeroInsegnamenti;