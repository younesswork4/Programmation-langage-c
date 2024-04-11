
#ifndef EX01_H_INCLUDED
#define EX01_H_INCLUDED

typedef struct Etudiant{
char nom[20];
int note;
}Etudiant;

typedef struct cellule cellule;
typedef cellule*Liste;
struct cellule{
Etudiant data;
struct cellule*next;
};



cellule*newEtudiant(Etudiant E){
cellule*d;
d=(cellule*)malloc(sizeof(cellule));
d->data=E;
d->next=NULL;
return d;
}

void ajouterEtudiantTete(Liste*tete,Etudiant E){
cellule*d;
d=newEtudiant(E);
d->next=*tete;
*tete=d;
}
void ajouterEtudiant(Liste*tete,Etudiant E){
ajouterEtudiantTete(tete,E);
}

int chercherEtudiant(Liste*tete,Etudiant E,char *nomP){
cellule*tmp;
tmp=*tete;
int nb=0;
if(tmp!=NULL){
    while( tmp->next!=NULL && strcmp((tmp->data.nom),nomP)!=0)
        nb+=1;
        tmp=tmp->next;

if(nb<1){
    printf("1");
    return nb;
}else{
    printf("0");
    return nb;}

}
}
void afficheEtudiant(Liste tete){
cellule*tmp;
tmp=tete;
if(tmp==NULL){
    printf("la liste est vide\n");
}else{
     while(tmp!=NULL){
        printf("[%s|%d]-->",tmp->data.nom,tmp->data.note);
        tmp=tmp->next;
     }

}
printf("\n");
}
#endif // EX01_H_INCLUDED
