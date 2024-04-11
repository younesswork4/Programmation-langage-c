#ifndef EX05_H_INCLUDED
#define EX05_H_INCLUDED

typedef struct Matrice{
int nblignes;
int nbcolonnes;
int **mat;
}Matrice;

Matrice*creerMatrice(Matrice *M){
int nblignes;
int nbcolonnes;
int **mat;
M=(Matrice*)malloc(sizeof(Matrice));
M->nblignes=nblignes;
M->nbcolonnes=nbcolonnes;
M->**mat=**mat;
return M;
}
void saiser(Matrice*M){
printf("Donner le nombre des lignes\n");scanf("%d",&M->nblignes);
printf("Donner le nombre des colonnes\n");scanf("%d",&M->nbcolonnes);

}

void afficheMatrice(Matrice*M){

printf("nombre de lignes est:%d\n",M->nblignes);
printf("nombre de colonnes est :%d",M->nbcolonnes);

}

#endif // EX05_H_INCLUDED
