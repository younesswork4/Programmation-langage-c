
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifndef EX01_H_INCLUDED
#define EX01_H_INCLUDED
/*

//1)
typedef struct point2D{
 int x;
 int y;
}point2D;
void point2DCreerPoint(float x, float y){
point2D p1;
//p1=(point2D*)malloc(sizeof(point2D));
x=(p1).x;
y=(p1).y;

}
void afficherPoint2D( point2D p1){
    float x=(p1).x;
    float y=(p1).y;
printf("\n les coordonnees d'un point est x=%.2f\ty=%.2f",x,y);
}
float point2DSaisieX(){
    int x;
printf("\nsaisir le pointx\n");
scanf("%f\n",x);
return x;
}
float point2DSaisieY(){
    int y;
printf("\nsaisir le point y\n");
scanf("%f\n",y);
return y;
}

typedef struct vect2D{
   int x;
   int y;

}vect2D;
void calculent(vect2D *v){
v=(vect2D*)malloc(sizeof(vect2D));
int x;
x=(*v).x;
int y;
y=(*v).y;
int norme;
norme=sqrt(x*x+y*y);
printf("\n la norme est %.2f\n",norme);
int produit;
produit=x*x+y*y;
printf("\nle produit scalaire est %.2f\n",produit);

}

*/


// Définition du type point2D
typedef struct {
    float x;
    float y;
} point2D;

// Fonction pour créer un point du plan
point2D creerPoint(float x, float y) {
    point2D nouveauPoint;
    nouveauPoint.x = x;
    nouveauPoint.y = y;
    return nouveauPoint;
}

// Fonction pour afficher les coordonnées d'un point
void afficherPoint(point2D p) {
    printf("Coordonnées du point : (%.2f, %.2f)\n", p.x, p.y);
}

// Fonction pour saisir un point à l'aide du clavier
point2D saisie() {
    point2D nouveauPoint;
    printf("Entrez la coordonnée x : ");
    scanf("%f", &nouveauPoint.x);
    printf("Entrez la coordonnée y : ");
    scanf("%f", &nouveauPoint.y);
    return nouveauPoint;
}

// Définition du type vect2D
typedef struct {
    float x;
    float y;
} vect2D;

// Fonction pour calculer la norme d'un vecteur
float norme(vect2D v) {
    return sqrt(v.x * v.x + v.y * v.y);
}

// Fonction pour calculer le produit scalaire entre deux vecteurs
float produitScalaire(vect2D v1, vect2D v2) {
    return v1.x * v2.x + v1.y * v2.y;
}

#endif
