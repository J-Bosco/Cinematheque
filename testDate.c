#include <stdio.h>
#include <stdlib.h>
#include "Date.h"

int main()
{
    Date dt1;
    Date dt2;
    Date dt3;

    dt1.jour = 1;
    dt1.mois = 3;
    dt1.annee = 2013;

    dt2.jour = 12;
    dt2.mois = 5;
    dt2.annee = 1899;

    afficheDate(dt1);
    afficheDate(dt2);

    saisieDate(&dt3);
    afficheDate(dt3);

    comparaisonDate(dt1, dt2);
    comparaisonDate(dt1, dt3);
    comparaisonDate(dt2, dt3);

    return 0;
}
