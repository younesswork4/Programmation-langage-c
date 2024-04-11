#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "EX01.h"

int main()
{
    Liste L=NULL;
    Etudiant E;
    char *nomP[20];
    char lr[20];
    int chx;

    do{
        printf("Donner le nom:");
        fflush(stdin);
        gets(E.nom);
        printf("Donner la note:");
        scanf("%d",&E.note);
        ajouterEtudiant(&L,E);
        printf("un autre livre 0 si non: ");
        scanf("%d",&chx);

    }while(chx!=0);
     afficheEtudiant(L);
     printf("Donner lo nomP:\n");
     scanf("%s",E.nom);
     int resultat=rechercheNom(&L,E.nom);
     printf("\nresultat est :%d",resultat);
    /*afficherListe(L1);
    //printf("Nombre de Livres Vides:%d\n", calculerVide(L1));
    //printf("Donner le livre qui vous suppremer:\n"),
    //fflush(stdin);
    //gets(lr);
    //supprimerVide(&L1,lr);
    supprimerToutVide(&L1);
    afficherListe(L1);*/


    return 0;
}
