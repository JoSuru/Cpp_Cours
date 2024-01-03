//
// Created by Groupe 24 on 22/12/2023.
//
#include <cstdio>
#include <iostream>

int main() {
    int n, S1 = 0, S2 = 0;

    printf("Entrez un entier naturel n: ");
    std::cin >> n;

    if (n <= 0) {
        printf("Veuillez entrer un entier naturel non nul.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        S1 += i * i;   // Ajoute le carré de i à S1
        S2 += i * i * i; // Ajoute le cube de i à S2
    }

    printf("S1 (somme des carrés) pour n = %d est: %d\n", n, S1);
    printf("S2 (somme des cubes) pour n = %d est: %d\n", n, S2);

    return 0;
}