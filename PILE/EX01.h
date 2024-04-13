/*
#ifndef EX01_H_INCLUDED
#define EX01__INCLUDED
typedef struct {
int sommet;
int taille;
int pile[50];
}myPile;

int estVide(myPile P){
/*if(P.sommet==0)
    return 1;
else
    return 0;

return P.sommet==0;
}
int estPleinne(myPile p){
return p.sommet==p.taille;
}
void empiler(myPile *P,int V){
P->pile[P->sommet++]==V;
//P->sommet++;
}
int  depiler(myPile *p){
 //p->sommet=p->sommet-1;
 return p->pile[--p->sommet];

}

#endif // EX01_H_INCLUDED
