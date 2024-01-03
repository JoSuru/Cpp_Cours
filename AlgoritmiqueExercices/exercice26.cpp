//
// Created by Groupe 24 on 22/12/2023.
//
#include <cstdio>
#include <iostream>

int main() {
    int lignes, colonnes;

    printf("Entrez le nombre de lignes du tableau: ");
    std::cin >> lignes;
    printf("Entrez le nombre de colonnes du tableau: ");
    std::cin >> colonnes;

    int tableau[lignes][colonnes];

    // Remplissage du tableau
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("Donner s.v.p., l'entier de la ligne %d et de la colonne %d : ", i + 1, j + 1);
            std::cin >> tableau[i][j];
        }
    }
    // Affichage du tableau
    printf("Contenu du tableau:\n");
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%d ", tableau[i][j]);
        }
        printf("\n"); // Nouvelle ligne après chaque ligne du tableau
    }

    // Correction du tableau
    int ligne, colonne, nouveauValeur;
    char reponse;

    do {
        printf("Voulez-vous corriger une valeur ? (o/n) : ");
        scanf(" %c", &reponse); // Notez l'espace avant %c pour ignorer les sauts de ligne précédents

        if (reponse == 'o' || reponse == 'O') {
            printf("Entrez la ligne et la colonne de la valeur à corriger: ");
            std::cin >> ligne;
            std::cin >> colonne;

            if (ligne >= 1 && ligne <= lignes && colonne >= 1 && colonne <= colonnes) {
                printf("Entrez la nouvelle valeur pour [%d][%d]: ", ligne, colonne);
                std::cin >> nouveauValeur;
                tableau[ligne - 1][colonne - 1] = nouveauValeur;
            } else {
                printf("Indices hors limites du tableau.\n");
            }
            // Affichage du tableau
            printf("Contenu du tableau:\n");
            for (int i = 0; i < lignes; i++) {
                for (int j = 0; j < colonnes; j++) {
                    printf("%d ", tableau[i][j]);
                }
                printf("\n"); // Nouvelle ligne après chaque ligne du tableau
            }
        }
    } while (reponse == 'o' || reponse == 'O');



    return 0;
}
