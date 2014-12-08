#include <stdio.h>
#include <stdlib.h>
#include "Date.h"

void saisieDate(Date * dateNaissance){
    printf("Jour = ");
    scanf("%d", &(dateNaissance->jour));
    printf("Mois = ");
    scanf("%d", &(dateNaissance->mois));
    printf("Annee = ");
    scanf("%d", &(dateNaissance->annee));
}

void afficheDate(const Date dateNaissance){
    printf("Date de naissance: %d ", dateNaissance.jour);
    afficheMois(dateNaissance.mois);
    printf(" %d \n", dateNaissance.annee);

}

void comparaisonDate(Date date1, Date date2){
    if(date1.annee == date2.annee){
        if(date1.mois > date2.mois){
            afficheDate(date1);
            printf(" est plus grand.\n");
            return;
        }else{
            afficheDate(date2);
            printf(" est plus grand.\n");
            return;
        }
    }

    if(date1.annee == date2.annee && date1.mois == date2.mois){
        if(date1.jour > date2.jour){
            afficheDate(date1);
            printf(" est plus grand.\n");
            return;
        }else{
            afficheDate(date2);
            printf(" est plus grand.\n");
            return;
        }
    }

    if(date1.annee > date2.annee){
        afficheDate(date1);
        printf(" est plus grand.\n");
        return;
    }else{
        afficheDate(date2);
        printf(" est plus grand.\n");
        return;
    }

}

void afficheMois(const int mois){
    switch(mois){
        case 1 : printf("Janvier");break;
        case 2 : printf("Fevrier");break;
        case 3 : printf("Mars");break;
        case 4 : printf("Avril");break;
        case 5 : printf("Mai");break;
        case 6 : printf("Juin");break;
        case 7 : printf("Juilliet");break;
        case 8 : printf("Aout");break;
        case 9 : printf("Septembre");break;
        case 10 : printf("Octobre");break;
        case 11 : printf("Nonvembre");break;
        case 12 : printf("Decembre");break;
        default : printf("Mois invalide!!"); break;
    }
}
