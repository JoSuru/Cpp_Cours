//
// Created by Groupe24 on 23/12/2023.
// Pour compiler  g++ -std=c++11 exercice39.cpp
//
#include <stdio.h>

int main(void)
{
    int a, b ;
    printf("Donner la valeur de l’entier a : ") ;
    scanf("%d", &a) ;
    printf("Donner la valeur de l’entier b : ") ;
    scanf("%d", &b) ;

    printf("La valeur entré de l’entier a est : %d\n", a);
    printf("La valeur entré de l’entier b est : %d\n", b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("La valeur actuelle de l’entier a est : %d\n", a);
    printf("La valeur actuelle de l’entier b est : %d\n", b);

    printf(" Ce programme échange les valeurs de deux variables a et b sans utiliser de variable temporaire."
           "Il utilise une série d'opérations arithmétiques pour réaliser l'échange.");
    return 0 ;
}