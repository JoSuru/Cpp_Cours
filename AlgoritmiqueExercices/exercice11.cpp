//
// Created by  Groupe 24  on 22/12/2023.
//
#include <cstdio>
#include <iostream>

int main() {
    int Nmax = 10;
    int n;
    std::cout << "Entrez un nombre naturel: " << std::endl;
    std::cin >> n;
    if (n < Nmax) Nmax = n;
    for (int n = 1; n <= Nmax; n++) {
        for (int i = 1; i <= n; i++) {
            printf(" %d", i);
        }
        printf("\n"); // Passer à la ligne suivante après chaque série
    }

    return 0;
}