//
// Created by  Groupe 24  on 22/12/2023.
//
#include <cstdio>
#include <iostream>


int main() {
    int n;

    printf("Entrez un entier n: ");
    std::cin >> n;

    for (int i = 0; i < n; i++) { // Contrôle le nombre d'étoiles et le nombre de chiffres à imprimer
        for (int k = 0; k < i; k++) { // Imprime les étoiles
            printf(" *");
        }
        for (int j = 1; j <= n - i; j++) { // Imprime les chiffres de 1 à n-i
            printf(" %d", j);
        }
        printf("\n");
    }

    return 0;
}