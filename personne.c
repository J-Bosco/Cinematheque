#include <stdio.h>
#include <stdlib.h>
#include "Personne.h"

void saisiePersonne(struct Personne *p){
    printf("Nom = ");
    scanf("%s", &(p->nom));
    printf("Prenom = ");
    scanf(" %s", &(p->prenom));

    saisieDate(&(p->dateNaissance));

    printf("Nationnalite = ");
    scanf(" %s", &(p->nationalite));

    printf("Satut? 1- Acteur 2- Realisateur  ");
    scanf(" %d", &(p->statut));
}

void affichePersonne(const struct Personne *p){
    printf("\n\n");
    if(p->statut != 1)
        printf("Fiche REALISATEUR \n");
    else printf("Fiche ACTEUR \n");

    printf("Nom: %s %s \n", p->prenom, p->nom);
    afficheDate(p->dateNaissance);
    printf("Nationnalite: %s \n", p->nationalite);
}

Personne recherchePersonne(const char * nom, const Personne *tab){
    struct Personne * p;
    for(p = tab; p < tab + 3; p++){
        if(strcmp(p->nom, nom) ==0)
            break;
    }
    return *p;
}

void afficheTousPersonnes(const Personne * tab){
     struct Personne * p;
    for(p = tab; p < tab + 3; p++){
        affichePersonne(p);
    }
}
