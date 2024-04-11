#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "EX04.h"
int main()
{
Liste *L=NULL;
int n,chx;
FILE*fb;
do{
    printf("Donner un Element \n");
    scanf("%d",&n);

    printf("il ya un outre element si existe tape 1 sinon 0:");
    scanf("%d",&chx);
    L=ajouteAuFin(L,n);
}while(chx!=0);
afficher(L);
stocker(L,fb);
int nb=nombreElementListe(L);
printf("\n le nombre d'un liste est:",nb);



    /*
Liste L1=NULL;
Livre v;
char chx;
char nomp[200];

do{
    printf("siaser le titre de livre :");
    fflush(stdin);
    gets(v.titre);
    printf("siaser la Quantite des Livres:");scanf("%d",&v.Qnt);
    ajouterLivre(&L1,v);
    printf("\nil ya un autre livre [0|1]?\t");scanf("%d",&chx);

}while(chx!=0);

afficherListe(L1);
int sommeVide=calculeVide(L1);
printf("\nla somme de quantite vide est %d",sommeVide);
//printf("\n saiser le nom qui vous supprime:");
//fflush(stdin);
//gets(nomp);
//suprimeVide(&L1,nomp);
supprimeToutVide(&L1);
afficherListe(L1);
free(L1);


    /*Box *b=NULL;
    int i,n,nbr,val,p,s,w;
    printf("Donner le nombre de nbr\n");
    scanf("%d",&nbr);
    for(i=0;i<nbr;i++){
        printf("Donner N°%d:",i);
        scanf("%d",&n);
        printf("\n");
       b=ajouterALaFin(b,n);

    }
    afficher(b);
    printf("\n");
    printf("la valeur a chercher \n");
    scanf("%d",&p);
    printf("la valeur a insere\n");
    scanf("%d",&val);
    b=ajouterAuMelluie(b,val,p);
    afficher(b);
    printf("|------------------------|\n");
    //b=supprimerElementTete(b);
    //b=supprimerElementFin(b);
    afficher(b);
    printf("\n");
    printf("Donner la valeur qui vous supprimer\n");
    scanf("%d",&w);
    b=supprimerElementMullier(b,w);
    afficher(b);*/

    return 0;
}
