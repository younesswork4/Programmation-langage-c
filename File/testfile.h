#include<stdio.h>
#include<stdlib.h>

#ifndef TESTFILE_H_INCLUDED
#define TESTFILE_H_INCLUDED
typedef struct Liste{
int info;
struct Liste*suivant;

}Liste;
//Ajouter un Element Au debut de la liste
Liste*ajouteAuDebut(Liste*tete,int elm){
Liste*Debut;
Debut=(Liste*)malloc(sizeof(Liste));
Debut->info=elm;
Debut->suivant=tete;
tete=Debut;
return Debut;
}
//Ajouter un Element Au Fin de la liste

Liste*ajouteAuFin(Liste*tete,int elm){
Liste*Debut;
Liste*tmp;
Debut=(Liste*)malloc(sizeof(Liste));
Debut->info=elm;
Debut->suivant=NULL;
if(tete=NULL){
    tete=Debut;
}else{
      tete=tmp;
      while(tmp!=NULL){
        tmp=tmp->suivant;
      }
      tmp->suivant=Debut;
}
return Debut;
}
void afficheListe(Liste*tete){

Liste*tmp;
tete=tmp;

while(tmp->suivant!=NULL){
    printf("%d--->",tmp->info);
    tmp=tmp->suivant;
}



}



#endif // TESTFILE_H_INCLUDED

