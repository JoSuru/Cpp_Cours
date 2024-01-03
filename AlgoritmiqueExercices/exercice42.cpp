//
// Created by Groupe24 on 23/12/2023.
// Pour compiler  g++ -std=c++11 exercice42.cpp
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Donnez la taille du tableau : ";
    cin >> n;

    vector<int> tab(n);

    // 1. Remplir le tableau
    cout << "Donner maintenant les éléments du tableau :" << endl;
    for (int i = 0; i < n; i++) {
        cout << "tab[" << i << "] = ";
        cin >> tab[i];
    }

    // 2. Afficher les éléments du tableau
    cout << "tab = [";
    for (int i = 0; i < n; i++) {
        cout << tab[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;

    // 3. Choisir l'opération
    int choix;
    cout << "Choisissez maintenant l'opération que vous voulez faire :" << endl;
    cout << "(0) Multiplication des éléments du tableau" << endl;
    cout << "(1) Somme des éléments du tableau" << endl;
    cout << "(Autre chiffre) opération indéterminée" << endl;
    cin >> choix;

    if (choix == 0) {
        // Multiplication des éléments
        int produit = 1;
        for (int val : tab) {
            produit *= val;
        }
        cout << "Produit des éléments du tableau : " << produit << endl;
    } else if (choix == 1) {
        // Somme des éléments
        int somme = 0;
        for (int val : tab) {
            somme += val;
        }
        cout << "Somme des éléments du tableau : " << somme << endl;
    } else {
        cout << "Opération indéterminée." << endl;
    }

    return 0;
}
