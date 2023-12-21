//
// Created by Jonathan Suru on 22/12/2023.
//
#include <cstdio>
#include <iostream>

int main() {
    int n, i, j;

    printf("Entrez un entier naturel pour n: ");
    std::cin >> n ;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i % 2 == 0)
                printf("*  ");
            else
                printf(" * ");
        }
        printf("\n");

    }

    return 0;
}