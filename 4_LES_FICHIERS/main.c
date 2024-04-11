#include <stdio.h>
#include <stdlib.h>
#include "Exemble01.h"
#define ENTREE "entree.txt"
#define SORTIE "sortie.txt"
#define NB 50
#define F_SORTIE "sortie.txt"
main(){
 FILE *f_in, *f_out;
 int *tab1, *tab2;
 int i;
 tab1 = (int*)malloc(NB * sizeof(int));
 tab2 = (int*)malloc(NB * sizeof(int));
 for (i = 0 ; i < NB; i++)
 tab1[i] = i;
 /* ecriture du tableau dans F_SORTIE */
 if ((f_out = fopen(F_SORTIE, "wb")) == NULL){
 printf( "\nImpossible d'ecrire dans le fichier\n");
 exit(1);
 }
 fwrite(tab1, NB * sizeof(int), 1, f_out);
 fclose(f_out);
 /* lecture dans F_SORTIE */
 if ((f_in = fopen(F_SORTIE, "rb")) == NULL){
 printf("\nImpossible de lire dans le fichier\n");
 exit(1);
 }
 fread(tab2, NB * sizeof(int), 1, f_in);
 fclose(f_in);
 for (i = 0 ; i < NB; i++)
 printf("%d ",tab2[i]);
 printf("\n");
 free(tab1);
 free(tab2);
}
