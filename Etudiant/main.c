#include <stdio.h>
#include <stdlib.h>
#include "EX01.h"
#include <string.h>

int main(int argc,char const *argv[])
{
Liste tete=NULL;
int n;
char buffNom[255];
int note;

printf("Donner le nombre d'etudiant\n");
scanf("%d",&n);
int i=0;
for(i=0;i<n;i++){
        printf(" Etudiant %d : Nom et Note:",i);
        scanf("%s %d",buffNom,&note);
        ajoutEnTete(&tete,buffNom,note);
        afficheListe(tete);
}

    return 0;
}
