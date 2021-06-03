//
// Created by simon on 19/05/2021.
//

#include "bateaux.h"

#ifndef PROJETBATAILLENAVALE_GRILLE_H
#define PROJETBATAILLENAVALE_GRILLE_H

void initgrille(char grille[10][10], char tableau[10][10]);

void affiche_grille(char grille[10][10]);

void grilleutilisateur(char grille[10][10]);

void regles();

void affichecoup(char tableau[10][10], char grille[10][10], int visible, int nbimpact, boat* Bateaux2,boat* Bateaux3_1,boat* Bateaux3,boat* Bateaux4,boat* Bateaux5);



#endif //PROJETBATAILLENAVALE_GRILLE_H
