//
// Created by simon on 25/05/2021.
//

#include <stdio.h>
#include "grille.h"
#include <stdlib.h>
#include <time.h>
#include"grille.h"
#include"fonctions_supplementaires.h"
#include "bateaux.h"
#include "inventaire.h"
#ifndef PROJETBATAILLENAVALE_MISSILE_H
#define PROJETBATAILLENAVALE_MISSILE_H

void verif(char tableau[10][10], char grille[10][10], int* ligne, int* colonne);


void impact(char tableau[10][10], char grille[10][10], int ligne, int colonne, int * nbimpact, boat *Bateaux2,boat *Bateaux3_1,boat *Bateaux3,boat *Bateaux4,boat *Bateaux5);

void bombe(char tableau[10][10], char grille[10][10], int ligne, int colonne, int* min1, int* min2, int* max1, int* max2);

char choix_type_missile(inventaire *NB_missile, char tableau[10][10], char grille[10][10], boat *Bateaux2,boat *Bateaux3_1,boat *Bateaux3,boat *Bateaux4,boat *Bateaux5, int visible);

void affichimpact(int  nbimpact);

void classique(char tableau[10][10], char grille[10][10], int ligne, int colonne, int * nbimpact, boat Bateaux2,boat Bateaux3_1,boat Bateaux3,boat Bateaux4,boat Bateaux5, int visible);


void artillerie(char tableau[10][10], char grille[10][10], int ligne, int colonne, int* nbimpact, boat Bateaux2,boat Bateaux3_1,boat Bateaux3,boat Bateaux4,boat Bateaux5, int visible);

void impacttact(char tableau[10][10], char grille[10][10], int ligne, int colonne, int * nbimpact, boat *Bateaux2,boat *Bateaux3_1,boat *Bateaux3,boat *Bateaux4,boat *Bateaux5);

#endif //PROJETBATAILLENAVALE_MISSILE_H
