#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

struct Date{
    int jour, mois, annee;
};
typedef struct Date Date;

extern void saisieDate(Date *);
extern void afficheDate(const Date);
void afficheMois(const int );
extern void comparaisonDate(struct Date, struct Date);

#endif // DATE_H_INCLUDED
