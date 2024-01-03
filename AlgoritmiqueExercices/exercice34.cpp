//
// Created by Groupe 24 on 23/12/2023.
//

#include <stdio.h>


#define NbrLMAX 50
#define NbrCMAX 50
void produitMatriciel() {
    double M1[NbrLMAX][NbrCMAX], M2[NbrLMAX][NbrCMAX];
    double M3[NbrLMAX][NbrCMAX] = {};
    int k = 0,l1,c1,l2,c2;
    printf("Entrez la taille de la matrice 1 :(ligne & colonne)\n");
    printf("Nombre de lignes : ");
    scanf("%u",&l1);
    printf("Nombre de colonnes : ");
    scanf("%u",&c1);
    if((l1 <1 || l1>=50) || (c1<1 || c1>=50)) {
        do {
            printf("Nombre de lignes ou Nombre de colonnes Invalide\nVeiller ressayer\n");
            printf("Nombre de lignes : ");
            scanf("%u",&l1);
            printf("Nombre de colonnes : ");
            scanf("%u",&c1);
        }while((l1 <1 || l1>=50) || (c1<1 || c1>=50));
    }
    printf("\n\nCréation de la Matrice 1 :\n\n");
    for(int i=0; i<l1; i++) {
        for(int j=0; j<c1; j++) {
            printf("M[%u][%u] = ",i+1,j+1);
            scanf("%lf",&M1[i][j]);
        }
    }


    printf("Entrez la taille de la matrice 2 :(ligne & colonne)\n");
    printf("Nombre de lignes : ");
    scanf("%u",&l2);
    printf("Nombre de colonnes : ");
    scanf("%u",&c2);
    if((l2 <1 || l2>=50) || (c2<1 || c2>=50)) {
        do {
            printf("Nombre de lignes ou Nombre de colonnes Invalide\nVeiller ressayer\n");
            printf("Nombre de lignes : ");
            scanf("%u",&l2);
            printf("Nombre de colonnes : ");
            scanf("%u",&c2);
        }while((l2 <1 || l2>=50) || (c2<1 || c2>=50));
    }
    printf("\n\nCréation de la Matrice 2 :\n\n");
    for(int i=0; i<l1; i++) {
        for(int j=0; j<c1; j++) {
            printf("M[%u][%u] = ",i+1,j+1);
            scanf("%lf",&M2[i][j]);
        }
    }

    if(c1 == l2) {
        for (int i=0; i<l1; i++)
            for (int j=0; j<c1; j++)
            {
                M3[i][j] = 0 ;
                for(k= 0 ; k<l1; k++)
                    M3[i][j] += M1[i][k]*M2[k][j];
            }
        for (int i=0; i<l1; i++){
            for (int j=0; j<c1; j++)
                printf("%8g", M3[i][j]);
            printf("\n");
        }
    }
    else
        printf("Opération Invalide\n");
}
void additionnerMatrice() {
    double M1[NbrLMAX][NbrCMAX], M2[NbrLMAX][NbrCMAX];
    double M3[NbrLMAX][NbrCMAX] = {};
    int a = 0, b=0; //variables d'aides
    int k = 0,l1,c1,l2,c2;

    printf("Enttrez la taille de la matrice 1 :(ligne & colonne)\n");
    printf("Nombre de lignes : ");
    scanf("%u",&l1);
    printf("Nombre de colonnes : ");
    scanf("%u",&c1);
    if((l1 <1 || l1>=50) || (c1<1 || c1>=50)) {
        do {
            printf("Nombre de lignes ou Nombre de colonnes Invalide\nVeiller ressayer\n");
            printf("Nombre de lignes : ");
            scanf("%u",&l1);
            printf("Nombre de colonnes : ");
            scanf("%u",&c1);
        }while((l1 <1 || l1>=50) || (c1<1 || c1>=50));
    }
    printf("\n\nCréation de la Matrice 1 :\n\n");
    for(int i=0; i<l1; i++) {
        for(int j=0; j<c1; j++) {
            printf("M[%u][%u] = ",i+1,j+1);
            scanf("%lf",&M1[i][j]);
        }
    }


    printf("Entrez la taille de la matrice 2 :(ligne & colonne)\n");
    printf("Nombre de lignes : ");
    scanf("%u",&l2);
    printf("Nombre de colonnes : ");
    scanf("%u",&c2);
    if((l2 <1 || l2>=50) || (c2<1 || c2>=50)) {
        do {
            printf("Nombre de lignes ou Nombre de colonnes Invalide\nVeiller ressayer\n");
            printf("Nombre de lignes : ");
            scanf("%u",&l2);
            printf("Nombre de colonnes : ");
            scanf("%u",&c2);
        }while((l2 <1 || l2>=50) || (c2<1 || c2>=50));
    }
    printf("\n\nCréation de la Matrice 2 :\n\n");
    for(int i=0; i<l1; i++) {
        for(int j=0; j<c1; j++) {
            printf("M[%u][%u] = ",i+1,j+1);
            scanf("%lf",&M2[i][j]);
        }
    }

    if((l1 == l2) && (c1==c2)) {
        for(int i=0; i<l1; i++) {
            for(int j=0; j<c1; j++) {
                M3[a][b] = M1[i][j] + M2[i][j];
                b++;
            }
            a++;
            b = 0;
        }
        for(int f=0; f<l1; f++) {
            for(int k=0; k<c1; k++) {
                printf("%8g",M3[f][k]);
            }
            printf("\n");
        }
    }
    else
        printf("Opéeration Invalide\n");
}

