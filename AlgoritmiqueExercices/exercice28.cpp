//
// Created by Groupe 24 on 22/12/2023.
//
#include <cstdio>
#include <iostream>


int main() {
    int MAX =20;
    long triangle[MAX][MAX];
    int n;

    std::cout << "Entrez un nombre entier naturel:" << std::endl;
    std::cin >> n;
    if (n < MAX) MAX = n;

    // Initialisation du triangle de Pascal
    for (int n = 0; n < MAX; n++) {
        triangle[n][0] = 1; // C^n_0 = 1
        triangle[n][n] = 1; // C^n_n = 1

        // Calcul des autres coefficients
        for (int p = 1; p < n; p++) {
            triangle[n][p] = triangle[n - 1][p - 1] + triangle[n - 1][p];
        }
    }

    // Affichage du triangle de Pascal
    for (int n = 0; n < MAX; n++) {
        for (int p = 0; p <= n; p++) {
            printf("%ld ", triangle[n][p]);
        }
        printf("\n");
    }

    return 0;
}
