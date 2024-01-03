#include<iostream>
using namespace std;

/**
 * Calcule la somme des n premiers entiers non nuls.
 * @param n : entier non négatif
 * @return somme des n premiers entiers
 */
int somme(int n) {
    int S = 0;
    for (int i = 1; i <= n; i++) {
        S += i;
    }
    return S;
}

/**
 * Calcule le produit des n premiers entiers non nuls.
 * @param n : entier non négatif
 * @return produit des n premiers entiers
 */
long long produit(int n) {
    long long P = 1;
    for (int i = 1; i <= n; i++) {
        P *= i;
    }
    return P;
}

int main() {
    int n;
    cout << "Entrez un nombre entier non négatif (n >= 0) : ";
    cin >> n;

    // Affichage de la somme des n premiers entiers et de leurs puissances
    cout << "\t S(" << n << ") = " << somme(n) << endl;
    cout << "\t S(" << n*n << ") = " << somme(n*n) << endl;
    cout << "\t S(" << n*n*n << ") = " << somme(n*n*n) << endl;
    cout << "\t S(S(" << n << ")) = " << somme(somme(n)) << endl << endl;

    // Affichage des produits factoriels
    for (int i = 0; i <= n; i++) {
        cout << "\t P(" << i*n << ") = " << produit(i*n) << endl;
    }

    return 0;
}
