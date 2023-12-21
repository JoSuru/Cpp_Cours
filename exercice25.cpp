//
// Created by Jonathan Suru on 22/12/2023.
//
#include <cstdio>

int main() {
    int A[10]; // Déclaration d'un tableau de 10 éléments
    int somme = 0;
    int taille = sizeof(A) / sizeof(A[0]); // Calcul de la taille du tableau

    // Lecture des éléments du tableau
    printf("Entrez les éléments du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &A[i]);
    }

    // Calcul de la somme
    for (int i = 0; i < taille; i++) {
        somme += A[i];
    }

    // Affichage de la somme
    printf("La somme des éléments du tableau est : %d\n", somme);

    return 0;
}
