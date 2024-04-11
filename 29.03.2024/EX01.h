#ifndef EX01_H_INCLUDED
#define EX01_H_INCLUDED
/*
typedef struct Box{
      int data;
    struct Box*next;
}Box;
//ajouter un element Au tete de liste
Box* ajouterAuTete(Box*tete,int val){
Box*b;
b=(Box*)malloc(sizeof(Box));
b->data=val;
b->next=tete;
tete=b;
return b;
}
//ajouterAuFinD'unListe
Box * ajouterALaFin(Box*debut,int elm)
{
    Box *b,*tmp;
    b=(Box*)malloc(sizeof(Box));
    b->data=elm;
    b->next=NULL;
    if(debut==NULL){
        debut=b;
    }else{
        tmp=debut;
        while(tmp->next!=NULL)
            tmp=tmp->next;
        tmp->next=b;
        }
        return debut;
}
Box * ajouterAuMelluie(Box*tete,int val,int position){
Box*b;
Box*tmp;
b=(Box*)malloc(sizeof(Box));
b->data=val;
b->next=NULL;
tmp=tete;
if(tmp!=NULL){
      while((tmp->next!=NULL)&&(tmp->data!=position))
        tmp=tmp->next;
      b->next=tmp->next;
      tmp->next=b;
}
return tete;

}
//la suppretion en debut d'un liste
Box*supprimerElementTete(Box*tete){
Box*tmp;
if(tete!=NULL){
    tmp=tete;
    tete=tete->next;
    free(tmp);
}
return tete;
}
//la suppretion en fin d'un liste
Box*supprimerElementFin(Box*tete){
Box*tmp;
Box*b;
if(tete!=NULL){
    tmp=tete;
    while(tmp->next->next!=NULL)
        tmp=tmp->next;
    free(tmp->next);
    tmp->next=NULL;
}
return tete;
}
//la suppretion en mellier d'un liste
Box*supprimerElementMullier(Box*tete,int val){
Box*tmp;
Box*d;
if(tete!=NULL){
    if(tete->data==val){
        d=tete;
        tete=tete->next;
        free(d);
    }else{
         tmp=tete;
         while(tmp->next!=NULL && tmp->next->data!=val)
            tmp=tmp->next;

         if(tmp->next!=NULL)
            {
            d=tmp->next;
            tmp->next=tmp->next->next;
            free(d);
         }else{
             printf("l'element n'existe pas dans la liste");
         }
    }
}
return tete;
}
//afficher la Liste
void afficher(Box*tete){
Box*tmp;
tmp=tete;
if(tete==NULL){
    printf("la liste est vide \n");
}else{
while(tmp!=NULL){
    printf("%d--->",tmp->data);
    tmp=tmp->next;
}
}

}

*/
#endif //EX01_H_INCLUDED
