#include <stdio.h>

#define N 5

int estTrie(int tab[N]) {
    for (int i = 0; i < N - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            return 0; // Le tableau n'est pas trié
        }
    }
    return 1; // Le tableau est trié
}

int main() {
    int tab[N];

    if (estTrie(tab)) {
        printf("Le tableau est trié.\n");
    } else {
        printf("Le tableau n'est pas trié.\n");
    }

    return 0;
}
