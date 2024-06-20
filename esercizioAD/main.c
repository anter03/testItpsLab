#include "funzioni.h"

void acquisizione();
void ricercare();
void aggiornare();

int main() {
    menu();

    return 0;
}

void acquisizione() {
    if(SetFlagAcquisizione() == 0) {
        acquisisci();
    } else {
        puts("acquisizione ancora in corso");
    }
}

void ricercare() {

}

void aggiornare() {
    
}