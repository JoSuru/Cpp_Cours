//
// Created by Jonathan Suru on 22/12/2023.
//
#include <iostream>

int main(){
    int max, number1, number2, number3;
    std::cout << "Prémier nombre entier:" << std::endl;
    std::cin >> number1;
    std::cout << "Deuxième nombre entier:" << std::endl;
    std::cin >> number2;
    std::cout << "Troisième nombre entier:" << std::endl;
    std::cin >> number3;
    max = number1;
    if (max < number2)
        max = number2;
    if (max < number3)
        max = number3;
    std::cout << "Le maximum est: " << max << std::endl;
    return 0;
}