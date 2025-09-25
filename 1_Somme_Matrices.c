#include <stdio.h>

#define N 3
#define M 3

void sommeMatrices(int A[N][M], int B[N][M], int C[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void afficherMatrice(int A[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[N][M];
    int B[N][M];
    int C[N][M];

    sommeMatrices(A, B, C);

    printf("Matrice A :\n");
    afficherMatrice(A);
    printf("Matrice B :\n");
    afficherMatrice(B);
    printf("Somme des matrices A et B :\n");
    afficherMatrice(C);

    return 0;
}
