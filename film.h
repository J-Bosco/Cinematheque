#ifndef FILM_H_INCLUDED
#define FILM_H_INCLUDED

#include "Personne.h"

struct Film{
    char titre[64];
    int an_sortie;
    struct Personne realisateur;
    struct Personne *acteurs[4];
    int duree_heures;
    int duree_minutes;
    struct Genre *genre[2];
};

extern void saisieFilm(struct Film *);
extern void afficheFilm(const struct Film *);
extern void suppimerFilm(char *titre);
extern void modifierFilm(char *titre);

extern void filmographie(const char *nom);

#endif // FILM_H_INCLUDED
