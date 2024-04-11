#include <stdio.h>
#include <stdlib.h>
#include "testfile.h"

int main()
{
Liste *L1;
int n,nbr;
int i;
printf("Donner le nombre d'element\n");
scanf("%d\n",&nbr);
for(i=0;i<nbr;i++){
    scanf("%d",&n);
    L1=ajouteAuDebut(L1,n);

}
afficheListe(L1);
/*FILE *fp;
char car;
fp=fopen("f1.txt","wt");
if(fp==NULL){
    printf("Impossible d'ouvrir le fichier!!\n");
    exit(1);
}
do{
    printf("Donner un caractere, pour terminer donner (.):");
    fflush(stdin);
    scanf("%c",&car);
    fputc(car,fp);
}while(car!='.');
fclose(fp);*/

}
