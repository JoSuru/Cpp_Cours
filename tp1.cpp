//
// Created by Jonathan Suru on 23/12/2023.
//
#include <iostream>

class Etudiant {
    // Zone des attributs
    std::string nom;
    std::string prenom;
    int age;
    char sexe;
    std::string lieuNaissance;
    std::string numeroTelephone;
    std::string universite;
    std::string faculte;
    std::string filiere;
    int anneeEtude;
    std::string numeroMatricule;
    std::string adresseEmail;

    // Zone des fonctionnalités
    void manger();
    void afficher();
    std::string toString();
    void dormir();
    void etudier();
    void seFaireEvaluer();
    void seDistraire();
};

class Enseignant {
    // Zone des attributs
    std::string nom;
    std::string prenom;
    int age;
    char sexe;
    std::string lieuNaissance;
    std::string numeroTelephone;
    std::vector<std::string> specialites;
    std::vector<std::string> matieresEnseignees;
    std::string emploiDuTemps;

    // Zone des fonctionnalités
    void manger();
    void afficher();
    std::string toString();
    void dormir();
    void enseigner();
    void conseiller();
    void orienter();
    void evaluerTravaux();
};

class Administratif {
    // Zone des attributs
    std::string nom;
    std::string prenom;
    int age;
    char sexe;
    std::string lieuNaissance;
    std::string numeroTelephone;
    std::vector<std::string> qualifications;
    std::vector<std::string> taches;
    std::string poste;
    std::string emploiDuTemps;

    // Zone des fonctionnalités
    void manger();
    void afficher();
    std::string toString();
    void dormir();
    void conseiller();
    void realiserTaches();
};

class Technicien {
    // Zone des attributs
    std::string nom;
    std::string prenom;
    int age;
    char sexe;
    std::string lieuNaissance;
    std::string numeroTelephone;
    std::vector<std::string> qualifications;
    std::string emploiDuTemps;

    // Zone des fonctionnalités
    void manger();
    void afficher();
    std::string toString();
    void dormir();
    void realiserTachesAttribuees();
};



int main(){
    // 1-
    std::cout << "1- Lorsqu'on limite le choix d'attributs d'une entité du monde réel à un sous-ensemble fini mais "
                 "représentatif pour nos besoins en programmation orientée objet (POO),"
                 "on parle d'abstraction. " << std::endl;
    // 2-
    std::cout << "2- Objet informatique : Un objet informatique est une entité au sein d'un programme informatique "
                 "qui encapsule des données et des méthodes pour manipuler ces données. Un objet est caractérisé"
                 "par son état (représenté par ses attributs ou propriétés) et son comportement (représenté par"
                 "des méthodes ou fonctions). Les objets sont les éléments de base de la POO et sont utilisés"
                 "pour modéliser des entités du monde réel ou des concepts abstraits.'" << std::endl;
    std::cout << " Classe : Une classe est une sorte de \"modèle\" ou \"plan\" qui définit les caractéristiques "
                 "et le comportement des objets. Elle spécifie quels attributs (données) les objets de cette "
                 "classe auront et quelles méthodes (fonctions) seront utilisées pour interagir avec ces "
                 "attributs. La classe définit donc la structure et les capacités de ses instances sans "
                 "les instancier concrètement." << std::endl;
    std::cout << "Instance de classe (ou objet) : Une instance de classe, souvent simplement appelée un "
                 "\"objet\", est une réalisation concrète d'une classe. Quand une classe est "
                 "\"instanciée\", elle prend la forme d'un objet dont les attributs ont des valeurs spécifiques. "
                 "Chaque instance d'une classe peut avoir des valeurs différentes pour ses attributs, mais partage"
                 "le même ensemble de méthodes définies par la classe. En d'autres termes, une instance est un"
                 "exemple spécifique d'une classe, tout comme une maison particulière est une instance du plan"
                 "architectural sur lequel elle a été construite." << std::endl;

    // 4-
    std::cout << "4- Une méthode qui permet de créer une instance d'un objet est appelée un constructeur. " << std::endl;

    std::cout << "L'identifiant d'une méthode constructeur dans la programmation orientée objet est généralement"
                 "le même que le nom de la classe à laquelle elle appartient. Le constructeur ne renvoie pas de"
                 "résultat, y compris void, car son rôle n'est pas de produire une valeur mais de préparer"
                 "(initialiser) une nouvelle instance de la classe, c'est-à-dire un nouvel objet." << std::endl;

    // 5-

}