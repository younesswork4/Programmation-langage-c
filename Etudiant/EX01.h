#ifndef EX01_H_INCLUDED
#define EX01_H_INCLUDED


struct Etudiant{
char nom[100];
int note;
struct Etudiant*suivant;
};

typedef struct Etudiant*Liste;

void ajoutEnTete(Liste*tete,char *nom,int note){
struct Etudiant*nouveauNoeud;
nouveauNoeud=malloc(sizeof(struct Etudiant));
strcpy(nouveauNoeud->nom,nom);
nouveauNoeud->note=note;
nouveauNoeud->suivant=*tete;
*tete=nouveauNoeud;
}

int rechercheParNom(Liste tete,char *nom){
struct Etudiant *tmp=tete;
while(tmp!=NULL){
    if(strcmp(tmp->nom,nom)==0){
        return 1;
    tmp=tmp->suivant;
    }
}
return 0;
}

struct Etudiant*major(Liste tete){
struct Etudiant*tmp=tete,*max=tete;
if(tete=NULL)
    return NULL;

while(tmp!=NULL){
    if(tmp->note>max->note){
        max=tmp;
    }
    tmp=tmp->suivant;
}
return max;
}

void afficheMaillon(struct Etudiant E){
      printf("|%*s   |    %*d|\n",10,E.nom,7,E.note);
}

void afficheListe(Liste tete){
struct Etudiant*tmp;
tmp=tete;
if(tmp==NULL){
    printf("la liste est vide................\n");
}
printf("|-------------------------|\n");
printf("|%*s   |    %*s|\n",10,"Nom",7,"Note");
printf("|-------------------------|\n");
      while(tmp!=NULL){
        afficheMaillon(*tmp);
      tmp=tmp->suivant;
      }
printf("\n|-------------------------|");
printf("\n|           NULL          |");
printf("\n|-------------------------|");
}


#endif // EX01_H_INCLUDED
