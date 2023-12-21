//
// Created by Jonathan Suru on 22/12/2023.
//
#include <cstdio>

int main() {
    // Avec un Tableau Bidimensionnel
    int tableau[10][10];

    // Remplir le tableau avec la table de multiplication
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tableau[i][j] = (i + 1) * (j + 1);
        }
    }

    // Afficher chaque table de multiplication avec l'expression
    for (int i = 0; i < 10; i++) {
        printf("Table de %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d x %d = %d\n", i + 1, j + 1, tableau[i][j]);
        }
        printf("\n");
    }
    // Sans Utiliser de Tableau
    for (int i = 1; i <= 10; i++) {
        printf("Table de %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}