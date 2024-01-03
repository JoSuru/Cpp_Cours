//
// Created by  Groupe 24  on 22/12/2023.
//
#include <iostream>

int main(){
    int choice;
    std:: cout << "1. Effectuer une multiplication ?" << std::endl;
    std:: cout << "2. Effectuer une addition ?" << std::endl;
    std:: cout << "3. Effectuer une soustraction ?" << std::endl;
    std:: cout << "4. Effectuer une division ?" << std::endl;
    std:: cout << "Entrez votre choix: "<< std::endl;
    std::cin >> choice;

    // En utilisant uniquement des instructions si ... alors,
    if(choice==1)
        std::cout << "Vous avez choisi une multiplication" << std::endl;
    if(choice==2)
        std::cout << "Vous avez choisi une addition" << std::endl;
    if(choice==3)
        std::cout << "Vous avez choisi une soustraction" << std::endl;
    if(choice==4)
        std::cout << "Vous avez choisi une division" << std::endl;
    if(choice < 1 || choice > 4)
        std::cout << "Aucune opération ne correspondant à ce chiffre !" << std::endl;

    // En utilisant uniquement des instructions si ... alors ... sinon,
    if(choice==1)
        std::cout << "Vous avez choisi une multiplication" << std::endl;
    else if(choice==2)
        std::cout << "Vous avez choisi une addition" << std::endl;
    else if(choice==3)
        std::cout << "Vous avez choisi une soustraction" << std::endl;
    else if(choice==4)
        std::cout << "Vous avez choisi une division" << std::endl;
    else
        std::cout << "Aucune opération ne correspondant à ce chiffre !" << std::endl;

    // En utilisant une instruction suivant.
    switch (choice) {
        case 1:
            std::cout << "Vous avez choisi une multiplication" << std::endl;
            break;
        case 2:
            std::cout << "Vous avez choisi une addition" << std::endl;
            break;
        case 3:
            std::cout << "Vous avez choisi une soustraction" << std::endl;
            break;
        case 4:
            std::cout << "Vous avez choisi une division" << std::endl;
            break;
        default:
            std::cout << "Aucune opération ne correspondant à ce chiffre !" << std::endl;
    }
    return 0;
}