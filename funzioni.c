#include <stdio.h>
#include <stdlib.h>
#include "funzioni.h"
#include "controlli.c"

void menu() {
    int scelta = 0;
    do {
        printf("Inserisci 1 per l'acquisizione\n"
               "Inserisci 2 per la ricerca\n"
               "Inserisci 3 per l'aggiornamento\n"
               "Inserisci 4 per terminare\n");
        controllo_scelta(&scelta);
        switch(scelta) {
            case 1:
           //     acquisizione();
                cleanConsole();
                break;
            case 2:
           //     ricercare();
                cleanConsole();
                break;
            case 3:
            //    aggiornare();
                cleanConsole();
                break;
            case 4:
                printf("Terminazione del programma.\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
                cleanConsole();
                break;
        }
    } while(scelta != 4);
}

void cleanConsole() {
    system("pause");
    system("cls");
}