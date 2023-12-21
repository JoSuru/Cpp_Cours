//
// Created by Jonathan Suru on 22/12/2023.
//
#include <iostream>
int main( ){
    unsigned  int number;
    std::cout << "Donnez un entier naturel:" << std::endl;
    std::cin >> number;
    if (number > 100)
        std::cout << "Avertissement : dépassement de capacité." << std::endl;
    else
        if (number%2 == 0) // Vérifie si n est pair
        {
            number = (number + 20) / 2;
            std::cout << "Résultat : " << number << std::endl;
        }
        else {
            if (number > 31)
                number -= 15;
            std::cout << "Résultat : " << number << std::endl;
        }

    return 0;
}