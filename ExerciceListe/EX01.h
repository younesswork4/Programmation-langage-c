
#ifndef EX01_H_INCLUDED
#define EX01_H_INCLUDED
typedef struct Etudiant{
char nom1[20];
int note1;
}Etudiant;
typedef struct Cellule Cellule;
typedef Cellule*Liste;
struct Cellule{
Etudiant data;
struct Cellule*next;
};
Cellule*newBook(Etudiant E1){
Cellule*b;
b=(Cellule*)malloc(sizeof(Cellule));
b->data=E1;
b->next=NULL;
return b;
}
void ajouterLivreTete(Liste*tete,Etudiant E1){
Cellule*b;
b=newBook(E1);
b->next=*tete;
*tete=b;
}

void ajouterAuFin(Liste*tete,Etudiant E1){
Cellule*b;
Cellule*tmp;
b=newBook(E1);
if(*tete==NULL){
    *tete=b;
}else{
     tmp=*tete;
     while(tmp->next!=NULL)
        tmp=tmp->next;
    tmp->next=b;
}
}

void ajouterLivre(Liste*tete,Etudiant E1){


if(E1.note1<=10)
    ajouterLivreTete(tete,E1);
else
    ajouterAuFin(tete,E1);

}

void afficherListe(Liste tete){
Cellule *tmp;
tmp=tete;
if(tmp==NULL){
    printf("la liste est vide\n");
}else{
     while(tmp!=NULL){
        printf("[%s | %d]->",tmp->data.nom1,tmp->data.note1);
        tmp=tmp->next;
     }
}
printf("\n");
}
/*
int calculerVide(Liste tete){
int s=0;
Cellule *tmp;
tmp=tete;
while(tmp!=NULL){
    if(tmp->data.Qnt==0){
        s++;
    }
    tmp=tmp->next;
}
return s;
}

void supprimerVide(Liste*tete,char *r){
Cellule*tmp,*p;
if(*tete!=NULL){
    tmp=*tete;
    if(strcmp((*tete)->data.titre,r)==0 && (*tete)->data.Qnt==0){
        *tete=(*tete)->next;
        free(tmp);
    }else{
          while(tmp->next!=NULL && strcmp(tmp->next->data.titre,r)!=0)
            tmp=tmp->next;
       if(tmp->next!=NULL)
          if(tmp->next->data.Qnt==0){
             p=tmp->next;
             tmp->next=p->next;
             free(p);
        }

    }
}
}
void supprimerToutVide(Liste*tete){
Cellule*tmp,*p;
if(*tete!=NULL){
    tmp=*tete;
    if((*tete)->data.Qnt==0){
        *tete=(*tete)->next;
        free(tmp);
        supprimerToutVide(tete);
    }else{
          while(tmp->next!=NULL &&tmp->next->data.Qnt!=0)
            tmp=tmp->next;
       if(tmp->next!=NULL){
          p=tmp->next;
          tmp->next=p->next;
          free(p);
          supprimerToutVide(&tmp);
       }
    }
}
}

*/

#endif // EX01_H_INCLUDED
