/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Définition du type de données Produit
typedef struct Produit{
    int num;
    char nom[10];
    float prix;
    struct  dateExpiration{
        int jour;
        int mois;
        int annee;
    } dateExpiration;
} Produit;

// Fonction de saisie d'un produit
Produit saisie() {
    Produit p;
    printf("Numéro du produit : ");
    scanf("%d", &p.num);
    printf("Nom du produit (10 caractères) : ");
    scanf("%s", p.nom);
    printf("Prix unitaire du produit : ");
    scanf("%f", &p.prix);
    printf("Date d'expiration (jour mois année) : ");
    scanf("%d %d %d", &p.dateExpiration.jour, &p.dateExpiration.mois, &p.dateExpiration.annee);
    return p;
}

// Fonction d'affichage d'un produit
void affiche(Produit p) {
    printf("Numéro: %d, Nom: %s, Prix: %.2f, Date d'expiration: %02d/%02d/%04d\n",
           p.num, p.nom, p.prix, p.dateExpiration.jour, p.dateExpiration.mois, p.dateExpiration.annee);
}

// Fonction de saisie d'un tableau de produits
void saisieTab(Produit tab[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("Saisie du produit %d :\n", i + 1);
        tab[i] = saisie();
    }
}

// Fonction d'affichage d'un tableau de produits
void afficheTab(Produit tab[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("Produit %d :\n", i + 1);
        affiche(tab[i]);
    }
}

// Fonction de calcul de la somme des prix des produits
float somPrix(Produit tab[], int n) {
    float somme = 0;
    for (int i = 0; i < n; ++i) {
        somme += tab[i].prix;
    }
    return somme;
}

// Fonction d'affichage des produits dont la date d'expiration est inférieure à une date donnée
void afficheDE(Produit tab[], int n, struct tm dexp) {
    for (int i = 0; i < n; ++i) {
        if (mktime(&tab[i].dateExpiration) < mktime(&dexp))
            affiche(tab[i]);
    }
}

// Fonction de recherche séquentielle d'un produit par son nom
int rechSeq(Produit tab[], int n, char *nomP) {
    for (int i = 0; i < n; ++i) {
        if (strcmp(tab[i].nom, nomP) == 0)
            return i;
    }
    return -1;
}

// Fonction de recherche dichotomique récursive d'un produit par son nom
int rechDicho(Produit tab[], char *nomP, int i, int j) {
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

// Fonction principale (main)
int main() {
    int n;
    printf("Entrez le nombre d'éléments dans le tableau : ");
    scanf("%d", &n);

    // Allouer dynamiquement le tableau de produits
    Produit *tab = malloc(n * sizeof(Produit));

    // Saisie et affichage du tableau
    saisieTab(tab, n);
    printf("\nAffichage du tableau :\n");
    afficheTab(tab, n);

    // Calcul de la somme des prix des produits
    printf("\nSomme des prix des produits : %.2f\n", somPrix(tab, n));

    // Affichage des produits dont la date d'expiration est inférieure à une date donnée
    struct tm dexp = {0}; // Initialise la date d'expiration à la valeur que vous souhaitez
    printf("\nProduits dont la date d'expiration est inférieure à %02d/%02d/%04d :\n",
           dexp.tm_mday, dexp.tm_mon + 1, dexp.tm_year + 1900);
    afficheDE(tab, n, dexp);

    // Recherche d'un produit par son nom (séquentielle)
    char nomRecherche[10];
    printf("\nEntrez le nom du produit à rechercher : ");
    scanf("%s", nomRecherche);
    int indiceSeq = rechSeq(tab, n, nomRecherche);
    if (indiceSeq != -1)
        printf("Le produit %s a été trouvé à l'indice %d (recherche séquentielle).\n", nomRecherche, indiceSeq);
    else
        printf("Le produit %s n'a pas été trouvé (recherche séquentielle).\n", nomRecherche);

    // Trie du tableau par ordre alphabétique des noms des produits (supposé trié ici à titre d'exemple)
    qsort(tab, n, sizeof(Produit), comparerProduits);

    // Recherche d'un produit par son nom (dichotomique)
    int indiceDicho = rechDicho(tab, nomRecherche, 0, n - 1);
    if (indiceDicho != -1)
        printf("Le produit %s a été trouvé à l'indice %d (recherche dichotomique).\n", nomRecherche, indiceDicho);
    else
        printf("Le produit %s n'a pas été trouvé (recherche dichotomique).\n", nomRecherche);

    // Libération de la mémoire allouée dynamiquement
    free(tab);

    return 0;
}

