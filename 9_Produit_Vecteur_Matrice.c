
#include <stdio.h>

#define N 3 // Nombre de lignes de la matrice
#define M 3 // Nombre de colonnes de la matrice

typedef struct {
    int x, y, z;
} Vecteur;

void produitVecteurMatrice(Vecteur v, int matrice[N][M], int resultat[M]) {
    resultat[0] = v.x * matrice[0][0] + v.y * matrice[1][0] + v.z * matrice[2][0];
    resultat[1] = v.x * matrice[0][1] + v.y * matrice[1][1] + v.z * matrice[2][1];
    resultat[2] = v.x * matrice[0][2] + v.y * matrice[1][2] + v.z * matrice[2][2];
}

void afficherVecteur(Vecteur v) {
    printf("(%d, %d, %d)\n", v.x, v.y, v.z);
}

void afficherMatrice(int matrice[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

void afficherResultat(int resultat[M]) {
    printf("(");
    for (int i = 0; i < M; i++) {
        printf("%d", resultat[i]);
        if (i < M - 1) {
            printf(", ");
        }
    }
    printf(")\n");
}

int main() {
    Vecteur v = {1, 2, 3};
    int matrice[N][M] = {{4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int resultat[M];

    printf("Vecteur : ");
    afficherVecteur(v);
    printf("Matrice :\n");
    afficherMatrice(matrice);

    produitVecteurMatrice(v, matrice, resultat);

    printf("Produit vecteur × matrice : ");
    afficherResultat(resultat);

    return 0;
}
