#include <iostream>
#include <cmath> // Utilisation de <cmath> au lieu de <math.h>
using namespace std;

/**
 * Calcul et affiche les racines d'un polynôme de degré au plus deux.
 */
int main() {
    double a, b, c;

    cout << "Entrez les coefficients a, b et c : ";
    cin >> a >> b >> c;

    if (a == 0) {
        if (b != 0) {
            cout << "Solution linéaire unique : x = " << -c / b << endl;
        } else {
            cout << (c == 0 ? "Tous les nombres sont solutions." : "Pas de solution.") << endl;
        }
    } else {
        double delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "Pas de solutions réelles." << endl;
        } else if (delta == 0) {
            cout << "Solution double : x = " << -b / (2 * a) << endl;
        } else {
            cout << "Deux solutions distinctes :" << endl;
            cout << "\tx1 = " << (-b - sqrt(delta)) / (2 * a) << endl;
            cout << "\tx2 = " << (-b + sqrt(delta)) / (2 * a) << endl;
        }
    }

    return 0;
}
