#include "controlli.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *
 * Funzione DIFENSIVA.  Questa funzione verifica se l'input utente per una scelta di menu � un numero intero compreso tra 1 e 4 (inclusi).
 * Se l'input non soddisfa questi criteri, verr� richiesto all'utente di reinserire il valore.
 *
 * @pre Il puntatore 'scelta' deve essere valido e puntare a una variabile allocata.
 * @post La variabile puntata da 'scelta' conterr� un valore intero compreso tra 1 e 4 (inclusi).
 */
void controllo_scelta(int *scelta)
{
    /*
    

    char a[1024] = "";
    scanf("%s", a);

    while(strlen(a) > 1 || isalpha(a[0])||atoi(a)>4||atoi(a)<1)
    {
        puts("Inserire un valore compreso tra 1 e 4 (inclusi)");
        scanf("%s", a);
    }
    sscanf(a, "%d", scelta); */
    int a = 0;
   scanf("%d", &a);
  while(a < 1 || a >4)
    {
        puts("Inserire un valore compreso tra 1 e 4 (inclusi)");
        scanf("%d", a);
    }
    *scelta = a;
}