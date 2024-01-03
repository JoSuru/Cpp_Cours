#include <iostream>

#ifndef ENSEMBLE_H
#define ENSEMBLE_H

#define MAX_SIZE 1000

class Ensemble {
public:
    // Constructeurs
    Ensemble(); // Constructeur par défaut : crée un ensemble vide
    Ensemble(int e); // Constructeur pour initialiser avec un élément singleton
    Ensemble(int A[], int n); // Constructeur pour initialiser avec un tableau d'éléments

    // Destructeur
    virtual ~Ensemble();

    // Méthodes publiques
    int add(int e); // Ajoute un élément à l'ensemble, retourne 0 si ajouté, -1 sinon
    void affiche(); // Affiche les éléments de l'ensemble

private:
    unsigned int n; // Nombre d'éléments dans l'ensemble
    int elem[MAX_SIZE]; // Tableau stockant les éléments de l'ensemble
};

#endif // ENSEMBLE_H
