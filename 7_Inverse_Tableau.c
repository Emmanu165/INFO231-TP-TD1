#include <stdio.h>

#define N 5

void inverserTableau(int tab[N]) {
    int temp;
    for (int i = 0; i < N / 2; i++) {
        temp = tab[i];
        tab[i] = tab[N - 1 - i];
        tab[N - 1 - i] = temp;
    }
}

void afficherTableau(int tab[N]) {
    for (int i = 0; i < N; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int tab[N];

    printf("Tableau avant inversion : ");
    afficherTableau(tab);

    inverserTableau(tab);

    printf("Tableau après inversion : ");
    afficherTableau(tab);

    return 0;
}
