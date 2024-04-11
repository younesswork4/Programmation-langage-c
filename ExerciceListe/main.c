#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "EX01.h"

int main()
{
    Liste L1=NULL;
    Etudiant E1;
    char lr[20];
    int chx;

    do{
        printf("Donner le Etudiant:");
        fflush(stdin);
        gets(E1.nom1);
        printf("Donner la note:");
        scanf("%d",&E1.note1);
        ajouterLivre(&L1,E1);
        printf("un autre livre 0 si non: ");
        scanf("%d",&chx);

    }while(chx!=0);
    afficherListe(L1);
    /*
    //printf("Nombre de Livres Vides:%d\n", calculerVide(L1));
    //printf("Donner le livre qui vous suppremer:\n"),
    //fflush(stdin);
    //gets(lr);
    //supprimerVide(&L1,lr);
    supprimerToutVide(&L1);
    afficherListe(L1);

Liste p=NULL;
int i,nbr,n;
int v;
printf("Donner le nombre d'element \n");scanf("%d",&nbr);
for(i=0;i<nbr;i++){
    printf("Element %d:",i);scanf("%d",&n);
    ajouterAuTete(&p,n);
}
afficher(p);
printf("Donner la valeur qui vous supprimer\n");
scanf("%d",&v);
supprimerElement(&p,v);
afficher(p);*/

    return 0;
}
