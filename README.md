# INFO231-TP-TD1

1- Somme de matrices

But : Calculer la somme de deux matrices de même dimension. 
Principe : L’utilisateur saisit les dimensions m × n.

Il entre les valeurs des deux matrices A et B.
La somme est obtenue par la formule : S[i][j] = A[i][j] + B[i][j] 
Entrée : deux matrices (m × n). 
Sortie : une matrice (m × n) contenant la somme.

2- Produit de matrices

But : Multiplier deux matrices. 
Principe : L’utilisateur saisit les dimensions A(m × p) et B(p × n).

Chaque élément du produit est obtenu par : C[i][j] = Σ (A[i][k] × B[k][j]) pour k=0..p-1 
Entrée : deux matrices A et B. 
Sortie : une matrice C(m × n).

3- Recherche séquentielle dans un tableau

But : Rechercher une valeur donnée dans un tableau.
Principe : Le programme parcourt le tableau du premier élément au dernier.

Si la valeur recherchée est trouvée, on retourne son indice.
Sinon, on indique qu’elle n’existe pas. 
Entrée : un tableau et une valeur. 
Sortie : la position de la valeur si elle existe, sinon “non trouvé”.

4- Multiplication (a × b) avec a,b > 0 en utilisant uniquement +1

But : Calculer le produit de deux entiers positifs sans utiliser l’opérateur * ni l’addition classique. 
Principe : On initialise le résultat à 0.

On incrémente le résultat une fois pour chaque unité contenue dans le produit.
On effectue a × b incréments. Exemple : 3 × 4 → résultat obtenu après 12 incréments. 
Entrée : deux entiers positifs. 
Sortie : leur produit.

5- Tester si un tableau est trié

But : Vérifier si les éléments d’un tableau sont classés dans l’ordre croissant. 
Principe : On parcourt le tableau.

À chaque étape, on compare l’élément courant à l’élément suivant.
Si un élément est plus grand que le suivant, le tableau n’est pas trié. 
Entrée : un tableau. 
Sortie : un message “Trié” ou “Non trié”.

6- Médiane dans un tableau

But : Trouver la médiane d’un tableau. Principe :

On trie d’abord le tableau.

Si le nombre d’éléments est impair : la médiane est l’élément du milieu.
Si le nombre d’éléments est pair : la médiane est la moyenne des deux éléments du milieu. Exemple : [4, 3, 1] → trié [1, 3, 4] → médiane = 3.
Entrée : un tableau d’entiers.
Sortie : un entier ou un réel (cas de la moyenne).

7- Inverser un tableau

But : Renverser l’ordre des éléments d’un tableau. 
Principe : On échange le premier élément avec le dernier, le deuxième avec l’avant-dernier, etc.

On continue jusqu’au milieu. Exemple : [1, 2, 3, 4, 5] → [5, 4, 3, 2, 1]. 
Entrée : un tableau. 
Sortie : le tableau inversé.

8- Produit vectoriel (cross product)

But : Calculer le produit vectoriel de deux vecteurs en 3 dimensions. 
Principe :

Soient v1 = (a1, a2, a3) et v2 = (b1, b2, b3).

Le produit vectoriel est défini par : a × b = (a2b3 - a3b2, a3b1 - a1b3, a1b2 - a2b1) 
Entrée : deux vecteurs 3D. 
Sortie : un vecteur 3D perpendiculaire aux deux.

9- Produit vecteur × matrice

But : Multiplier un vecteur ligne par une matrice. 
Principe : Le vecteur v est de taille n.

La matrice M est de taille n × m.
Le résultat est un vecteur de taille m : r[j] = Σ (v[i] × M[i][j]) pour i=0..n-1 Entrée : un vecteur et une matrice. 
Sortie : un vecteur lignes

