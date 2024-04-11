
#ifndef EX01_H_INCLUDED
#define EX01_H_INCLUDED
typedef struct box{
int data;
struct box*next;
}box;

box*insertete(box*tete,int val){
box*debut;
debut=(box*)malloc(sizeof(box));
debut->data=val;
debut->next=tete;
tete=debut;
return debut;
}
box*iserFin(box*tete,int val){
box*debut;
box*tmp;
debut=(box*)malloc(sizeof(box));
debut->data=val;
debut->next=NULL;
if(tete==NULL){
    tete=debut;
}else{
      tmp=tete;
      while(tmp->next!=NULL){
        tmp=tmp->next;
        tmp->next=debut;
      }
}
return tete;
}
void affiche(box*debut){
box*tmp;
tmp=debut;
while(tmp!=NULL){
    printf("%d-->",tmp->data);
    tmp=tmp->next;
}
}
#endif // EX01_H_INCLUDED
