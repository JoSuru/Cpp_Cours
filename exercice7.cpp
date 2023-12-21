//
// Created by Jonathan Suru on 22/12/2023.
//
#include <iostream>
#include <cmath>
int main(){
    double s =0;
    double sn ;
    int n=5000000;
    const double gamma = 0.57721566490153286060; // Valeur approchée de la constante d'Euler
    const double epsilon = 1e-6;
    std::cout << "Pour n = 100, le code calcule le 100ème terme de cette suite." << std::endl;
    // un programme permettant de calculer les 5000000 premiers termes de la suite
    for (int k = 1; k <= n; k++) {
        s += 1.0 / k;
        sn = s - log(n);
        std::cout << "Terme " << k << ": " << sn << std::endl;
    }
    //un nouvel algorithme permettant de calculer le rang n à partir duquel la suite vérifie |sn − γ| < epsilon
    s = 0;
    n = 0;
    sn = 0;
    while (fabs(sn - gamma) > epsilon) {
        s += 1.0 / n;
        sn = s - log(n);
        n++;
    }

    std::cout << "Rang n: " << n-1 << std::endl;
    return 0;
}