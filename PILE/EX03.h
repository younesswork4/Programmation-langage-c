
#ifndef EX03_H_INCLUDED
#define EX03_H_INCLUDED

typedef struct myFile{
int Queue;
int tete;
int taille;
int File[50];
}myFile;

int fileVide(myFile F){
return F.tete=F.Queue;
}

int filePlienne(myFile F){
return F.Queue=F.taille;
}

void enfiler(myFile*F,int val){

F->File[F->Queue++]=val;
//F->Queue++;
}

int defiler(myFile*F){

return F->File[F->tete++];
}
#endif // EX03_H_INCLUDED
