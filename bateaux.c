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


void convertit_donnee_grille_en_boat(char grille[10][10],boat *Bateaux2,boat *Bateaux3_1,boat *Bateaux3,boat *Bateaux4,boat *Bateaux5){

}




/**
 * genere des les differents bateaux dans la grille sans qu'il se chevauchent cc
 * @param grille
 */
void genere_bateau(char grille[10][10],boat *Bateaux2,boat *Bateaux3_1,boat *Bateaux3,boat *Bateaux4,boat *Bateaux5) {
    srand(time(0));

    int x, y;
    int a;
//génère le bateaux(5)
    do {
        x = rand() % 10 ;
        y = rand() % 10 ;
    } while (x > 5 || y > 5);
    grille[y][x]='5';

    a =rand()%2;

    if (a == 0) {
        grille[y][x + 1] = '5';
        grille[y][x + 2] = '5';
        grille[y][x + 3] = '5';
        grille[y][x + 4] = '5';
    } else {
        grille[y + 1][x] = '5';
        grille[y + 2][x] = '5';
        grille[y + 3][x] = '5';
        grille[y + 4][x] = '5';
    }
//remplit les information du bateau générer dans la structure boat correspondante
    if(a==0){

        Bateaux5->orientation='H';
    }else{
        Bateaux5->orientation='V';
    }
    Bateaux5->taille=5;
    Bateaux5->vie=5;
    Bateaux5->x=x;
    Bateaux5->y=y;






//génère le bateaux(4)
    do {
        x = rand() % 10;
        y = rand() % 10;
    } while (x > 6 || grille[y][x + 1] != '_' || grille[y][x + 2] != '_' ||
             grille[y][x + 3] != '_' ||y > 6 || grille[y + 1][x] != '_' || grille[y + 2][x] != '_' ||
             grille[y + 3][x] != '_');

    grille[y][x] = '4';


    a =rand()%2;

    if (a == 0) {
        grille[y][x + 1] = '4';
        grille[y][x + 2] = '4';
        grille[y][x + 3] = '4';

    } else {
        grille[y + 1][x] = '4';
        grille[y + 2][x] = '4';
        grille[y + 3][x] = '4';

    }
//remplit les information du bateau générer dans la structure boat correspondante
    if(a==0){

        Bateaux4->orientation='H';
    }else{
        Bateaux4->orientation='V';
    }
    Bateaux4->taille=4;
    Bateaux4->vie=4;
    Bateaux4->x=x;
    Bateaux4->y=y;


//génère le bateaux 3

    do {
        x = rand() % 10;
        y = rand() % 10;
    } while (x > 7 || grille[y][x + 1] != '_' || grille[y][x + 2] != '_' ||
             y > 7 || grille[y + 1][x] != '_' || grille[y + 2][x] != '_');
    grille[y][x] = '3';


    a = rand() % 2;

    if (a == 0) {
        grille[y][x + 1] = '3';
        grille[y][x + 2] = '3';


    } else if (a == 1) {
        grille[y + 1][x] = '3';
        grille[y + 2][x] = '3';
    }
    //remplit les information du bateau générer dans la structure boat correspondante

    if(a==0){

        Bateaux3->orientation='H';
    }else{
        Bateaux3->orientation='V';
    }
    Bateaux3->taille=3;
    Bateaux3->vie=3;
    Bateaux3->x=x;
    Bateaux3->y=y;



//génère le bateaux 3_1
    do {
        x = rand() % 10;
        y = rand() % 10;
    } while (x > 7 || grille[y][x + 1] != '_' || grille[y][x + 2] != '_' ||
             y > 7 || grille[y + 1][x] != '_' || grille[y + 2][x] != '_');
    grille[y][x] = '1';


    a = rand() % 2;

    if (a == 0) {
        grille[y][x + 1] = '1';
        grille[y][x + 2] = '1';


    } else if (a == 1) {
        grille[y + 1][x] = '1';
        grille[y + 2][x] = '1';
    }


//remplit les information du bateau générer dans la structure boat correspondante
    if(a==0){

        Bateaux3_1->orientation='H';
    }else{
        Bateaux3_1->orientation='V';
    }
    Bateaux3_1->taille=3;
    Bateaux3_1->vie=3;
    Bateaux3_1->x=x;
    Bateaux3_1->y=y;





//génère le bateaux 2

    do {
        x = rand() % 10;
        y = rand() % 10;
    } while (x > 8 || grille[y][x + 1] != '_' || y > 8 || grille[y + 1][x] != '_');

    grille[y][x]='2';


    a =rand()%2;
    if (a == 0) {
        grille[y][x+1]='2';

    } else if (a == 1) {
        grille[y+1][x]='2';
    }
//remplit les information du bateau générer dans la structure boat correspondante
    if(a==0){

        Bateaux2->orientation='H';
    }else{
        Bateaux2->orientation='V';
    }
    Bateaux2->taille=2;
    Bateaux2->vie=2;
    Bateaux2->x=x;
    Bateaux2->y=y;
}










