#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include "Date.h"

struct Personne{
    char nom[64];
    char prenom[64];
    //struct Film film_asso[30];
    struct Date dateNaissance;
    char nationalite[64];
    int statut;
};
typedef struct Personne Personne;

extern void saisiePersonne(struct Personne *);
extern void affichePersonne(const struct Personne *);
extern Personne recherchePersonne(const char *, const Personne *);
extern void afficheTousPersonnes(const Personne *);


extern void modifier(struct Personne *);
extern void suppimer(struct Personne *);

//extern void filmographie(const struct Personne *);


#endif // PERSONNE_H_INCLUDED
