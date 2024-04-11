#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
int main(){
Liste*L1;
int i,n,nbr,v;
printf("Donner le nombre element\n");
scanf("%d",&nbr);
for(i=0;i<nbr;i++){
    printf("Donner l'element %d\n",i);
    scanf("%d",&n);
L1=insertionEnFin(L1,n);
//L1=isersionAuDebut(L1,n);

}
afficher(L1);
printf("Donner le position:\n");scanf("%d",&v);
printf("Donner la valeur insere:\n");scanf("%d",&n);
L1=ajouteAuMulie(L1,n,v);
afficher(L1);
return 0;
}
