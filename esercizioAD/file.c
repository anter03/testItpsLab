#include "file.h"
#include "controlli.h"

FILE *fp;

int apri_file(char *nomefile, char *lettura) {
    fp = fopen(nomefile, lettura);
    if(fp == NULL) {
        perror("impossibile aprire il file\n");
        return 0;
    } else {
        return 1;
    }
}

void leggi_file() {
    char verificatore[BIG_SIZE];
    unsigned int contatore;
    int j = 0;

    if(GetNDocenti() != 0) {
        contatore = GetNDocenti(); 
    } else {
        contatore = 0;
    }

    while(!feof(fp)) {
        if(contatore < 0 || contatore > SIZE) {
            puts("impossibile proseguire");
            return;
        }

        verificatore[j] = fgetc(fp);

        if((verificatore[j] == '\n' || verificatore[j] == EOF) && strlen(verificatore) > 2) {
            verificatore[j] = '\0';

            if(ChioccioleSuFile(verificatore)) {
                tokenator(verificatore, &contatore);
                strcpy(verificatore, "");
                contatore++;
                j = -1;
            }
        } 
    }
}

void chiudi_file() {
    fclose(fp);
}