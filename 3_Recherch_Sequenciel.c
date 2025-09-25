#include <stdio.h>

#define N 10

int rechercheSequentielle(int tab[N], int element) {
    for (int i = 0; i < N; i++) {
        if (tab[i] == element) {
            return i; // Renvoie l'indice de l'élément trouvé
        }
    }
    return -1; // Renvoie -1 si l'élément n'est pas trouvé
}

int main() {
    int tab[N] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int element = 23;

    int indice = rechercheSequentielle(tab, element);

    if (indice != -1) {
        printf("L'élément %d a été trouvé à l'indice %d.\n", element, indice);
    } else {
        printf("L'élément %d n'a pas été trouvé dans le tableau.\n", element);
    }

    return 0;
}

