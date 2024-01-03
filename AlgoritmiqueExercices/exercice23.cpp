//
// Created by Groupe 24 on 22/12/2023.
//
#include <cstdio>
#include <iostream>
#include <climits>

int main() {
    // le minimum de deux nombres naturels.
    unsigned int a, b, n, num;

    std::cout << "Entrez l'entier a:" << std::endl;
    std::cin >> a;
    std::cout << "Entrez l'entier b:" << std::endl;
    std::cin >> b;

    unsigned int min = (a < b) ? a : b;
    printf("Le minimum de %u et %u est %u\n", a, b, min);

    // le minimum de trois nombres entiers naturels
    unsigned int c;

    std::cout << "Entrez l'entier a:" << std::endl;
    std::cin >> a;
    std::cout << "Entrez l'entier b:" << std::endl;
    std::cin >> b;
    std::cout << "Entrez l'entier c:" << std::endl;
    std::cin >> c;


    min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("Le minimum de %u, %u et %u est %u\n", a, b, c, min);

    // le minimum de n nombres entiers naturels.
    min = UINT_MAX;

    printf("Combien de nombres voulez-vous comparer? ");
    std::cin >> n;

    printf("Entrez %u nombres naturels:\n", n);
    for (unsigned int i = 0; i < n; i++) {
        scanf("%u", &num);
        if (num < min) min = num;
    }

    printf("Le minimum des nombres saisis est %u\n", min);



    // le maximum de deux nombres naturels.

    std::cout << "Entrez l'entier a:" << std::endl;
    std::cin >> a;
    std::cout << "Entrez l'entier b:" << std::endl;
    std::cin >> b;

    unsigned int max = (a > b) ? a : b;
    printf("Le maximum de %u et %u est %u\n", a, b, max);

    // le maximum de trois nombres entiers naturels

    std::cout << "Entrez l'entier a:" << std::endl;
    std::cin >> a;
    std::cout << "Entrez l'entier b:" << std::endl;
    std::cin >> b;
    std::cout << "Entrez l'entier c:" << std::endl;
    std::cin >> c;


    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("Le maximum de %u, %u et %u est %u\n", a, b, c, max);

    // le maximum de n nombres entiers naturels.

    printf("Combien de nombres voulez-vous comparer? ");
    std::cin >> n;

    printf("Entrez %u nombres naturels:\n", n);
    scanf("%d", &max); // Initialiser max avec le premier nombre

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("Le maximum des nombres saisis est %u\n", max);

    return 0;
}