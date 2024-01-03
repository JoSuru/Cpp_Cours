//
// Created by  Groupe 24  on 22/12/2023.
//
#include <cstdio>
#include <iostream>

int main() {
    int n, i, j, spaces;

    printf("Entrez un entier naturel impair pour n: ");
    std::cin >> n;

    if (n % 2 == 0) {
        printf("n doit être impair.\n");
        return 1;
    }

    // Partie supérieure du sablier
    for (i = 0; i < n / 2 + 1; i++) {
        // Imprimer des espaces
        for (spaces = 0; spaces < i; spaces++) {
            printf(" ");
        }
        // Imprimer des étoiles
        for (j = i; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Partie inférieure du sablier
    for (i = n / 2 - 1; i >= 0; i--) {
        // Imprimer des espaces
        for (spaces = 0; spaces < i; spaces++) {
            printf(" ");
        }
        // Imprimer des étoiles
        for (j = i; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
