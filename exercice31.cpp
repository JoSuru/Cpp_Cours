//
// Created by Jonathan Suru on 22/12/2023.
//
#include <cstdio>

void triInsertion(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Déplacer les éléments de arr[0..i-1], qui sont plus grands que key,
        // à une position en avant de leur position actuelle
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void triFusion(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        triFusion(arr, l, m);
        triFusion(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void triRapide(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        triRapide(arr, low, pi - 1);
        triRapide(arr, pi + 1, high);
    }
}


int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Appel à une des fonctions de tri, par exemple :
    triInsertion(arr, n);
    // triFusion(arr, 0, n - 1);
    // triRapide(arr, 0, n - 1);

    printf("Tableau trié par Insertion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}