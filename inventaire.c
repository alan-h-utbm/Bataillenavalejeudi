//
// Created by simon on 19/05/2021.
//
#include <stdio.h>
#include "grille.h"
#include <stdlib.h>
#include <time.h>
#include"grille.h"
#include"fonctions_supplementaires.h"
#include "bateaux.h"
#include "inventaire.h"

/**
 * permet d'initalizer l'inventaire du joueur en foncrion du niveau de difficulté choisi
 * @param difficulte
 * @return
 */
int munitions(char difficulte, inventaire* Nb_missile) {

    if (difficulte == 'F') {
        Nb_missile->artillerie = 10;
        Nb_missile->tactique = 10;
        Nb_missile->bombe = 10;
        Nb_missile->simple = 10;
    } else if (difficulte == 'M') {
        Nb_missile->artillerie = 3;
        Nb_missile->tactique = 5;
        Nb_missile->bombe = 5;
        Nb_missile->simple = 10;
    } else if (difficulte == 'D') {
        Nb_missile->artillerie = 1;
        Nb_missile->tactique = 4;
        Nb_missile->bombe = 2;
        Nb_missile->simple = 15;

    }

    return Nb_missile;
}