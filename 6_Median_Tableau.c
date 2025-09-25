#include <stdio.h>

#define N 5

void trierTableau(int tab[N]) {
    int temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int trouverMedian(int tab[N]) {
    trierTableau(tab);
    return tab[N / 2];
}

int main() {
    int tab[N];

    printf("Médian du tableau : %d\n", trouverMedian(tab));

    return 0;
}
