//
// Created by Jonathan Suru on 21/12/2023.
//

#include <iostream>
#include <string>
#include <ctime>


int main() {
    std::string name; // Nom du couple
    int wedding_years; // Année de mariage
    std::cout << "Salut qu'elle est votre Nom ?" << std::endl;
    std::cin >> name;
    std::cout << "Quelle est votre année de mariage ?" << std::endl;
    std::cin >> wedding_years;
    // Determiner l'année actuelle
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
    int current_years = 1900 + now->tm_year; // année actuelle
    int age  = current_years - wedding_years;

    if (age==1)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de coton !" << std::endl;
    else if (age==2)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de cuir !" << std::endl;
    else if (age==3)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de froment !" << std::endl;
    else if (age==4)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de cire !" << std::endl;
    else if (age==5)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de bois !" << std::endl;
    else if (age==10)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces d’étain !" << std::endl;
    else if (age==15)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de cristal !" << std::endl;
    else if (age==20)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de porcelaine !" << std::endl;
    else if (age==25)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces d’argent !" << std::endl;
    else if (age==30)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de perle !" << std::endl;
    else if (age==35)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de palissandre !" << std::endl;
    else if (age==40)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces d’émeraude !" << std::endl;
    else if (age==45)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de vermeil !" << std::endl;
    else if (age==50)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces d’or  !" << std::endl;
    else if (age==55)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces d’orchidée  !" << std::endl;
    else if (age==60)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de diamant !" << std::endl;
    else if (age==65)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de palissandre !" << std::endl;
    else if (age==70)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de platine !" << std::endl;
    else if (age==75)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces d’albâtre !" << std::endl;
    else if (age==80)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez vos noces de chêne !" << std::endl;
    else if (age>75)
        std::cout << "Mr. et Mme. " << name << ", vous fêtez un anniversaire de mariage sans précédent\n"
                                               "! Chaque jour doit être célébré avec faste !!!" << std::endl;
    return 0;
}

