#ifndef EX03_H_INCLUDED
#define EX03_H_INCLUDED

typedef struct cellule{
int data;
struct cellule*next;
}cellule;
typedef cellule*Liste;

Liste*newListe(int elm){
cellule*D;
D=(cellule*)malloc(sizeof(cellule));
D->data=elm;
D->next=NULL;
return D;
}
void ajouterAuTete(Liste*tete,int elm){
cellule *D;
D=newListe(elm);
D->next=*tete;
*tete=D;
}
void afficher(Liste tete){
cellule*tmp;
if(tete==NULL){
    printf("la liste est vide\n");
}else{
    tmp=tete;
    while(tmp!=NULL){
        printf("%d-->",tmp->data);
        tmp=tmp->next;}

}
}
void supprimerElement(Liste*tete,int *v){
cellule*tmp;
cellule*b;
if(*tete!=NULL){
    tmp=(*tete);
    if(((*tete)->data)=v){
        (*tete)=(*tete)->next;
        free(tmp);
    }else{
          while(tmp->next!=NULL)
            tmp=tmp->next;
      if(tmp->next!=NULL)
        if((tmp->next->data)=v)
            b=tmp->next;
            tmp->next=b->next;
            free(b);
    }
}
}

#endif // EX03_H_INCLUDED
