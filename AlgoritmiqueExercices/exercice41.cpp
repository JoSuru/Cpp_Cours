//
// Created by Groupe24 on 23/12/2023.
// Pour compiler  g++ -std=c++11 exercice41.cpp
//
#include <iostream>

using namespace std;

// Fonction pour déterminer si une année est bissextile ou non
bool isLeapYear(int year) {
    // Si l'année n'est pas divisible par 4, elle n'est pas bissextile
    if (year % 4 != 0) {
        return false;
    }
        // Si l'année est divisible par 100, elle doit aussi être divisible par 400 pour être bissextile
    else if (year % 100 == 0) {
        return year % 400 == 0;
    }
        // Sinon, l'année est bissextile si elle est divisible par 4
    else {
        return true;
    }
}

int main() {
    int year;
    cout << "Entrez une année pour vérifier si elle est bissextile ou non : ";
    cin >> year;

    if (isLeapYear(year)) {
        cout << year << " est une année bissextile." << endl;
    } else {
        cout << year << " n'est pas une année bissextile." << endl;
    }

    return 0;
}
