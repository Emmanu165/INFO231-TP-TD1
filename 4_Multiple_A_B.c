#include <stdio.h>

int produit(int a, int b) {
    int resultat = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            resultat += 1;
        }
    }
    return resultat;
}

int main() {
    int a = 3;
    int b = 4;

    int resultat = produit(a, b);

    printf("%d × %d = %d\n", a, b, resultat);

    return 0;
}
