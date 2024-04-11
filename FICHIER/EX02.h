
#ifndef EX02_H_INCLUDED
#define EX02_H_INCLUDED
int code;
char nom[20],prenom[20];
float noteE,noteO;
FILE*fp;

void ajouterETD(void);
void bulletin(void);
void modifierETD(void);
void supprimerETD(void);
void moyenneClasse(void);
void listeAdmis(void);

void ajouterETD(){
int codeR,tr=0;
fp=fopen("bulletin.txt","at+");
if(fp==NULL){
    printf("Impossible d'ouvrir le fichier \n");
    exit(1);
}
printf("Donner le code:");scanf("%d",&codeR);
while(!feof(fp))
{
    fscanf(fp,"%d\n%s\n%s\n%f\n%f\n",&code,nom,prenom,&noteE,&noteO);
    if(code==codeR){
        tr=1;
        break;
    }
}
    if(tr==1)
        printf("Etudiant existe deja!!!!!!\n");
else{
    printf("Donner le nom:");scanf("%s",nom);
    printf("Donner le prenom:");scanf("%s",prenom);
    do{
        printf("Donner la note ecrit:");scanf("%f",&noteE);}while(noteE<0||noteE>20);
    do{
        printf("Donner la note oral : ");scanf("%f",&noteO);
    }while(noteE<0||noteO>20);

    fprintf(fp,"%d\n%s\n%s\n%f\n%f\n",codeR,nom,prenom,noteE,noteO);

    }
fclose(fp);
}

#endif // EX02_H_INCLUDED
