//
// Created by Groupe24 on 23/12/2023.
// Pour compiler  g++ -std=c++11 exercice43.cpp
//
#include <iostream>
#include <vector>

using namespace std;

void printPrimes(int N) {
    vector<int> tab(N), nombresPremiers(N, 1);

    // Initialiser tab
    for (int i = 0; i < N; i++) {
        tab[i] = i + 1;
    }

    // Recherche des nombres premiers
    for (int i = 1; i < N; i++) {
        if (tab[i] != 1) {
            for (int j = 0; j < i; j++) {
                if (tab[j] != 1 && tab[i] % tab[j] == 0) {
                    nombresPremiers[i] = 0;
                    break;
                }
            }
        } else {
            nombresPremiers[i] = 0; // 1 n'est pas un nombre premier
        }
    }

    // Afficher les nombres premiers
    cout << "Nombres premiers inférieurs à " << N << " : ";
    for (int i = 1; i < N; i++) {
        if (nombresPremiers[i] == 1) {
            cout << tab[i] << " ";
        }
    }
    cout << endl;
}

void printPrimesBeforeN() {
    int n;
    cout << "Entrez un nombre entier n pour afficher les nombres premiers avant ce nombre : ";
    cin >> n;
    printPrimes(n);
}

int main() {
    int N = 100; // Nmax = 100
    printPrimes(N);

    // Variante pour un nombre n donné
    printPrimesBeforeN();

    return 0;
}
