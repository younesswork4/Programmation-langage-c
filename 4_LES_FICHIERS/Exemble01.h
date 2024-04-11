
#ifndef Exemble01_H_INCLUDED
#define Exemble01_H_INCLUDED

void Fichier(){
FILE * F1;
char fichier[]="donne.txt";
F1=fopen(fichier,"r");
if(F1=NULL){
    printf("le fichier n'existe pas\n");
    exit(1);
}
fclose(F1);
}

void testFichier(){
FILE *Pf;
const char * pseudo = "Lecteur";
const int score = 50;
Pf=fopen("laf1.pdf","w");
if(Pf==NULL){
    printf("n'existe pas un fichier");
    exit(1);
}
fprintf(Pf,"%s %d\n",pseudo,score);
fclose(Pf);

}

void FichierScanf(){
FILE *Ps;
char nom[5][50];
int scour[5],i;

Ps=fopen("scores.txt","w");

if(Ps == NULL){
    printf("n'exist pas un fichier\n");
}
for(i=0;i<5;i++){
    fscanf(Ps,"%s %d\n",nom[i],&scour[i]);
    printf("%s %d\n",nom[i],scour[i]);
}
fclose(Ps);
}
void function(){
FILE * pF;
 char nom[5][50];
 int score[5], i;
 pF = fopen("scores.txt", "r");
 if(pF == NULL){
 printf("Impossible d'ouvrir le fichier de scores\n");
 exit(1);
 }
 for(i = 0; i < 5; i++){
 fscanf(pF, "%s %d", nom[i], &score[i]);
 printf("Le joueur %s a %d points\n", nom[i], score[i]);
 }
 fclose(pF);


}
#define ENTREE "entree.txt"
#define SORTIE "sortie.txt"
void functionFile(){

#define ENTREE "entree.txt"
#define SORTIE "sortie.txt"
 FILE *f_in, *f_out;
 int c;
 if((f_in = fopen(ENTREE,"w")) == NULL){
 printf("\nImpossible de lire le fichier\n");
 exit(1);
 }
 if ((f_out = fopen(SORTIE,"r")) == NULL){
 printf("\nImpossible d'ecrire dans le fichier\n");
 exit(1);
 }
 while ((c = fgetc(f_in)) != EOF)
 fputc(c, f_out);
 fclose(f_in);
 fclose(f_out);

}



#endif
