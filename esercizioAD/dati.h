#ifndef DATI_H_INCLUDED
#define DATI_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
#define BIG_SIZE 150

int SetFlagAcquisizione();
int GetNDocenti();
int SetDocMatricolaByI(int i, int tmp);
int SetDocCognomeByI(int i, char *tmp);
int SetDocEtàByI(int i, int tmp);
int SetDocUniversitàByI(int i, char *tmp);
void SetFlagPositivo();
#endif // DATI_H_INCLUDED