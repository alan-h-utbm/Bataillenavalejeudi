//
// Created by simon on 19/05/2021.
//

#ifndef PROJETBATAILLENAVALE_INVENTAIRE_H
#define PROJETBATAILLENAVALE_INVENTAIRE_H
typedef struct {
    int artillerie;
    int tactique;
    int bombe;
    int simple;

}inventaire;

int munitions(char difficulte, inventaire* Nb_missile);

#endif //PROJETBATAILLENAVALE_INVENTAIRE_H
