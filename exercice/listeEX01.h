#ifndef LISTEEX01_H_INCLUDED
#define LISTEEX01_H_INCLUDED
typedef struct point{
float x,y;
}point;
typedef struct vect{
point p,q;
}vect;
typedef struct liste{
    vect v;
    struct liste*next;

}liste;
point creerpoint(float x,float y){
point p;
p.x=x;p.y=y;
return p;
}
point saiser(){
float x,y;
printf("Donner x:\n");scanf("%f",&x);
printf("Donner y:\n");scanf("%f",&y);
return creerpoint(x,y);
}
vect creervect(point p,point q){
vect v;
v.p=p;v.q=q;
return v;
}
liste*inserListe(liste*tete,vect c){
liste*b;
b=(liste*)malloc(sizeof(liste));
b->v=c;
b->next=tete;
tete=b;
return tete;
}
void afficheliste(liste*tete){
liste*tmp;
tmp=tete;
while(tmp!=NULL){
    printf("%.2f---->",tmp->v);
    tmp=tmp->next;
}
}

#endif // LISTEEX01_H_INCLUDED
