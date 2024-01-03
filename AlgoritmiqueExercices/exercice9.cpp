//
// Created by  Groupe 24  on 22/12/2023.
//
#include <cstdio>
#include <cmath>
#include <iostream>

int main() {
    double a, b, c, delta, root1, root2, realPart, imagPart;

    std::cout << "Entrez le coefficient a" << std::endl;
    std::cin >> a;
    std::cout << "Entrez le coefficient b" << std::endl;
    std::cin >> b;
    std::cout << "Entrez le coefficient c" << std::endl;
    std::cin >> c;

    if (a != 0) {
        // Cas de l'équation quadratique
        delta = b*b - 4*a*c;

        if (delta > 0) {
            // Deux racines réelles et distinctes
            root1 = (-b + sqrt(delta)) / (2*a);
            root2 = (-b - sqrt(delta)) / (2*a);
            printf("Deux racines réelles et distinctes: %.2lf et %.2lf\n", root1, root2);
        } else if (delta == 0) {
            // Une racine réelle double
            root1 = root2 = -b / (2*a);
            printf("Une racine réelle double: %.2lf\n", root1);
        } else {
            // Deux racines complexes et conjuguées
            realPart = -b / (2*a);
            imagPart = sqrt(-delta) / (2*a);
            printf("Deux racines complexes: %.2lf + %.2lfi et %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
        }
    } else {
        // Cas de l'équation linéaire
        if (b != 0) {
            // Une seule racine réelle
            root1 = -c / b;
            printf("Une racine réelle: %.2lf\n", root1);
        } else if (c != 0) {
            // Aucune solution
            printf("Aucune solution.\n");
        } else {
            // Solutions indéterminées
            printf("L'équation a une infinité de solutions.\n");
        }
    }

    return 0;
}
