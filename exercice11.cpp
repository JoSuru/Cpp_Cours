//
// Created by Jonathan Suru on 22/12/2023.
//
#include <cstdio>

int main() {
    int Nmax = 10;

    for (int n = 1; n <= Nmax; n++) {
        for (int i = 1; i <= n; i++) {
            printf(" %d", i);
        }
        printf("\n"); // Passer à la ligne suivante après chaque série
    }

    return 0;
}