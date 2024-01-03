#include <iostream>
using namespace std;

// Classe pour représenter un nombre rationnel
class Rationnel {
public:
    // Constructeurs
    Rationnel(int numerateur, int denominateur) : num(numerateur), den(denominateur) {
        if (den == 0) {
            cout << "Erreur : Dénominateur ne peut pas être zéro." << endl;
            den = 1; // Définition d'une valeur par défaut pour éviter la division par zéro
        }
    }
    Rationnel(int numerateur) : num(numerateur), den(1) {}
    Rationnel() : num(0), den(1) {}

    // Méthodes pour les opérations
    Rationnel somme(Rationnel const &autre) const;
    Rationnel produit(Rationnel const &autre) const;
    Rationnel division(Rationnel const &autre) const;
    Rationnel soustraction(Rationnel const &autre) const;
    Rationnel inverse() const;
    Rationnel normalise() const;

    // Méthode d'affichage
    void affiche() const {
        cout << num << " / " << den;
    }

private:
    int num; // Numérateur
    int den; // Dénominateur
};

// Définition des méthodes
Rationnel Rationnel::somme(Rationnel const &autre) const {
    return Rationnel(num * autre.den + den * autre.num, den * autre.den);
}

Rationnel Rationnel::produit(Rationnel const &autre) const {
    return Rationnel(num * autre.num, den * autre.den);
}


int main() {
    Rationnel r1(3, 2), r2(7, 3);

    cout << "Nos rationnels sont r1 = ";
    r1.affiche();
    cout << " et r2 = ";
    r2.affiche();
    cout << endl;

    cout << "\t somme(r1, r2) = ";
    r1.somme(r2).affiche();
    cout << endl;

    return 0;
}
