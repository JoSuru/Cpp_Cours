#include "Personne.h"
#include <iostream>
#include <string>

using namespace std;

// Initialisation des attributs statiques
int Personne::nombreDePersonnes = 0;

Personne::Personne() : age(-1), sexe('M'), numTel(-1) {
    nombreDePersonnes++;
    cout << "Création d'une personne par défaut\n";
    cout << "Il y a maintenant " << nombreDePersonnes << " Personne(s) dans le programme\n";
}

Personne::Personne(const string& nom, const string& prenom, int age, char sexe, const string& lieuNaiss, int numTel)
        : nom(nom), prenom(prenom), age(age), sexe(sexe), lieuNaiss(lieuNaiss), numTel(numTel) {
    nombreDePersonnes++;
    cout << "Création d'une personne avec la liste de tous les attributs\n";
    cout << "Il y a maintenant " << nombreDePersonnes << " Personne(s) dans le programme\n";
}

Personne::~Personne() {
    cout << "Déstruction d'une personne\n";
    nombreDePersonnes--;
    cout << "Il reste " << nombreDePersonnes << " Personne(s) dans le programme\n";
}

void Personne::affiche() const {
    cout << "Cette personne est : \n";
    cout << "\t nom = " << nom << endl;
    cout << "\t prénom = " << prenom << endl;
    cout << "\t age = " << age << endl;
    cout << "\t sexe = " << sexe << endl;
    cout << "\t lieuNaiss = " << lieuNaiss << endl;
    cout << "\t numTel = " << numTel << endl;
}

void Personne::manger() const {
    cout << "Je mange ! \n";
}

void Personne::dormir() const {
    cout << "Je dors ! \n";
}


