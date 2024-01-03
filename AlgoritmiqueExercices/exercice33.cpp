//
// Created by Groupe 24 on 22/12/2023.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>

// Fonction pour calculer l'intersection
int* intersection(int arr1[], int arr2[], int n1, int n2, int *tailleIntersection) {
    int i = 0, j = 0, k = 0;
    int *inter = static_cast<int *>(malloc(sizeof(int) * (n1 + n2)));

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* arr1[i] == arr2[j] */
        {
            inter[k++] = arr1[i++];
            j++;
        }
    }

    *tailleIntersection = k; // Mise à jour de la taille de l'intersection
    return inter;
}

// Fonction pour calculer l'union
int* unionTableaux(int arr1[], int arr2[], int n1, int n2, int *tailleUnion) {
    int i = 0, j = 0, k = 0;
    int *unionArr = static_cast<int *>(malloc(sizeof(int) * (n1 + n2)));

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            unionArr[k++] = arr1[i++];
        else if (arr2[j] < arr1[i])
            unionArr[k++] = arr2[j++];
        else {
            unionArr[k++] = arr1[i++];
            j++;
        }
    }

    // Copier les éléments restants
    while (i < n1)
        unionArr[k++] = arr1[i++];

    while (j < n2)
        unionArr[k++] = arr2[j++];

    *tailleUnion = k; // Mise à jour de la taille de l'union
    return unionArr;
}

int main() {
    int n1;
    int n2;

    int tailleIntersection, tailleUnion;

    std::cout << "Entrez le  nombre d'élément du tableau 1:" << std::endl;
    std::cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        std::cout << "Entrez l'élément " << i << " du tableau" << std::endl;
        std::cin >> arr1[i];
    }
    std::cout << "Entrez le  nombre d'élément du tableau 2:" << std::endl;
    std::cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        std::cout << "Entrez l'élément " << i << " du tableau" << std::endl;
        std::cin >> arr2[i];
    }

    int *inter = intersection(arr1, arr2, n1, n2, &tailleIntersection);
    int *unionArr = unionTableaux(arr1, arr2, n1, n2, &tailleUnion);

    printf("Intersection: ");
    for (int i = 0; i < tailleIntersection; i++)
        printf("%d ", inter[i]);
    printf("\n");

    printf("Union: ");
    for (int i = 0; i < tailleUnion; i++)
        printf("%d ", unionArr[i]);
    printf("\n");

    free(inter);
    free(unionArr);

    return 0;
}
