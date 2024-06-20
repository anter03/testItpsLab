#include "funzioni.h"
#include "controlli.h"

void cleanConsole() {
    system("pause");
    system("cls");
}

void menu() {
    printf("\n---UNIBA---\n<1> acquisizione insegnamenti\n<2> ricercare insegnamenti\n<3> inserire dati di un docente\n<4> termina");
    unsigned int scelta = 0;

    controllo_scelta(&scelta);
    while(scelta > 0 && scelta < 4) {
        switch(scelta) {
            case 1:
                acquisizione();
                cleanConsole();
                break;
            case 2:
                ricercare();
                cleanConsole();
                break;
            case 3:
                aggiornare();
                cleanConsole();
                break;
        }

        printf("\n---UNIBA---\n<1> acquisizione insegnamenti\n<2> ricercare insegnamenti\n<3> inserire dati di un docente\n<4> termina");
        controllo_scelta(&scelta);
    }

    puts("arrivederla");
}

void acquisisci() {
    
}