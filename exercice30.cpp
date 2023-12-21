//
// Created by Jonathan Suru on 22/12/2023.
//
#include <cstdio>
#include <iostream>

void triBulle(int arr[], int n) {
    int i, temp;
    int echange;

    do {
        echange = 0; // Aucun échange au début

        for (i = 0; i < n - 1; i++) {
            // Si les éléments adjacents sont dans le mauvais ordre, les échanger
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                echange = 1; // Un échange a eu lieu
            }
        }
    } while (echange); // Continuer tant qu'il y a des échanges
}

int main() {
    int n;

    printf("Entrez le nombre d'éléments dans le tableau: ");
    std::cin >> n;

    int A[n];

    printf("Entrez %d nombres entiers:\n", n);
    for (int i = 0; i < n; i++) {
        std::cin >>A[i];
    }

    triBulle(A, n);

    printf("Tableau trié:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
