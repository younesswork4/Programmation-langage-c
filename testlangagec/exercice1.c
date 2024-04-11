
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//1)
typedef struct point2D{
 int x;
 int y;
}point2D;
void point2DCreerPoint(float x, float y){
point2D *p1;

x=(*p1).x;
y=(*p1).y;

}
void afficherPoint2D( point2D *p1){
    float x=(*p1).x;
    float y=(*p1).y;
printf("\n les coordonnees d'un point est x=%.2f\ty=%.2f",x,y);
}
void point2DSaisie(){
    int x,y;
printf("\nsaisir les points x et y\n");
scanf("%f%f",x,y);
}
typedef struct vect2D{
   int x;
   int y;

}vect2D;
void calculent(vect2D *v){
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

