//
// Created by Jonathan Suru on 22/12/2023.
//
#include <cstdio>
#include <iostream>

int main() {
    int n, somme = 0;

    printf("Entrez un entier naturel n: ");
    std::cin >> n;

    if (n <= 0) {
        printf("Veuillez entrer un entier naturel non nul.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        somme += i; // Ajoute i à la somme
    }

    printf("La somme des %d premiers entiers naturels est: %d\n", n, somme);

    return 0;
}