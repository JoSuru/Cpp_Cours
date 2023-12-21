//
// Created by Jonathan Suru on 22/12/2023.
//
#include <cstdio>
#include <iostream>

int main() {
    int a, b;

    std::cout << "Entrez l'entier a:" << std::endl;
    std::cin >> a;
    std::cout << "Entrez l'entier b:" << std::endl;
    std::cin >> b;


    if (a >= b) {
        printf("Veuillez entrer des valeurs valides telles que a < b.\n");
        return 1;
    }

    // S'assurer que a est pair
    if (a % 2 != 0) {
        a++;
    }

    printf("Entiers naturels pairs entre %d et %d:\n", a, b);
    for (int i = a; i <= b; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}