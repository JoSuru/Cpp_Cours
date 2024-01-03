#include <iostream>
#include <string>
using namespace std;

#ifndef PERSONNE_H
#define PERSONNE_H

class Personne {
public:
    // Constructeurs
    Personne(); // Constructeur par défaut
    Personne(const string& nom, const string& prenom, int age, char sexe, const string& lieuNaiss, int numTel); // Constructeur avec paramètres

    // Destructeur
    virtual ~Personne();

    // Setters
    void setNom(const string& nom);
    void setPrenom(const string& prenom);
    void setLieuNaiss(const string& lieuNaiss);
    void setSexe(char sexe);
    void setAge(int age);
    void setNumTel(int numTel);

    // Getters
    string getNom() const;
    string getPrenom() const;
    string getLieuNaiss() const;
    char getSexe() const;
    int getAge() const;
    int getNumTel() const;

    // Autres méthodes
    void affiche() const;
    void manger() const;
    void dormir() const;

    // Attribut statique
    static int nombreDePersonnes;

private:
    string nom;
    string prenom;
    int age;
    char sexe;
    string lieuNaiss;
    int numTel;
};

#endif // PERSONNE_H
