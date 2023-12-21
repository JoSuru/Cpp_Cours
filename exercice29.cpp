//
// Created by Jonathan Suru on 22/12/2023.
//
#include <cstdio>
#include <iostream>

void triSelection(int arr[], int n) {
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {
        // Trouver l'indice du plus petit élément
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Permuter l'élément le plus petit avec le premier élément non trié
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
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

    triSelection(A, n);

    printf("Tableau trié:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
