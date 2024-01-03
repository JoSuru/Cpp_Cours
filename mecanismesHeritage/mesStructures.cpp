#include<iostream>
#include<string.h>

using namespace std ; /// pour eviter de faire std::

/// Création d'une structure Personne
typedef struct Personne Personne ;
struct Personne
{
    char nom[60], prenom[60] ;
    int age ;
    char sexe ;
    char lieuNaiss[60] ;
    int numTel ;
} ;

/**
Affiche une Personne
@pre : toto est une Personne correctement définie
@post : toto reste inchangée + affichage de la personne toto
@result : -
*/
void affichePersonne(Personne toto)
{
    cout << "Cette personne est : \n" ;
    cout << "\t nom = " << toto.nom << endl;
    cout << "\t prénom = " << toto.prenom << endl;
    cout << "\t age = " << toto.age << endl;
    cout << "\t sexe = " << toto.sexe << endl;
    cout << "\t lieuNaiss = " << toto.lieuNaiss << endl;
    cout << "\t numTel = " << toto.numTel << endl;   
}

/**
Renseigne une Personne
@pre : toto est une Personne 
@post : toto devient la Personne renseignée par l'utilisateur
@result : -
*/
void renseignePersonne(Personne &toto) 
// le & veux dire : "la fonction a le droit de modifier"
{
    cout << "SVP, donner les informations pour créer cette personne\n " ;
    cout << "\t nom = " ;
    cin >> toto.nom ;
    cout << "\t prenom = " ;
    cin >> toto.prenom ;
    cout << "\t age = " ;
    cin >> toto.age ;
    cout << "\t sexe = " ;
    cin >> toto.sexe ;
    cout << "\t lieuNaiss = " ;
    cin >> toto.lieuNaiss ;
    cout << "\t numTel = " ;
    cin >> toto.numTel ;
}

int main()
{
    Personne toto ; /// Declaration d'une Personne
    /// Déclaration puis initialisation
    Personne jonathan = {"MISSIHOUN", "Jonathan", 21, 'M', "Ouesse", 95615795} ;
    Personne armel ;
    ///FAUX : armel.nom = "MONGBE" ;
    strcpy(armel.nom, "MONGBE") ;
    strcpy(armel.prenom, "Armel") ;
    augustine.age = 22 ;
    augustine.sexe = 'M' ;
    strcpy(augustine.lieuNaiss, "Oumbega") ;
    augustine.numTel = 65729238 ;


#include <iostream>
#include <string>
    using namespace std;

// Classe représentant une personne
    class Personne {
    public:
        Personne() = default;
        Personne(string nom, string prenom, int age, char sexe, string lieuNaiss, int numTel)
                : nom(nom), prenom(prenom), age(age), sexe(sexe), lieuNaiss(lieuNaiss), numTel(numTel) {}

        void affiche() const {
            cout << "Cette personne est : \n";
            cout << "\t nom = " << nom << endl;
            cout << "\t prénom = " << prenom << endl;
            cout << "\t age = " << age << endl;
            cout << "\t sexe = " << sexe << endl;
            cout << "\t lieuNaiss = " << lieuNaiss << endl;
            cout << "\t numTel = " << numTel << endl;
        }

        void renseigne() {
            cout << "SVP, donner les informations pour créer cette personne\n";
            cout << "\t nom = "; cin >> nom;
            cout << "\t prenom = "; cin >> prenom;
            cout << "\t age = "; cin >> age;
            cout << "\t sexe = "; cin >> sexe;
            cout << "\t lieuNaiss = "; cin >> lieuNaiss;
            cout << "\t numTel = "; cin >> numTel;
        }

    private:
        string nom;
        string prenom;
        int age;
        char sexe;
        string lieuNaiss;
        int numTel;
    };

    int main() {
        Personne jonathan("MISSIHOUN", "Jonathan", 21, 'M', "Ouesse", 95615795);
        Personne remi("HOUANSINOU", "Rémi", 22, 'M', "Gnidonou", 51263968);
        Personne armel("MONGBE", "Armel", 22, 'M', "Oumbega", 65729238);


        jonathan.affiche();
        remi.affiche();
        armel.affiche();

        Personne toto;
        toto.renseigne();
        toto.affiche();

        return 0;
    }

}











