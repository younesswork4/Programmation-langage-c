#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*enum propulsion {pedales, moteur, reacteur};
struct vehicule {
 char nom[20];
 int longueur, poids;
 enum propulsion mode;
} velo = {"Euroteam", 2, 5, pedales};
main () {
 struct vehicule voiture ={"Toyota", 5, 1500, moteur };

 struct vehicule avion;
 strcpy(avion.nom, "Jumbo");
 avion.longueur = 60;
 avion.poids = 450000;
 avion.mode = reacteur;

 printf ("Nom: %s\n", velo.nom);
 printf ("Longueur: %d, poids: %d\n", velo.longueur, velo.poids);
 printf("Mode de propulsion: %d", velo.mode);printf ("\n");
 printf ("Nom: %s\n", avion.nom);
 printf ("Longueur: %d, poids: %d\n",avion.longueur, avion.poids);
 printf("Mode de propulsion:%d\n", avion.mode);
return 0;
}*/
//exercice 1 dans le chapitre 1,1
/*int main(){
struct Produit{
    int Num;
    char Nom;
    float Prix;
    int Quantite;
};

}*/
//exercice 2 dans le chapitre 1,1
#define N 3
typedef struct Personne{
char Nom[20];
char Prenom[20];
int Date[3];
char Code[20];

}Personne;
//typedef struct Personne Personne;
int main(){
Personne P1;
strcpy(P1.Nom,"YOUNESS");
strcpy(P1.Prenom,"MCHAAR");
strcpy(P1.Code,"XA132436");
P1.Date[0]=11;
P1.Date[1]=9;
P1.Date[2]=1999;

printf("Nom:%s\t",P1.Nom);
printf("Prenom:%s\t",P1.Prenom);
printf("Date de naissance:%d/%d/%d\t",P1.Date[0],P1.Date[1],P1.Date[2]);
printf("Code:%s\t",P1.Code);



}

