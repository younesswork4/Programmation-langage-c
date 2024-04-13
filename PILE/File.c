#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "EX03.h"


int main(){

myFile F;
int n;

printf("Donner la taille d'un file:");
scanf("%d",&F.taille);
F.tete=F.Queue=0;
while(!filePlienne(F)){
    printf("Donner la valeur:");
    scanf("%d",&n);
    emfiler(&F,n);
}
while(!fileVide(F)){
    int Ruselt=defiler(&F);
    printf("%d->",Ruselt);
}
return 0;
}
