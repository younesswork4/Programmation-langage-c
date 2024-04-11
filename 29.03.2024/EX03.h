
#ifndef EX03_H_INCLUDEDE
#define EX03_H_INCLUDEDE

typedef struct Livre{
char titre[200];
int Qnt;
}Livre;
typedef struct cellule cellule;
struct cellule{
Livre data;
struct cellule*next;
};
typedef cellule*Liste;

cellule*newLivre(Livre v){
cellule*b;
b=(cellule*)malloc(sizeof(cellule));
b->data=v;
b->next=NULL;
return b;
}

void ajouterAuTete(Liste*tete,Livre v){
cellule*b;
b=newLivre(v);
b->next=*tete;
*tete=b;
}

void ajouterAuFin(Liste*tete,Livre v){
cellule*b;
cellule*tmp;
b=newLivre(v);
if(*tete==NULL){
    *tete=b;
}else{
      tmp=*tete;
      while(tmp->next!=NULL)
        tmp=tmp->next;
      tmp->next=b;
}
}

void ajouterLivre(Liste tete,Livre v){
if(v.Qnt<=1)
    ajouterAuTete(tete,v);

else
    ajouterAuFin(tete,v);

}

int calculeVide(Liste tete){
cellule*tmp;
int s=0;
if(tete!=NULL){
    tmp=tete;
    while(tmp!=NULL && tmp->data.Qnt==0){
        s++;
        tmp=tmp->next;
    }
}
return s;
}

void suprimeVide(Liste*tete, char *nomP){
 cellule*tmp;
 cellule*b;
 if(*tete!=NULL){
    tmp=*tete;

 if(strcmp((*tete)->data.titre,nomP)==0 && (*tete)->data.Qnt==0){
    *tete=(*tete)->next;
    free(tmp);
 }else{
     while(tmp->next!=NULL && strcmp(tmp->next->data.titre,nomP)!=0)
       tmp=tmp->next;

   if(tmp->next!=NULL)
      if(tmp->next->data.Qnt==0){
          b=tmp->next;
          tmp->next=tmp->next->next;//ou tmp->next=p->next;
          free(b);
      }



}
}
}

void supprimeToutVide(Liste*tete){
cellule*tmp;
cellule*b;
if(*tete!=NULL){
    tmp=*tete;
    if((*tete)->data.Qnt==0){
        (*tete)=(*tete)->next;
        free(tmp);
        supprimeToutVide(tete);
    }else{
       while((tmp->next!=NULL) && tmp->next->data.Qnt!=0 ){
        tmp=tmp->next;
        if(tmp->next!=NULL){
            b=tmp->next;
            tmp->next=b->next;
            free(b);
            supprimeToutVide(&tmp);
        }
       }
    }
}
}


void afficherListe(Liste tete){
cellule *tmp;
if(tete==NULL)
    printf("\nla liste est vide");
else{
    tmp=tete;
    while(tmp!=NULL)
    {
        printf("[%s,%d]->",tmp->data.titre,tmp->data.Qnt);
        tmp=tmp->next;
    }
}
}



























#endif // RX03_H_INCLUDEDE
