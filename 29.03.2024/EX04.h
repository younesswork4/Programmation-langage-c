#ifndef EX04_H_INCLUDED
#define EX04_H_INCLUDED
typedef struct Liste{
int info;
struct Liste*next;
}Liste;

Liste*ajouteAuFin(Liste*tete,int elm){
Liste*b;
Liste*tmp;
b=(Liste*)malloc(sizeof(Liste));
b->info=elm;
b->next=NULL;
if(tete==NULL){
    tete=b;
}else{
    tmp=tete;
    while(tmp->next!=NULL)
        tmp=tmp->next;
    tmp->next=b;
}
return tete;
}

void afficher(Liste*tete){
Liste*tmp;
if(tete==NULL){
    printf("la liste est vide");
}else{
      tmp=tete;
      while(tmp!=NULL){
        printf("[%d]->",tmp->info);
        tmp=tmp->next;
      }
}
}
void listeVide(Liste*tete){
if(tete==NULL){
    printf("la liste est vide");
}
}

int nombreElementListe(Liste*tete){
Liste*tmp;
int s=0;
tmp=tete;
while(tmp!=NULL){
    s++;
    tmp=tmp->next;
}
return s;
}
void stocker(Liste*tete,FILE *fb){
Liste*tmp;
fb=fopen("file2.txt","wt");
if(tete==NULL){
    printf("la liste est vide");
}else{
       tmp=tete;
       while(tmp!=NULL){
        fprintf(fb,"[%d]->",tmp->info);
        tmp=tmp->next;
       }
}
fclose(fb);
}
#endif // EX04_H_INCLUDED
