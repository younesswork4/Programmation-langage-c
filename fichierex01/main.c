#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"
int main()
{
    Etudiant *E1;
    int nbr,i;
    int code;
    char nom[20];
    char prenom[20];
    float noteE;
    float noteO;
printf("Donner le nombre Etudiant:\n");
scanf("%d",&nbr);
for(i=0;i<nbr;i++){
printf("Donner le code:\n");
scanf("%d\n",&code);
printf("Donner le nom:\n");
scanf("%s\n",nom);
printf("Donner le Prenom:\n");
scanf("%s\n",prenom);
printf("Donner la NoteE:\n");
scanf("%d\n",&noteE);
printf("Donner la NoteO:\n");
scanf("%d\n",&noteO);
E1=NouvelEtudiant(E1,code,nom[20],prenom[20],noteE,noteO);
}
afficherBulletin(E1);
    return 0;
}
