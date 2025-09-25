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
    int A[N][M] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[N][M] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
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
