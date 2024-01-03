#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "Personne.h"
#include <string>

class Etudiant : public Personne {
public:
    // Constructeur par défaut
    Etudiant(int dummy);

    // Constructeur avec paramètres
    Etudiant(const std::string& nom, const std::string& prenom, int age, char sexe,
             const std::string& lieuNaiss, int numTel, const std::string& filiere,
             const std::string& departement, int annee, int nuMat);

    // Destructeur
    virtual ~Etudiant();

    // Méthodes spécifiques à Etudiant
    void etudier();
    void seFaireEvaluer();

private:
    std::string filiere;
    std::string departement;
    int annee;
    int nuMat;
};

#endif // ETUDIANT_H
