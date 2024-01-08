//
// Created by Groupe 24 on 08/01/2024.
//
#include <string>
#include <vector>
#include <iostream>

class Etudiant
{
public:
    // Zone des attributs


    std::string universite;
    std::string faculte;
    std::string filiere;
    int anneeDetude;
    int numeroMatricule;
    std::string adresseEmail;
    std::string nom;
    std::string prenoms;
    std::string lieuDeNaissance;
    std::string numeroDeTelephone;

    // Zone des fonctionnalités

    void etudier();
    void seFaireEvaluer();
    void seDistraire();
    void manger();
    void afficher();
    void toString();
    void dormir();

    // Constructeur par défaut
    Etudiant() {
        std::cout << " Création d’une instance d’Etudiant par le constructeur par défaut." << std::endl;
    };
    // Constructeur par copie
    Etudiant(const Etudiant&)
    {
        std::cout << " Création d’une instance d’Etudiant par le constructeur par copie." << std::endl;
    };

    // Constructeur avec tous les attributs
    Etudiant(std::string universite, std::string faculte, std::string filiere, int anneeDetude, int numeroMatricule, std::string adresseEmail)
    {
        std::cout << " Création d’une instance d’Etudiant par le constructeur avec tous les attributs." << std::endl;
    };

    // Destructeur
    ~Etudiant(){
        std::cout << "Destruction d’une instance d’Etudiant." << std::endl;
    };

};

class Enseignant
{
public:
    // Zone des attributs
    std::string specialite;
    std::string matiere;
    std::vector<std::string> emploiDuTemps;
    std::string nom;
    std::string prenoms;
    std::string lieuDeNaissance;
    std::string numeroDeTelephone;

    // Zone des fonctionnalités
    void enseigner();
    void conseiller();
    void orienter();
    void evaluer();
    void manger();
    void afficher();
    void toString();
    void dormir();

    // Constructeur par défaut
    Enseignant() {
        std::cout << " Création d’une instance d’Enseignant par le constructeur par défaut." << std::endl;
    };
    // Constructeur par copie
    Enseignant(const Enseignant &)
    {
        std::cout << " Création d’une instance d’Enseignant par le constructeur par copie." << std::endl;
    };

    // Constructeur avec tous les attributs
    Enseignant(std::string specialite, std::string matiere, std::vector<std::string> emploiDuTemps)
    {
        std::cout << " Création d’une instance d’Enseignant par le constructeur avec tous les attributs." << std::endl;
    };

    // Destructeur
    ~Enseignant(){
        std::cout << "Destruction d’une instance d’Enseignant." << std::endl;
    };
};

class Administratif
{
public:
    // Zone des attributs
    std::vector<std::string> qualifications;
    std::vector<std::string> tacheARealise;
    std::string poste;
    std::vector<std::string> emploiDuTemps;
    std::string nom;
    std::string prenoms;
    std::string lieuDeNaissance;
    std::string numeroDeTelephone;

    // Zone des fonctionnalités
    void conseiller();
    void realiseSesTache();
    void manger();
    void afficher();
    void toString();
    void dormir();

    // Constructeur par défaut
    Administratif() {
        std::cout << " Création d’une instance d’Administratif par le constructeur par défaut." << std::endl;
    };
    // Constructeur par copie
    Administratif(const Administratif &)
    {
        std::cout << " Création d’une instance d’Administratif par le constructeur par copie." << std::endl;
    };

    // Constructeur avec tous les attributs
    Administratif(std::vector<std::string> qualifications, std::vector<std::string> tacheARealise, std::string poste, std::vector<std::string> emploiDuTemps)
    {
        std::cout << " Création d’une instance d’Administratif par le constructeur avec tous les attributs." << std::endl;
    };
    // Destructeur
    ~Administratif(){
        std::cout << "Destruction d’une instance d’Administratif." << std::endl;
    };

};

class Technicien
{
public:
    // Zone des attributs
    std::vector<std::string> qualification;
    std::vector<std::string> emploiDuTemps;
    std::string nom;
    std::string prenoms;
    std::string lieuDeNaissance;
    std::string numeroDeTelephone;

    // Zone des fonctionnalités
    void realise();
    void manger();
    void afficher();
    void toString();
    void dormir();

    // Constructeur par défaut
    Technicien() {
        std::cout << " Création d’une instance d’Technicien par le constructeur par défaut." << std::endl;
    };
    // Constructeur par copie
    Technicien(const Technicien &other)
    {
        std::cout << " Création d’une instance d’Technicien par le constructeur par copie." << std::endl;
    };

    // Constructeur avec tous les attributs
    Technicien(std::vector<std::string> qualification, std::vector<std::string> emploiDuTemps)
    {
        std::cout << " Création d’une instance d’Technicien par le constructeur avec tous les attributs." << std::endl;
    };
    // Destructeur
    ~Technicien(){
        std::cout << "Destruction d’une instance d’Technicien." << std::endl;
    };
};


class Personne
{
    // Zone des attributs
protected:
    std::string nom;
    std::string prenoms;
    std::string lieuDeNaissance;
    std::string numeroDeTelephone;

    // Zone des fonctionnalités
    void manger();
    void afficher();
    void toString();
    void dormir();
};

int main(){
    // Allocation statique par invocation d’un constructeur
    Etudiant etudiantStatiqueParDefaut;

    // Allocation dynamique par utilisation de l’opérateur new
    // Etape 1 - déclaration du pointeur
    Etudiant* etudiantObjetDynamique ;
    // Etape 2 - Initialisation du pointeur + Invoccation constructeur
    etudiantObjetDynamique = new Etudiant ;
    // Etape 3 - Utilisation
    etudiantObjetDynamique;
    // Etape 4 - suppression de l’objet crée
    delete etudiantObjetDynamique ;
    Enseignant enseignantStatiqueParDefaut;
    // Allocation dynamique par utilisation de l’opérateur new
    // Etape 1 - déclaration du pointeur
    Enseignant* enseignantObjetDynamique ;
    // Etape 2 - Initialisation du pointeur + Invoccation constructeur
    enseignantObjetDynamique = new Enseignant ;
    // Etape 3 - Utilisation
    enseignantObjetDynamique;
    // Etape 4 - suppression de l’objet crée
    delete enseignantObjetDynamique ;
    Administratif administratifStatiqueParDefaut;
    // Allocation dynamique par utilisation de l’opérateur new
    // Etape 1 - déclaration du pointeur
    Administratif* administratifObjetDynamique ;
    // Etape 2 - Initialisation du pointeur + Invoccation constructeur
    administratifObjetDynamique = new Administratif ;
    // Etape 3 - Utilisation
    administratifObjetDynamique;
    // Etape 4 - suppression de l’objet crée
    delete administratifObjetDynamique ;
    Technicien technicienStatiqueParDefaut;
    // Allocation dynamique par utilisation de l’opérateur new
    // Etape 1 - déclaration du pointeur
    Technicien* technicienObjetDynamique ;
    // Etape 2 - Initialisation du pointeur + Invoccation constructeur
    technicienObjetDynamique = new Technicien ;
    // Etape 3 - Utilisation
    technicienObjetDynamique;
    // Etape 4 - suppression de l’objet crée
    delete technicienObjetDynamique ;
    return 0 ;

}