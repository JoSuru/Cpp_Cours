#include <iostream>
#include <string>
using namespace std;

class Personne {
public:
    Personne();
    Personne(const string& nom, const string& prenom, int age, char sexe,
             const string& lieuNaiss, int numTel);
    virtual ~Personne();
    void affiche() const;
    void manger() const;
    void dormir() const;
    static int nombreDePersonnes;

private:
    string nom, prenom, lieuNaiss;
    int age, numTel;
    char sexe;
};

int Personne::nombreDePersonnes = 0;

Personne::Personne() : nom(""), prenom(""), age(-1), sexe('M'), lieuNaiss(""), numTel(-1) {
    nombreDePersonnes++;
    cout << "Création d'une personne par défaut\n";
}

Personne::Personne(const string& nom, const string& prenom, int age, char sexe,
                   const string& lieuNaiss, int numTel)
        : nom(nom), prenom(prenom), age(age), sexe(sexe), lieuNaiss(lieuNaiss), numTel(numTel) {
    nombreDePersonnes++;
    cout << "Création d'une personne avec la liste de tous les attributs\n";
}

Personne::~Personne() {
    nombreDePersonnes--;
    cout << "Destruction d'une personne\n";
}

void Personne::affiche() const {
    cout << "Cette personne est : \n";
    cout << "\t nom = " << nom << "\n";
    cout << "\t prénom = " << prenom << "\n";
    cout << "\t age = " << age << "\n";
    cout << "\t sexe = " << sexe << "\n";
    cout << "\t lieuNaiss = " << lieuNaiss << "\n";
    cout << "\t numTel = " << numTel << "\n";
}

void Personne::manger() const {
    cout << "Je mange ! \n";
}

void Personne::dormir() const {
    cout << "Je dors ! \n";
}

class Etudiant : public Personne {
public:
    Etudiant();
    Etudiant(const string& nom, const string& prenom, int age, char sexe,
             const string& lieuNaiss, int numTel, const string& filiere,
             const string& departement, int annee, int nuMat);
    virtual ~Etudiant();
    void affiche() const;
    static int nombreDEtudiants;

private:
    string filiere, departement;
    int annee, nuMat;
};

int Etudiant::nombreDEtudiants = 0;

Etudiant::Etudiant() : Personne(), filiere(""), departement(""), annee(-1), nuMat(-1) {
    nombreDEtudiants++;
    cout << "Construction d'un étudiant par défaut\n";
}

Etudiant::Etudiant(const string& nom, const string& prenom, int age, char sexe,
                   const string& lieuNaiss, int numTel, const string& filiere,
                   const string& departement, int annee, int nuMat)
        : Personne(nom, prenom, age, sexe, lieuNaiss, numTel), filiere(filiere), departement(departement), annee(annee), nuMat(nuMat) {
    nombreDEtudiants++;
    cout << "Construction d'un étudiant\n";
}

Etudiant::~Etudiant() {
    nombreDEtudiants--;
    cout << "Destruction d'un étudiant\n";
}

void Etudiant::affiche() const {
    Personne::affiche();
    cout << "\t Filière = " << filiere << "\n";
    cout << "\t Département = " << departement << "\n";
    cout << "\t Année = " << annee << "\n";
    cout << "\t Numéro Matricule = " << nuMat << "\n";
}

class Enseignant : public Personne {
public:
    Enseignant();
    Enseignant(const string& nom, const string& prenom, int age, char sexe,
               const string& lieuNaiss, int numTel, const string& matieres,
               const string& specialites, const string& emploiTemps);
    virtual ~Enseignant();
    void affiche() const;
    static int nombreDEnseignants;

private:
    string matieres, specialites, emploiTemps;
};

int Enseignant::nombreDEnseignants = 0;

Enseignant::Enseignant() : Personne(), matieres(""), specialites(""), emploiTemps("") {
    nombreDEnseignants++;
    cout << "Construction d'un enseignant par défaut\n";
}

Enseignant::Enseignant(const string& nom, const string& prenom, int age, char sexe,
                       const string& lieuNaiss, int numTel, const string& matieres,
                       const string& specialites, const string& emploiTemps)
        : Personne(nom, prenom, age, sexe, lieuNaiss, numTel), matieres(matieres), specialites(specialites), emploiTemps(emploiTemps) {
    nombreDEnseignants++;
    cout << "Construction d'un enseignant\n";
}

Enseignant::~Enseignant() {
    nombreDEnseignants--;
    cout << "Destruction d'un enseignant\n";
}

void Enseignant::affiche() const {
    Personne::affiche();
    cout << "\t Matières = " << matieres << "\n";
    cout << "\t Spécialités = " << specialites << "\n";
    cout << "\t Emploi du temps = " << emploiTemps << "\n";
}

int main() {
    // Exemples d'utilisation des classes Personne, Etudiant, Enseignant
    Personne personne("HINVI", "Josué", 23, 'M', "Calavi", 123456789);
    personne.affiche();
    personne.manger();
    personne.dormir();

    Etudiant etudiant("ABDOULAYE", "Arafath", 20, 'M', "Parakou", 987654321, "MIA", "FAST", 3, 20942921);
    etudiant.affiche();

    Enseignant enseignant("Baba", "Chris", 45, 'M', "Cotonou", 112233445, "Mathématiques", "Algèbre", "Lundi 10h-12h");
    enseignant.affiche();

    return 0;
}
