//
// Created by Jonathan Suru on 22/12/2023.
//
#include <cstdio>

int main() {
    int m, f0 = 1, f1 = 1, fn;

    printf("Entrez le nombre de termes de la suite de Fibonacci à afficher: ");
    scanf("%d", &m);

    if (m <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return 1;
    }

    printf("Les %d premiers termes de la suite de Fibonacci sont:\n", m);

    for (int i = 1; i <= m; i++) {
        if (i == 1) {
            printf("%d ", f0);
            continue;
        }
        if (i == 2) {
            printf("%d ", f1);
            continue;
        }
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
        printf("%d ", fn);
    }
    printf("\n");

    return 0;
}
