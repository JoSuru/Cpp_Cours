#include <iostream>
#include <string>

using namespace std;

/*****************************************************************************
 * CLASSE PERSONNE
 *****************************************************************************/

class Personne {
    static int compteurPersonnes;

public:
    // Constructeurs
    Personne();
    Personne(const string& nom, const string& prenom, int age, char sexe, const string& lieuNaissance, int numeroTelephone);
    // Destructeur
    virtual ~Personne();

    // Méthodes pour modifier les attributs (setters)
    void setNom(const string& nom);
    void setPrenom(const string& prenom);
    void setLieuNaissance(const string& lieu);
    void setSexe(char sexe);
    void setAge(int age);
    void setNumeroTelephone(int numero);

    // Méthodes pour accéder aux attributs (getters)
    string getNom() const;
    string getPrenom() const;
    string getLieuNaissance() const;
    char getSexe() const;
    int getAge() const;
    int getNumeroTelephone() const;

    // Autres méthodes
    void afficher() const;
    void manger() const;
    void dormir() const;

private:
    string nom, prenom, lieuNaissance;
    int age;
    char sexe;
    int numeroTelephone;
};

/*****************************************************************************
 * CLASSE ETUDIANT
 *****************************************************************************/

class Etudiant : public Personne {
    static int compteurEtudiants;

public:
    Etudiant();
    Etudiant(const string& nom, const string& prenom, int age, char sexe, const string& lieuNaissance, int numeroTelephone, const string& filiere, const string& departement, int annee, int numeroMatricule);
    ~Etudiant();

    void etudier() const;
    void seFaireEvaluer() const;
    void afficher() const;

private:
    string filiere, departement;
    int annee, numeroMatricule;
};

/*****************************************************************************
 * CLASSE ENSEIGNANT
 *****************************************************************************/

class Enseignant : public Personne {
    static int compteurEnseignants;

public:
    Enseignant();
    Enseignant(const string& nom, const string& prenom, int age, char sexe, const string& lieuNaissance, int numeroTelephone, const string& matieres, const string& specialites, const string& emploiDuTemps);
    ~Enseignant();

    void enseigner() const;
    void conseiller() const;
    void orienter() const;
    void afficher() const;

private:
    string matieres, specialites, emploiDuTemps;
};
