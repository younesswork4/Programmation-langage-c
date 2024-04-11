#include <stdio.h>
#include <stdlib.h>

// Définition de la structure Matrice
typedef struct {
    int nbLignes;
    int nbColonnes;
    int **mat;
} Matrice;

// Fonction pour allouer l'espace mémoire pour la matrice
void allouerMatrice(Matrice *matrice) {
    matrice->mat = (int **)malloc(matrice->nbLignes * sizeof(int *));
    for (int i = 0; i < matrice->nbLignes; ++i) {
        matrice->mat[i] = (int *)malloc(matrice->nbColonnes * sizeof(int));
    }
}

// Fonction pour initialiser la matrice avec des données saisies par l'utilisateur
void initialiserMatrice(Matrice *matrice) {
    printf("Saisie des éléments de la matrice :\n");
    for (int i = 0; i < matrice->nbLignes; ++i) {
        for (int j = 0; j < matrice->nbColonnes; ++j) {
            printf("Element [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &matrice->mat[i][j]);
        }
    }
}

// Fonction pour afficher la matrice
void afficherMatrice(Matrice matrice) {
    printf("Affichage de la matrice :\n");
    for (int i = 0; i < matrice.nbLignes; ++i) {
        for (int j = 0; j < matrice.nbColonnes; ++j) {
            printf("%d ", matrice.mat[i][j]);
        }
        printf("\n");
    }
}

// Fonction pour libérer l'espace mémoire de la matrice
void libererMatrice(Matrice *matrice) {
    for (int i = 0; i < matrice->nbLignes; ++i) {
        free(matrice->mat[i]);
    }
    free(matrice->mat);
}

int main() {
    Matrice A;

    // Saisie du nombre de lignes et colonnes de la matrice
    printf("Entrez le nombre de lignes de la matrice : ");
    scanf("%d", &A.nbLignes);
    printf("Entrez le nombre de colonnes de la matrice : ");
    scanf("%d", &A.nbColonnes);

    // Allocation de l'espace mémoire pour la matrice
    allouerMatrice(&A);

    // Initialisation de la matrice par des données saisies par l'utilisateur
    initialiserMatrice(&A);

    // Affichage de la matrice
    afficherMatrice(A);

    // Libération de l'espace mémoire de la matrice
    libererMatrice(&A);

    return 0;
}
