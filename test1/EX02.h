
#ifndef EX02_H_INCLUDED
#define EX02_H_INCLUDED
typedef struct Box{
int data;
struct Box*next;
}Box;

Box*ajouterALaFin1(Box*debut,int elm){
Box *b,*temp;
b=(Box*)malloc(sizeof(Box));
b->data=elm;
b->next=NULL;
if(debut==NULL){
    debut=b;
}else{
      temp=debut;
      while(temp->next!=NULL)
        temp=temp->next;
        temp->next=b;


}
return debut;
}

void afficheFin(Box*debut){
Box*temp;
temp=debut;
if(debut==NULL){
        printf("la liste est vide");

}else{
while(temp!=NULL){
    printf("%d-->",temp->data);
    temp=temp->next;
}
}
}

#endif // EX02_H_INCLUDED
