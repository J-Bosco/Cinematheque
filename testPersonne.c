#include <stdio.h>
#include <stdlib.h>
#include "Personne.h"

int main()
{
    struct Personne p;
    struct Personne tab[]={
        {"Dup", "Rem",01, 02, 1933 , "Nan", 1},
        {"Gep", "Vop",02, 12, 7895 , "Fra", 2},
        {"Fon", "Ale",14, 13, 8888 , "Sen", 1},
    };
    saisiePersonne(&p);
    affichePersonne(&p);

    p = recherchePersonne("Gep", tab);
    affichePersonne(&p);

    afficheTousPersonnes(tab);
    return 0;
}

