
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
int rechercheNom(Liste tete,char *nom){
cellule *tmp;
tmp=tete;
while(tmp!=NULL){
    while(strcmp(tmp->data.nom,nom)!=0){
        return 0;
        tmp=tmp->next;
    }
    return 1;
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
