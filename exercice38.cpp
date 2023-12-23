//
// Created by Jonathan Suru on 23/12/2023.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double pi0, epsilon;
    cout << "Entrez la valeur de pi0 : ";
    cin >> pi0;
    cout << "Entrez la valeur de epsilon : ";
    cin >> epsilon;

    double sum = 0.0;
    int m = 0;

    while (true) {
        double term = 4.0 * pow(-1, m) / (2 * m + 1);
        sum += term;

        if (abs(sum - pi0) < epsilon) {
            break;
        }

        m++;
    }

    cout << "La valeur de m pour laquelle |Sm - pi0| < epsilon est : " << m << endl;

    cout << "La valeur de m pour pi0 = 3.14159 et epsilon = 0.000001 est: 3B5" << endl;
    cout << "La valeur de m pour pi0 = 3.14159 et epsilon = 0.000001 est: 273703" << endl;

    return 0;
}
