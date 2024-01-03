//
// Created by Groupe 24 on 23/12/2023.
// Pour compiler  g++ -std=c++11 exercice35.cpp
//
#include <iostream>
#include <vector>

void resoudreSysteme(std::vector<std::vector<float>>& matrice, std::vector<float>& termes, int taille) {
    std::vector<float> solutions(taille);
    for (int i = taille - 1; i >= 0; --i) {
        float somme = termes[i];
        for (int j = i + 1; j < taille; ++j) {
            somme -= matrice[i][j] * solutions[j];
        }
        solutions[i] = somme / matrice[i][i];
    }

    std::cout << "Les solutions de votre système d'équations sont données par :\n";
    for (int i = 0; i < taille; ++i) {
        std::cout << "y[" << i + 1 << "] = " << solutions[i] << "\n";
    }
}

int main() {
    int taille;
    std::cout << "\n\t Combien d'inconnues comporte votre système d'équations : ";
    std::cin >> taille;

    std::vector<std::vector<float>> matrice(taille, std::vector<float>(taille));
    std::vector<float> termes(taille);

    std::cout << "\nEntrez les coefficients de votre système\n";
    for (int i = 0; i < taille; ++i) {
        for (int j = 0; j < taille; ++j) {
            std::cout << "a[" << i + 1 << "][" << j + 1 << "] = ";
            std::cin >> matrice[i][j];
        }
        std::cout << "b[" << i + 1 << "] = ";
        std::cin >> termes[i];
    }

    // Méthode de Gauss pour la triangularisation
    for (int k = 0; k < taille - 1; ++k) {
        for (int i = k + 1; i < taille; ++i) {
            float facteur = matrice[i][k] / matrice[k][k];
            for (int j = k; j < taille; ++j) {
                matrice[i][j] -= facteur * matrice[k][j];
            }
            termes[i] -= facteur * termes[k];
        }
    }

    resoudreSysteme(matrice, termes, taille);

    return 0;
}

