//
// Created by Jonathan Suru on 23/12/2023.
//
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Fonction pour afficher la matrice
void printMatrix(const vector<vector<double>>& matrix) {
    for (const auto& row : matrix) {
        for (double val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

// Fonction pour effectuer la méthode du pivot de Gauss
void gaussElimination(vector<vector<double>>& matrix) {
    int n = matrix.size();

    for (int i = 0; i < n; i++) {
        // Recherche du pivot maximal dans la colonne i
        double maxEl = abs(matrix[i][i]);
        int maxRow = i;
        for (int k = i + 1; k < n; k++) {
            if (abs(matrix[k][i]) > maxEl) {
                maxEl = abs(matrix[k][i]);
                maxRow = k;
            }
        }

        // Échange des lignes pour placer le pivot maximal en position
        swap(matrix[maxRow], matrix[i]);

        // Rendre les éléments sous le pivot égaux à zéro
        for (int k = i + 1; k < n; k++) {
            double c = -matrix[k][i] / matrix[i][i];
            for (int j = i; j <= n; j++) {
                if (i == j) {
                    matrix[k][j] = 0;
                } else {
                    matrix[k][j] += c * matrix[i][j];
                }
            }
        }
    }

    // Résoudre les équations de haut en bas
    vector<double> solution(n);
    for (int i = n - 1; i >= 0; i--) {
        solution[i] = matrix[i][n] / matrix[i][i];
        for (int k = i - 1; k >= 0; k--) {
            matrix[k][n] -= matrix[k][i] * solution[i];
        }
    }

    // Afficher la solution
    cout << "Solution: ";
    for (double s : solution) {
        cout << s << " ";
    }
    cout << endl;
}

int main() {
    // Exemple: résolution d'un système de 3 équations linéaires
    vector<vector<double>> matrix = {
            {2, 1, -1, 8},
            {-3, -1, 2, -11},
            {-2, 1, 2, -3}
    };

    cout << "Matrice initiale:" << endl;
    printMatrix(matrix);

    gaussElimination(matrix);

    return 0;
}
