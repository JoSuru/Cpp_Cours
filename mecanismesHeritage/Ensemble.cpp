#include "Ensemble.h"
#include <iostream>
using namespace std;

// Constructeur pour créer un ensemble contenant un singleton
Ensemble::Ensemble(int e) : n(1) {
    elem[0] = e;
    cout << "Construction d'un objet Ensemble avec élément " << e << "\n";
}

// Destructeur
Ensemble::~Ensemble() {
    cout << "Destruction d'un objet Ensemble\n";
}

// Affiche les éléments de l'ensemble
void Ensemble::affiche() {
    if (n > 0) {
        cout << "\t Mon ensemble est : [";
        for (int i = 0; i < n - 1; ++i) {
            cout << elem[i] << ", ";
        }
        cout << elem[n - 1] << "]\n";
    } else {
        cout << "\t Mon ensemble est vide\n";
    }
}

// Programme principal pour tester la classe Ensemble
int main() {
    Ensemble toto(0);
    toto.affiche();

    return 0;
}
