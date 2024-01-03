//
// Created by  Groupe 24  on 22/12/2023.
//
#include <cstdio>
#include <iostream>

int main() {
    int n, i, j;

    printf("Entrez un entier naturel pour n: ");
    std::cin >> n ;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
                printf("*  ");
        }
        printf("\n");
        for (j = 0; j < n; j++) {
            printf(" * ");
        }
        printf("\n");

    }

    return 0;
}