
#include <stdio.h>
#include "grille.h"
#include <stdlib.h>
#include <time.h>
#include"grille.h"
#include"fonctions_supplementaires.h"
#include "bateaux.h"
#include "inventaire.h"
#include"missile.h"

#ifndef PROJETBATAILLENAVALE_SAUVEGARDE_H
#define PROJETBATAILLENAVALE_SAUVEGARDE_H


void enregistrer(char grille[10][10],char tableau[10][10], inventaire *NB_missile,boat *Bateaux5,boat *Bateaux4,boat *Bateaux3,boat *Bateaux3_1,boat *Bateaux2,char *mode);

void charger(char grille[10][10], char tableau[10][10],inventaire *NB_missile,boat *Bateaux5,boat *Bateaux4,boat *Bateaux3,boat *Bateaux3_1,boat *Bateaux2,char *mode);


#endif //PROJETBATAILLENAVALE_SAUVEGARDE_H