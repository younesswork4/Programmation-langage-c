#include <stdio.h>
#include <stdlib.h>
#include "EX03.h"

int main()
{
myFile F;
int n;
F.tete=F.Queue=0;
printf("Donner la taille d'un file:");
scanf("%d",&F.taille);
while(!filePlienne(F)){
    printf("Donner la valeur:");
    scanf("%d",&n);
    enfiler(&F,n);
}
while(!fileVide(F)){
    n=defiler(&F);
    printf("%d->",n);
}

    /*
    mypile p;
    int n;
    printf("Donner la tialle d'un pile:");
    scanf("%d",&p.taille);
    p.sommet=0;
    while(!estPleinne(p)){
       printf("Donner une valeur:");
       scanf("%d",&n);
       Empiler(&p,n);
    }
    while(!estVide(p)){
        printf("%d\n",Depiler(&p));
    }

    /*myPile P1,P2;
    int n;
    printf("Donner la taille max de la pile 1:");
    scanf("%d",&P1.taille);
    P1.sommet=0;
    while(!estPleinne(P1)){
        printf("Donner une valeur:");
        scanf("%d",&n);
        empiler(&P1,n);
    }
    while(!estVide(P1)){
        printf("%d\n",depiler(&P1));

    }

*/



    return 0;
}
