
#ifndef EX02_H_INCLUDED
#define EX02_H_INCLUDED
typedef struct Livre Livre;
struct Livre{
char titre[30];
int Qnt;
};
typedef struct cellule cellule;
struct cellule{
Livre info;
struct cellule*suiv;
};
typedef cellule*Liste;
cellule*novousLivre(Livre v){
cellule *b;
b=(cellule*)malloc(sizeof(cellule));
b->info=v;
b->suiv=NULL;
return b;
}

void ajouterAuTete(Liste*tete,Livre v){
cellule*b;
b=novousLivre(v);
b->suiv=*tete;
*tete=b;
}

void ajouterAuFin(Liste*tete,Livre v){
cellule*b;
cellule*tmp;
b=novousLivre(v);
if(*tete=NULL){
    *tete=b;
}else{
       while(tmp->suiv!=NULL){
           tmp=tmp->suiv;
       }
       tmp->suiv=b;
}
}

void ajouterLivres(Liste*tete,Livre v){

if(v.Qnt<=1){
    ajouterAuTete(tete,v);
}else{
    ajouterAuFin(tete,v);
}
}

void afficherListeLivre(Liste tete){
cellule*tmp;
tmp= tete;
if(tmp=NULL){
    printf("la liste est vide\n");
}else{
       while(tmp!=NULL){
        printf("[%s|%d]-->",tmp->info.titre,tmp->info.Qnt);
        tmp=tmp->suiv;
       }
}
printf("\n");
}

void calculerVideLivre(Liste tete,Livre v){
int s=0;
cellule*tmp;
if(tete=NULL){
    return 0;
}else{
       tmp=tete;
       while(tmp!=NULL){
            if(tmp->info.Qnt==0){
                s++;
            }
        tmp=tmp->suiv;
       }
}
return s;
}

void supprimerVideLivre(Liste*tete,char *nomP){
cellule*tmp;
cellule*d;
if(*tete!=NULL){
    tmp=*tete;
    if(strcmp((*tete)->data.titre,r)==0 && (*tete)->data.Qnt==0){
        (*tete)=(*tete)->next;
        free(tmp);
    }else{
         while(tmp->next!=NULL && strcmp(tmp->next->data.titre,r)!=0)
            tmp=tmp->next;

    if(tmp->next->data.Qnt==0)
    b=tmp->next;
    tmp->next=b->next;
    free(b);

    }
}

}




#endif // EX02_H_INCLUDED
