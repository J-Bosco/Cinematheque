#include <stdio.h>
#include <stdlib.h>
#include "Film.h"

void saisieFilm(struct Film *p){
    
    int i;
    
    printf("Titre du Film : ");
    scanf("%s", p->titre);
    
    printf("Annee de sortie : ");
    scanf("%d", &(p->an_sortie));
    
    printf("Realisateur du film : ");
    scanf("%s", p->realisateur.nom);
    
    for( i=0; i<4; i++ ){
    printf("Nom de l'acteur : ");
    scanf("%s", p->acteurs[i]->nom);
    }
    
    printf("Duree du film (heures) : ");
    scanf("%d", &(p->duree_heures));
    printf("Duree du film (minutes) : ");
    scanf("%d", &(p->duree_minutes));
    
    /*printf("Genre du film : ");
    scanf("%s", p->genre);
    */
}

void afficheFilm(const struct Film *p)
{
    int i;
    
    printf("Titre du Film : %s \n", p->titre);
    printf("Annee de sortie :%d \n", p->an_sortie);
    printf("Realisateur du film : %s \n", p->realisateur.nom);
    for( i=0; i<4; i++ ){
    printf("Acteur : %s \n", p->acteurs[i]->nom);
    }
    printf("Duree du film : %dh%d \n", p->duree_heures, p->duree_minutes);
    //printf("Genre du film : %s", p->genre);
    
}
