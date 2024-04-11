
#ifndef EX01_H_INCLUDED
#define EX01_H_INCLUDED

typedef struct Etudiant{
char nom[20];
char prenom[20];
int age;
float moyennee;

}Etudiant;
typedef struct cellule cellule;
struct cellule{
Etudiant E;
struct cellule*next;
};
typedef cellule*Liste;
cellule*newEtudiant(Etudiant E){
cellule*b;
b=(cellule*)malloc(sizeof(cellule));
b->E=E;
b->next=NULL;
return b;
}
void ajoutertete(Liste*tete,Etudiant E){
cellule*b;
b=newEtudiant(E);
b->next=*tete;
*tete=b;
}

void afficherListe(Liste tete){
cellule*tmp;
if(tete==NULL){
    printf("la liste est vide");
}else{
      tmp=tete;
        printf("|Nom|Prenom|Age|Moyenne|\n");
      while(tmp!=NULL){
        printf("|----------------------|\n");
        printf("|%s|%s|%d|%.2f\n",tmp->E.nom,tmp->E.prenom,tmp->E.age,tmp->E.moyennee);
        tmp=tmp->next;
      }
}
}
void stckeListe(Liste tete,FILE*fb){
cellule*tmp;
if(tete==NULL){
    printf("la liste est vide");
}else{
      tmp=tete;
        fb=fopen("Note.txt","at");
        fprintf(fb,"|Nom|Prenom|Age|Moyenne|\n");
      while(tmp!=NULL){
        fprintf(fb,"|----------------------|\n");
        fprintf(fb,"|%s|%s|%d|%.2f\n",tmp->E.nom,tmp->E.prenom,tmp->E.age,tmp->E.moyennee);
        tmp=tmp->next;
      }
      fclose(fb);
}
}
#endif // EX01_H_INCLUDED
