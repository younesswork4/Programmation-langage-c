#include <stdio.h>
#include <stdlib.h>
#include "EX01.h"
#define N 5
/*int tab[5]={1,2,6,0,7};

 /*   int i=8,j=3;
    int*p,*q;
    p=&i;
    q=&j;
    int sum,sostr;
    sum=*p+*q;
    sostr=*p-*q;
    printf("la sommation entre *p et *q est %d",sum);
    printf("\nla sostraction entre *p et *q est %d",sostr);*/


    /*int i=3;
    int *p1,*p2;
    p1=&i;
    p2=p1+1;
    printf("p1=%d \t p2=%d\n",p1,p2);*/
/*
    #define N 5

    int tab[N]={1,2,3,4,5};
    int *p;
    for(p=&tab[0];p<=&tab[N-1];p++){
        printf("\nla valeur de tab est %d",*p);
    }
*/

//ALLOCATION DYNAMIQUE
//l'allocation de la mémoire en cse fait par la fonction malloc de la librairie standard stdlib.h dont le prototype est:
//void *malloc(size_t size);
/*int i=3;
int *p;
printf("valeur de p avant initialisation = %d\n",p);
p =(int*)malloc (sizeof(int));
printf("valeur de p apres initialisation = %d\n",p);
*p=i;
printf("valeur de *p=%d\n",*p);*/
/*int i;
int *p;
p=&tab[0];
for(i=0;i<N;i++){
    printf("%d\t",*(p+i));
}*/
//tableau de deux dimensions
/*
int k,n;
int **A;
A=(int**)malloc(k*sizeof(int*));

for(i=0;i<k;i++){
    A[i]=(int*)malloc(n*sizeof(int));
}
for(i=0;i<k;i++){
    free(A[i]);
}
free(A);
*/
//pointeuts et structures

/*struct Eleve{
   char nom[20];
   float note;
};
typedef struct Eleve Eleve;


typedef struct Personne {
char CIN[8];
char *nom;
int age;
}Personne;
Personne P1;
strcpy((P1.CIN),"A123");
 P1.age = 21;
//Allocation dynamique de P1.nom:
P1.nom=(char *)malloc(10*sizeof(char));
P1.nom ="Hamid";
printf ("%s %s %d\n", P1.CIN, P1.nom, P1.age);

typedef struct date{
int jour, mois, annee;
}date;
typedef struct Personne {
char CIN[8];
char nom[10];
int age;
date dn;
}Personne;
Personne P1;
strcpy (P1.CIN, "B123");
strcpy(P1.nom ,"Hamid");
P1.age = 21;
P1.dn.jour=15; P1.dn.mois=11; P1.dn.annee=1998;

typedef struct Personne {
char CIN[8];
char nom[10];
int age;
}Personne;
Personne *P1 , P2={"B123" , "Farid", 26};
//Allocation dynamique de *P1:
P1=(Personne*)malloc(sizeof(Personne));
strcpy (P1->nom, "Hamid");
strcpy (P1->CIN, "A123");
P1->age = 21;
printf ("%s %s %d\n", P1->CIN, P1->nom, P1->age);



typedef struct Personne {
char CIN[8];
char nom[10];
int age;
struct Personne *pere;
}Personne;
Personne P2, P1={"A123" ,"Karim",56,NULL};
strcpy (P2.CIN, "B123");
strcpy(P2.nom ,"Hamid");
P2.age = 21;
P2.pere=&P1;//initialisation par &P1

typedef struct Personne {
char CIN[8];
char nom[10];
int age;
 struct Personne *pere;
 struct Personne *mere;
}Personne;
Personne P3, P1={"A123","Karim",56,NULL, NULL};
Personne P2={"C123","Fadoua",54,NULL, NULL};
strcpy (P3.CIN, "B123");
strcpy(P3.nom ,"Hamid");
P3.age = 21;
P3.pere=&P1;
P3.mere=&P2;
int main(){
Eleve *pE;
pE=(Eleve*)malloc(sizeof(Eleve));
strcpy(pE->nom,"alami");
pE->note=13;
printf("L'eleve %s a %.2f/20\n",(*pE).nom,(*pE).note);

return 0;
}
*/
/*
int main(){
point2D p2(12,11);
vect2D  *v2;
int x,y;
point2DCreerPoint(11,3);

afficherPoint2D(p2);
calculent(&v2);
return 0;
}
*/
// Fonction main pour tester les différentes fonctions
int main() {
    // Test de création de point
    point2D p1 = creerPoint(1.0, 2.0);
    afficherPoint(p1);

    // Test de saisie de point
    point2D p2 = saisie();
    afficherPoint(p2);

    // Test de création de vecteur
    vect2D v1 = {3.0, 4.0};
    vect2D v2 = {5.0, 6.0};

    // Test de calcul de norme
    float norme_v1 = norme(v1);
    printf("Norme du vecteur v1 : %.2f\n", norme_v1);

    // Test de calcul du produit scalaire
    float produit_scalaire = produitScalaire(v1, v2);
    printf("Produit scalaire entre v1 et v2 : %.2f\n", produit_scalaire);

    return 0;
}
