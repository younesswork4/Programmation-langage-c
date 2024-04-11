#ifndef EX03_H_INCLUDED
#define EX03_H_INCLUDED
typedef struct Liste{
int info;
struct Liste*suiv;
}Liste;
Liste*ajouterALaFin(Liste*debut,int elm){
Liste *b,*temp;
b=(Liste*)malloc(sizeof(Liste));
b->info=elm;
b->suiv=NULL;
if(debut==NULL){
    debut=b;
}else{
      temp=debut;
      while(temp->suiv!=NULL)
        temp=temp->suiv;
        temp->suiv=b;


}
return debut;
}
Liste*ajouterAuMull(Liste*tete,int elm,int v){
Liste*debut;
Liste*tmp;
if(tete=NULL){
    printf("la liste est vide");
}else{
         tmp=tete;
         debut=(Liste*)malloc(sizeof(Liste));
         debut->info=elm;
         while(tmp!=NULL && tmp->info!=v)
            tmp=tmp->suiv;

         if(tmp!=NULL){
            debut->suiv=tmp->suiv;
            tmp->suiv=debut;
         }else{
         printf("L'element %d nexiste pas dans la liste",v);
         }

}
return tete;
}

void afficheMu(Liste*tete){
Liste*tmp;
tmp=tete;
while(tmp!=NULL){
    printf("%d-->",tmp->info);
    tmp=tmp->suiv;
}
}
#endif // EX03_H_INCLUDED
