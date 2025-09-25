#include <stdio.h>

#define N 3
#define M 3
#define P 3

void produitMatrices(int A[N][M], int B[M][P], int C[N][P]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            C[i][j] = 0;
            for (int k = 0; k < M; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void afficherMatrice(int A[N][P]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[N][M] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[M][P] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int C[N][P];

    produitMatrices(A, B, C);

    printf("Matrice A :\n");
    afficherMatrice(A);
    printf("Matrice B :\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("Produit des matrices A et B :\n");
    afficherMatrice(C);

    return 0;
}
