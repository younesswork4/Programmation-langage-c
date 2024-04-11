#ifndef EX04_H_INCLUDED
#define EX04_H_INCLUDED
#define N 100
typedef struct date{
    int j;
    int m;
    int an;
}date;
typedef struct produit{
int num;
char nom[20];
float prix;
date De;
}produit;
void saisie(produit *p){

printf("Num:\n");scanf("%d",&p->num);
printf("Nom:\n");scanf("%s",p->nom);
printf("Prix:\n");scanf("%f",&p->prix);
printf("jour:\n");scanf("%d",&p->De.j);
printf("mois:\n");scanf("%d",&p->De.m);
printf("annee:\n");scanf("%d",&p->De.an);
}
void affiche(produit p){
//printf("%d\n",p.num,"%s\t",p.nom,"%.2f\t",p.prix,"%d\t",p.De.j,"/%d",p.De.m,"/%d",p.De.an);

printf("%d --- %s --- %.2f ", p.num,p.nom,p.prix);
printf(" - %2d - %2d - %4d\n", p.De.j, p.De.m, p.De.an);

}

void saisieTab(produit tab[N],int n){
for(int i=0;i<n;i++){
    saisie(&tab[i]);
}
}
void afficheTab(produit tab[],int n){
for(int i=0;i<n;i++){
    affiche(tab[i]);
}
}
float somprix(produit tab[],int n){
float som=0;
for(int i=0;i<n;i++){
    som+=tab[i].prix;
}
return som;
}
void afficheDE(produit tab[],int n, date dexp){

for(int i=0;i<n;i++){
if(tab[i].De.an<dexp.an){
       affiche(tab[i]);
}
}
}

int rechSeq(produit tab[],int n,char *nomP){
for(int i=0;i<n;i++){
    if(strcmp(tab[i].nom,nomP)==0){
        return (i);
    }
}
return (-1);
}

int rechDicho(produit tab[], char *nomP, int i, int j) {
    if (i > j)
        return -1;

    int m = (i + j) / 2;
    int cmp = strcmp(tab[m].nom, nomP);

    if (cmp == 0)
        return m;
    else if (cmp < 0)
        return rechDicho(tab, nomP, m + 1, j);
    else
        return rechDicho(tab, nomP, i, m - 1);
}




#endif
