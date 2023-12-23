//
// Created by Jonathan Suru on 23/12/2023.
//
#include <iostream>

using namespace std;

// Fonction pour calculer le nombre de lapins après 'n' mois
long long calculateRabbits(int n) {
    long long a = 2, b = 2, c;
    // Utilise la suite de Fibonacci pour calculer le nombre de lapins
    for (int i = 2; i <= n; i++) {
        c = a + b;  // Le terme suivant est la somme des deux précédents
        a = b;      // Mise à jour des termes précédents
        b = c;
    }
    return b;
}

// Fonction pour déterminer après combien de mois le nombre de lapins dépasse un milliard
int monthsToExceedBillion() {
    long long a = 2, b = 2, c;
    int mois = 2;
    const long long milliard = 1000000000;

    // Continue à calculer jusqu'à ce que le nombre de lapins dépasse un milliard
    while (b <= milliard) {
        c = a + b;
        a = b;
        b = c;
        mois++;
    }

    return mois;
}

int main() {
    // Partie 1: Calculer le nombre de lapins après un an (12 mois)
    int N = 12; // Nombre de mois pour un an
    cout << "Nombre de lapins après " << N << " mois : " << calculateRabbits(N) << endl;

    // Partie 2: Déterminer au bout de combien de mois, on dépasse le milliard de lapins
    cout << "On dépasse le milliard de lapins après " << monthsToExceedBillion() << " mois." << endl;

    return 0;
}
