#include <stdio.h>
#include <stdlib.h>
#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED

typedef struct Liste{
              int info;
              struct Liste*suivant;

    }Liste;

Liste*isersionAuDebut(Liste*tete,int elm){
Liste*Debut;
Debut=(Liste*)malloc(sizeof(Liste));
Debut->info=elm;
Debut->suivant=tete;
tete=Debut;
return Debut;
}

Liste*insertionEnFin(Liste*tete,int elm){
Liste *Debut;
Liste *Cnt;
Debut=(Liste*)malloc(sizeof(Liste));
Debut->info=elm;
Debut->suivant=NULL;
if(tete=NULL){
    tete=Debut;
}else{
    Cnt=tete;
    while(Cnt->suivant!=NULL){
        Cnt=Cnt->suivant;
        Cnt->suivant=Debut;
    }

}
return tete;
}
Liste*ajouteAuMulie(Liste*tete,int elm,int val){
Liste*tmp;
Liste*b;
if(tete!=NULL){
    tmp=tete;
    b=(Liste*)malloc(sizeof(Liste));
    b->info=elm;
    while(tmp->suivant!=NULL&&tmp->info!=val){
        tmp=tmp->suivant;
    }
    if(tmp!=NULL){
        b->suivant=tmp->suivant;
        tmp->suivant=b;
    }else{
       printf("!!!!!!!!!!!!!!!!!!");

    }


}
return tete;
}
void afficher(Liste*tete){
Liste*tmp;
tmp=tete;
if(tete==NULL){
    printf("la liste est vide \n");
}else{
while(tmp!=NULL){
    printf("%d--->",tmp->info);
    tmp=tmp->suivant;
}
}

}
#endif // LISTE_H_INCLUDED
