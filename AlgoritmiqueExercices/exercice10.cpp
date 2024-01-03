//
// Created by  Groupe 24  on 22/12/2023.
//
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <iostream>

int main(){
    double x, Un;
    int n=0;
    std::cout << "Entrez une valeur positive pour x: " << std::endl;
    std::cin >> x;
    if (x < 0) {
        std::cout << "x doit être positif."<< std::endl;
        return 1;
    }
    Un = 2;
    while (fabs(Un - sqrt(x)) >= 0.0001) {
        printf("%d  %.10f\n", n, Un);
        Un = 0.5 * (Un + (x / Un));
        n++;
    }
    printf("%d  %.10f\n", n, Un);; // Affichage du dernier terme qui satisfait la condition
    return 0;

}