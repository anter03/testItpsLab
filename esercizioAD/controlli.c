#include "controlli.h"

void controllo_scelta(int *scelta) {
    char a[1024] = "";
    scanf("%s", a);

    while(strlen(a) > 1 || isalpha(a[0])) {
        puts("inserire un valore tra 0 e 4 (inclusi)");
        scanf("%s", a);
    }

    sscanf(a, "%d", scelta);
}
