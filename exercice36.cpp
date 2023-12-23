//
// Created by Jonathan Suru on 23/12/2023.
//
#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> readArray() {
    int size;
    cout << "Entrez la taille du tableau: ";
    cin >> size;

    vector<int> array(size);
    cout << "Entrez les éléments du tableau en ordre croissant: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    return array;
}

vector<int> mergeAndRemoveDuplicates(const vector<int>& arr1, const vector<int>& arr2) {
    set<int> resultSet;  // Utilisation d'un set pour supprimer automatiquement les doublons
    resultSet.insert(arr1.begin(), arr1.end());
    resultSet.insert(arr2.begin(), arr2.end());

    return vector<int>(resultSet.begin(), resultSet.end());
}

int main() {
    cout << "Premier tableau:" << endl;
    vector<int> tab1 = readArray();

    cout << "Deuxième tableau:" << endl;
    vector<int> tab2 = readArray();

    vector<int> merged = mergeAndRemoveDuplicates(tab1, tab2);

    cout << "Tableau fusionné: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
