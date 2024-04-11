
#ifndef EX1_H_INCLUDED
#define EX1_H_INCLUDED
typedef struct Etudiant{
        int code;
        char nom[20];
        char prenom[20];
        float noteE;
        float noteO;
        struct Etudiant*suivant;
}Etudiant;

Etudiant* NouvelEtudiant(Etudiant*E1,int Code,char Nom[20],char Prenom[20],float NoteE,float NoteO){
Etudiant *E2;
E2=(Etudiant*)malloc(sizeof(Etudiant));
E2->code=Code;
E2->nom[20]=Nom[20];
E2->prenom[20]=Prenom[20];
E2->noteE=NoteE;
E2->noteO=NoteO;
E2->suivant=E1;
E1=E2;
return E2;
}
void afficherBulletin(Etudiant *E1){
Etudiant*tmp;
E1=tmp;
while(tmp!=NULL){
    printf("\n");
    printf("\tCode\tNom\tPrenom\tNoteE\tNoteO\t");
    printf("\t%d\t%s\t%s\t%d\t%d\t",tmp->code,tmp->nom[20],tmp->prenom[20],tmp->noteE,tmp->noteO);
    printf("\n");
    tmp=tmp->suivant;
}
}



#endif // EX1_H_INCLUDED
