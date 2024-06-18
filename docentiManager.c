#include <stddef.h>

/** @brief Rappresenta una lista di elementi di tipo docente con le seguenti info le seguenti info: matricola, cognome, età e università. */
struct Docenti{
    int matricola;
    char  cognome [50];
    int eta;
    char  universita [50];
    struct Docenti *nextPtr; 
 };

 struct Docente{
    int matricola;
    char  cognome [50];
    int eta;
    char  universita [50];
 };

typedef struct Docenti docenti;
typedef docenti* docentiPtr;
docentiPtr head = NULL;


void CreateNode()
{
    docentiPtr newPtr = malloc(sizeof(docenti));
    if (newPtr != NULL)
    {
        newPtr->nextPtr=head;
        head=newPtr;
    }
    else   // no space available
    {
        printf("No memory available.\n");

    }
}


void DropNodeByIndex(int index){
    docentiPtr currentPtr = head;
    docentiPtr previousPtr = NULL;
    unsigned count = 0;

    while (currentPtr != NULL && count != index)
    {
        previousPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
        count++;
    }
    if (currentPtr != NULL){
       if (previousPtr == NULL)
        {
            // Se manca precedente sono nel primo nodo 
            head = currentPtr->nextPtr;
        }
         else
        {
            previousPtr->nextPtr = currentPtr->nextPtr;
        }
        free(currentPtr);
    }


}


void printDocente(docentiPtr docente)
{
    printf("Matricola: %s\n", docente->matricola);
    printf("Cognome: %s\n", docente->cognome);
    printf("Eta: %d\n", docente->eta);
    printf("Nome dell'Universita: %s\n", docente->universita);

}

void stampaLista()
{
    docentiPtr corrente = head;
    while (corrente != NULL)
    {
        stampaStudente(corrente);
         corrente = corrente->nextPtr;
    }
}

/** 
 * struct Docenti getDocenteByMatricola(char* matricola){
     unsigned count=0;
    docentiPtr tmp=head;
    while (tmp != NULL){
        if (tmp->matricola == matricola){
            return &tmp;
        }
    }
}
 * 
 * 
 */
