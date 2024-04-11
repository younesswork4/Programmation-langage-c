
#ifndef EX03_H_INCLUDED
#define EX03_H_INCLUDED
int code;
char nom[20];
char prenom[20];
float noteE,noteO;
FILE*fp;
void nouvelEtudiant(void);
void afficherBulletin(void);
void modifierNom(void);
void afficherMoyenne(void);
void listeAdmis(void);

void nouvelEtudiant(){
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
/*
FILE*fb;
int tr=0;
int codeR;
fb=fopen("BulltinClasse.txt","at+");
if(fb==NULL){
    printf("le Fichier est vide");
    exit(1);
}
printf("Donner Code Etudiant:");scanf("%d",&codeR);
while(!feof(fb)){
    fscanf(fb,"%d\n%s\n%s\n%f\n%f\n",&code,nom,prenom,&noteE,&noteO);
    if(code==codeR){
        tr=1;
        break;
    }

}

if(tr==1)
    printf("Etudiant deja existe!!!!!!!!!!!!!!\n");
else{
printf("Donner le nom:");scanf("%s",nom);
printf("Donner le prenom:");scanf("%s",prenom);
do{
    printf("Donner la note Ecritur:");scanf("%d",&noteE);
}while(noteE<0 || noteE>20);
do{
printf("Donner la note Orale:");scanf("%d",&noteO);
}while(noteO<0 || noteO>20);
fprintf(fb,"%d\n%s\n%s\n%f\n%f\n",code,nom,prenom,noteE,noteO);
}
fclose(fb);
*/

}



















#endif // EX03_H_INCLUDED
