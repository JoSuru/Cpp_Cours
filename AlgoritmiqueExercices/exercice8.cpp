//
// Created by  Groupe 24  on 22/12/2023.
//

#include <iostream>

int main(){
    std::cout << "cotonou-ca-bouge : Non valide (contient des tirets)." << std::endl;
    std::cout << "αertβγ : Non valide (contient des caractères non-alphabétiques)." << std::endl;
    std::cout << "CotonouCaBouge : Valide." << std::endl;
    std::cout << "Mandela c’est un grand homme : Non valide (contient des espaces et un caractère spécial)." << std::endl;
    std::cout << "MandelaCestUnGrandHomme : Valide." << std::endl;
    std::cout << "+2K : Non valide (commence par un symbole et contient un chiffre en position initiale)." << std::endl;
    std::cout << "phone : Valide." << std::endl;
    std::cout << "ρsurface : Non valide (commence par un caractère non-alphabétique)." << std::endl;
    std::cout << "12bmatic : Non valide (commence par un chiffre)." << std::endl;
    std::cout << "76 magic : Non valide (commence par un chiffre et contient un espace)." << std::endl;
    std::cout << "cotonou ca bouge : Non valide (contient des espaces)." << std::endl;
    std::cout << "ca∀x : Non valide (contient un caractère spécial)." << std::endl;
    std::cout << "v∞reree : Non valide (contient un caractère spécial)." << std::endl;
    std::cout << "εθretient : Non valide (commence par un caractère non-alphabétique)." << std::endl;
    std::cout << "themen : Valide." << std::endl;
    std::cout << "fonctionn : Valide." << std::endl;
    std::cout << "Exercice3 : Valide." << std::endl;
    std::cout << "deux (02) manières : Non valide (contient des espaces et des parenthèses)." << std::endl;
    return 0;
}