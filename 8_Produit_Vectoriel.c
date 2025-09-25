#include <stdio.h>

typedef struct {
    int x, y, z;
} Vecteur;

Vecteur produitVectoriel(Vecteur v1, Vecteur v2) {
    Vecteur resultat;
    resultat.x = v1.y * v2.z - v1.z * v2.y;
    resultat.y = v1.z * v2.x - v1.x * v2.z;
    resultat.z = v1.x * v2.y - v1.y * v2.x;
    return resultat;
}

void afficherVecteur(Vecteur v) {
    printf("(%d, %d, %d)\n", v.x, v.y, v.z);
}

int main() {
    Vecteur v1;
    Vecteur v2;

    Vecteur resultat = produitVectoriel(v1, v2);

    printf("Vecteur 1 : ");
    afficherVecteur(v1);
    printf("Vecteur 2 : ");
    afficherVecteur(v2);
    printf("Produit vectoriel : ");
    afficherVecteur(resultat);

    return 0;
}
