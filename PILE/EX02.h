#ifndef EX02_H_INCLUDED
#define EX02_H_INCLUDED

typedef struct mypile{
int sommet;
int taille;
int pile[50];
}mypile;

int estVide(mypile p){
return p.sommet==0;
}

int estPleinne(mypile P){
return P.sommet=P.taille;
}

void Empiler(mypile*p,int val){
p->pile[p->sommet]=val;
p->sommet++;
}
int Depiler(mypile*p){
p->sommet=p->sommet-1;
return p->pile[p->sommet];
}
#endif // EX02_H_INCLUDED
