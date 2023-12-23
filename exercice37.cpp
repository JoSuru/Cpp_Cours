//
// Created by Jonathan Suru on 23/12/2023.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int lignes, colonnes;
    cout << "Entrez le nombre de lignes : ";
    cin >> lignes;
    cout << "Entrez le nombre de colonnes : ";
    cin >> colonnes;

    vector<vector<double>> tableau(lignes, vector<double>(colonnes));
    vector<double> moyenneLignes(lignes, 0);
    vector<double> moyenneColonnes(colonnes, 0);
    double moyenneGlobale = 0;

    // Remplir le tableau
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            cout << "Donner S.V.P. le réel de la ligne " << i + 1 << " et de la colonne " << j + 1 << " : ";
            cin >> tableau[i][j];
            moyenneLignes[i] += tableau[i][j];
            moyenneColonnes[j] += tableau[i][j];
            moyenneGlobale += tableau[i][j];
        }
    }

    // Calcul des moyennes
    for (double& val : moyenneLignes) val /= colonnes;
    for (double& val : moyenneColonnes) val /= lignes;
    moyenneGlobale /= (lignes * colonnes);

    // Affichage du tableau et des moyennes
    cout << "Tableau avec les moyennes :" << endl;
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            cout << tableau[i][j] << "\t";
        }
        cout  << moyenneLignes[i] << endl;
    }
    for (double val : moyenneColonnes) {
        cout << val << "\t";
    }
    cout  << moyenneGlobale << endl;

    return 0;
}
