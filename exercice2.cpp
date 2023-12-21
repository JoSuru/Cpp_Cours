//
// Created by Jonathan Suru on 22/12/2023.
//
#include <iostream>


int main() {
    float age;
    int volume;
    std::cout << "Quelle est l'âge du crane ?" << std::endl;
    std::cout << "Exprimer en million d’années. Exemple: xx Ma" << std::endl;
    std::cin >> age;
    std::cout << "Quelle est le volume du crane ?" << std::endl;
    std::cin >> volume;
    if (-0.035 <= age && volume == 1350)
        std::cout << "Homo sapiens!" << std::endl;
    else if (-0.35 <= age && age <= -0.035 && 1200 <= volume && volume <=1750)
        std::cout << "Homme de Néandertal!" << std::endl;
    else if (-1.9 <= age && age <= -0.3 && 700 <= volume && volume <= 1300)
        std::cout << "Homo erectus!" << std::endl;
    else if (-2.4 <= age && age <= -1.6 && 550 <= volume && volume <= 750)
        std::cout << "Homo habilis!" << std::endl;
    else if (-4.2 <= age && age <= -2.5 && 300 <= volume && volume <= 530)
        std::cout << "Australopithèque!" << std::endl;
    else
        std::cout << "Espèce d’hominidé non encore répertoriée dans la base. " << std::endl;
    return 0;
}