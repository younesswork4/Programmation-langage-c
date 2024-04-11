
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "EX03.h"


int main(){
int chx;
do{
printf("********Menu**********\n");
printf("1-Nouvel etudiant\n");
printf("2-Afficher Bulletin\n");
printf("3-Modifier le nom d'un etudiant\n");
printf("4-Supprimer un etudiant\n");
printf("5-Afficher la Moyenne de la classe\n");
printf("6-Liste des Admins\n");
printf("0-Fin Traitement\n");
printf("Votre Choix:");scanf("%d",&chx);
switch(chx){
case 1:{nouvelEtudiant();break;}
case 2:{          ;break;}
case 3:{          ;break;}
case 4:{          ;break;}
case 5:{          ;break;}
case 6:{          ;break;}
case 0:{printf("Fin de traitement\n");break;}
default:printf("choix errone !!! le choix entre [0,6]\n");
}

}while(chx!=0);


return 0;
}
