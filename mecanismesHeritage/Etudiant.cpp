#include "Etudiant.h"
#include <cstring>
#include <iostream>

using namespace std;

// Constructeur par défaut
Etudiant::Etudiant(int dummy) : Personne(dummy) {
    cout << "Construction d'un étudiant par défaut \n";
    strcpy(filiere, "");
    strcpy(departement, "");
    annee = -1;
    nuMat = -1;
}

// Constructeur avec paramètres
Etudiant::Etudiant(char *nom, char *prenom, int age, char sexe, char *lieuNaiss, int numTel, char* filiere, char* departement, int annee, int nuMat)
        : Personne(nom, prenom, age, sexe, lieuNaiss, numTel) {
    cout << "Construction d'un étudiant \n";
    strcpy(this->filiere, filiere);
    strcpy(this->departement, departement);
    this->annee = annee;
    this->nuMat = nuMat;
}

// Destructeur
Etudiant::~Etudiant() {
    cout << "Destruction d'un étudiant \n";
}

int main() {
    Etudiant jonathanSuru(1);
    // jonathanSuru.affiche();
    return 0;
}
