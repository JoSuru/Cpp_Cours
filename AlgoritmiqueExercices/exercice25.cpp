//
// Created by Groupe 24 on 22/12/2023.
//
#include <cstdio>
#include <iostream>

int main() {
    int n;
    int somme = 0;

    // Lecture des éléments du tableau
    std::cout << "Entrez la taille du tableau :" << std::endl;
    std::cin >> n;
    int A[n]; // Déclaration d'un tableau de 10 éléments
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &A[i]);
    }

    // Calcul de la somme
    for (int i = 0; i < n; i++) {
        somme += A[i];
    }

    // Affichage de la somme
    printf("La somme des éléments du tableau est : %d\n", somme);

    return 0;
}
