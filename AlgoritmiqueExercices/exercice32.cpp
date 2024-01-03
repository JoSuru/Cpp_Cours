//
// Created by Groupe 24 on 22/12/2023.
//
#include <cstdio>
#include <iostream>

// Fonction pour la recherche séquentielle
int rechercheSequentielle(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

// Fonction pour la recherche dichotomique
int rechercheDichotomique(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return rechercheDichotomique(arr, l, mid - 1, x);

        return rechercheDichotomique(arr, mid + 1, r, x);
    }

    return -1;
}

int main() {
    int n;
    int x;

    std::cout << "Entrez le  nombre d'élément du tableau:" << std::endl;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Entrez l'élément " << i << " du tableau" << std::endl;
        std::cin >> arr[i];
    }


    printf("Entrez le nombre à rechercher: ");
    std::cin >> x;

    // Appel de la recherche séquentielle
    int resultatSeq = rechercheSequentielle(arr, n, x);
    if (resultatSeq != -1)
        printf("Recherche Séquentielle: Nombre trouvé à l'indice: %d\n", resultatSeq);
    else
        printf("Recherche Séquentielle: Nombre non trouvé dans le tableau\n");

    // Appel de la recherche dichotomique
    int resultatDicho = rechercheDichotomique(arr, 0, n - 1, x);
    if (resultatDicho != -1)
        printf("Recherche Dichotomique: Nombre trouvé à l'indice: %d\n", resultatDicho);
    else
        printf("Recherche Dichotomique: Nombre non trouvé dans le tableau\n");

    return 0;
}
