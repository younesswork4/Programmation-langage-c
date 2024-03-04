#ifndef LISTEDEBUT_H_INCLUDED
#define LISTEDEBUT_H_INCLUDED



typedef struct Box{
int data;
struct Box*next;
}Box;

Box*ajouterAuDebut(Box*D, int elm){
Box*b;
b=(Box*)malloc(sizeof(Box));
b->data=elm;
b->next=D;
D=b;
return D;
}
Box*ajouterAuFin(Box*D,int elm){
Box *b,*temp;
b=(Box*)malloc(sizeof(Box));
b->data=elm;
b->next=NULL;
if(D==NULL){
    D=b;
}else{
    temp=D;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=b;
}
return D;
}
void afficherList(Box * D){
Box * temp;
temp=D;
if(temp==NULL){
    printf("la liste est vide\n");
}
while(temp!=NULL){
    printf("%d-->",temp->data);
    temp=temp->next;
}
}




#endif
