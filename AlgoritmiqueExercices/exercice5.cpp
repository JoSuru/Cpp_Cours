//
// Created by  Groupe 24  on 22/12/2023.
//
#include <iostream>
#include <string>
int main(){
    std::string last_name, first_name;

    std::cout << "Salut Quelle est votre Nom ?" << std::endl;
    std::cin >> last_name;
    std::cout << "Quelle est votre Prénom ?" << std::endl;
    std::cin >> first_name;
    std::cout << "Bonjour Monsieur " << last_name << " " << first_name << " !" << std::endl;
    return 0;
}