void differenceMatrice() {
    double M1[NbrLMAX][NbrCMAX], M2[NbrLMAX][NbrCMAX];
    double M3[NbrLMAX][NbrCMAX] = {};
    int a = 0, b=0; //variables d'aides
    int k = 0,l1,c1,l2,c2;

    printf("Entrez la taille de la matrice 1 :(ligne & colonne)\n");
    printf("Nombre de lignes : ");
    scanf("%u",&l1);
    printf("Nombre de colonnes : ");
    scanf("%u",&c1);
    if((l1 <1 || l1>=50) || (c1<1 || c1>=50)) {
        do {
            printf("Nombre de lignes ou Nombre de colonnes Invalide\nVeiller ressayer\n");
            printf("Nombre de lignes : ");
            scanf("%u",&l1);
            printf("Nombre de colonnes : ");
            scanf("%u",&c1);
        }while((l1 <1 || l1>=50) || (c1<1 || c1>=50));
    }
    printf("\n\nCréation de la Matrice 1 :\n\n");
    for(int i=0; i<l1; i++) {
        for(int j=0; j<c1; j++) {
            printf("M[%u][%u] = ",i+1,j+1);
            scanf("%lf",&M1[i][j]);
        }
    }


    printf("Entrez la taille de la matrice 2 :(ligne & colonne)\n");
    printf("Nombre de lignes : ");
    scanf("%u",&l2);
    printf("Nombre de colonnes : ");
    scanf("%u",&c2);
    if((l2 <1 || l2>=50) || (c2<1 || c2>=50)) {
        do {
            printf("Nombre de lignes ou Nombre de colonnes Invalide\nVeiller ressayer\n");
            printf("Nombre de lignes : ");
            scanf("%u",&l2);
            printf("Nombre de colonnes : ");
            scanf("%u",&c2);
        }while((l2 <1 || l2>=50) || (c2<1 || c2>=50));
    }
    printf("\n\nCréation de la Matrice 2 :\n\n");
    for(int i=0; i<l1; i++) {
        for(int j=0; j<c1; j++) {
            printf("M[%u][%u] = ",i+1,j+1);
            scanf("%lf",&M2[i][j]);
        }
    }

    if((l1 == l2) && (c1==c2)) {
        for(int i=0; i<l1; i++) {
            for(int j=0; j<c1; j++) {
                M3[a][b] = M1[i][j] - M2[i][j];
                b++;
            }
            a++;
            b = 0;
        }
        for(int f=0; f<l1; f++) {
            for(int k=0; k<c1; k++) {
                printf("%8g",M3[f][k]);
            }
            printf("\n");
        }
    }
    else
        printf("Opéeration Invalide\n");
}
void transposee() {
    double M2[NbrLMAX][NbrCMAX];
    int l2,c2,l,k,c;
    double M1[NbrLMAX][NbrCMAX] = {};//maitrice d'aide

    printf("Enttrez la taille de la matrice 1 :(ligne & colonne)\n");
    printf("Nombre de lignes : ");
    scanf("%u",&l2);
    printf("Nombre de colonnes : ");
    scanf("%u",&c2);
    if((l2 <1 || l2>=50) || (c2<1 || c2>=50)) {
        do {
            printf("Nombre de lignes ou Nombre de colonnes Invalide\nVeiller ressayer\n");
            printf("Nombre de lignes : ");
            scanf("%u",&l2);
            printf("Nombre de colonnes : ");
            scanf("%u",&c2);
        }while((l2 <1 || l2>=50) || (c2<1 || c2>=50));
    }
    printf("\n\nCréation de la Matrice  :\n\n");
    for(int i=0; i<l2; i++) {
        for(int j=0; j<c2; j++) {
            printf("M[%u][%u] = ",i+1,j+1);
            scanf("%lf",&M2[i][j]);
        }
    }
    for(int f=0; f<c; f++) {
        for(int k=0; k<l; k++) {
            printf("%8g",M1[k][f]);
        }
        printf("\n");
    }
}
int main(){
    int choix;
    printf("L'exercice 31 comporte trois questions\n");
    printf("1. Produit Matriciel\n");
    printf("2.Somme de matrice \n");
    printf("3.Difference de matrice \n");
    printf("4.Transposée d'une matrice\n");
    printf("Veuillez entrer le numéro correspondant pour tester les questions :");
    scanf("%d",&choix);
    switch(choix){
        case 1:
            produitMatriciel();
            break;
        case 2:
            additionnerMatrice();
            break;
        case 3:
            differenceMatrice();
            break;
        case 4:
            transposee();
            break;
        default:
            printf("Désolé mauvais choix\n Réessayer\n");
            break;
    }
}