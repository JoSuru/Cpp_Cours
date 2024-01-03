//
// Created by Groupe 24 on 22/12/2023.
//
#include <cstdio>
#include <iostream>

int main() {
    int n;
    unsigned long long factorial = 1; // Utilisation d'unsigned long long pour éviter
    // le dépassement de capacité pour de grandes valeurs de n

    printf("Entrez un entier naturel n: ");
    std::cin >> n;

    if (n < 0) {
        printf("Veuillez entrer un entier naturel.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%d! = %llu\n", n, factorial);

    return 0;
}