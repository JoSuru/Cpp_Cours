//
// Created by  Groupe 24  on 22/12/2023.
//
#include <cstdio>
#include <iostream>

int main() {
    int a, b, temp;

    std::cout << "Entrez le nombre a:" << std::endl;
    std::cin >> a;
    std::cout << "Entrez le nombre b:" << std::endl;
    std::cin >> b;

    // Affichage avant la permutation
    printf("Avant la permutation : a = %d, b = %d\n", a, b);

    // Permutation des valeurs
    temp = a;
    a = b;
    b = temp;

    // Affichage après la permutation
    printf("Après la permutation : a = %d, b = %d\n", a, b);

    return 0;
}