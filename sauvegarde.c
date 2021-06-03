//
// Created by simon on 29/05/2021.
//
#include     <stdio.h>
#include "grille.h"
#include <stdlib.h>
#include <time.h>
#include"grille.h"
#include"fonctions_supplementaires.h"
#include "bateaux.h"
#include "inventaire.h"
#include"missile.h"

#define FILE_NAME "partie.txt"


void enregistrer(char grille[10][10],char tableau[10][10], inventaire *NB_missile,boat *Bateaux5,boat *Bateaux4,boat *Bateaux3,boat *Bateaux3_1,boat *Bateaux2,char *mode){
    int k, m;
    FILE *f = fopen("partie.txt", "w");
    if (f == NULL) {
        printf("Error opening file!,\n");
        exit(1);
    } else {
        printf("fichier bien ouvert  \n");
        printf("Enregistrement....");


        rewind(f);

        for (k = 0; k < 10; k++) {
            for (m = 0; m < 10; m++) {

                fprintf(f,"%c",grille[k][m]);

            }
        }


        // fprintf(f,"A");
        for (k = 0; k < 10; k++) {
            for (m = 0; m < 10; m++) {
                fprintf(f,"%c",tableau[k][m]);
            }
        }

        fprintf(f,"B\n");
        fprintf(f, "%d\n", NB_missile->bombe);
        fprintf(f, "%d\n", NB_missile->artillerie);
        fprintf(f, "%d\n", NB_missile->tactique);
        fprintf(f,"%d\n",NB_missile->simple);

        fprintf(f,"%d\n",Bateaux5->vie);
        fprintf(f,"%d\n",Bateaux4->vie);
        fprintf(f,"%d\n",Bateaux3->vie);
        fprintf(f,"%d\n",Bateaux3_1->vie);
        fprintf(f,"%d",Bateaux2->vie);

        fprintf(f,"%c",Bateaux5->orientation);
        fprintf(f,"%c",Bateaux4->orientation);
        fprintf(f,"%c",Bateaux3->orientation);
        fprintf(f,"%c",Bateaux3_1->orientation);
        fprintf(f,"%c",Bateaux2->orientation);
        fprintf(f,"%c",*mode);

        fclose(f);
    }
}

void charger(char grille[10][10],char tableau[10][10], inventaire *NB_missile,boat *Bateaux5,boat *Bateaux4,boat *Bateaux3,boat *Bateaux3_1,boat *Bateaux2,char *mode){



    FILE *f = fopen("partie.txt", "rt");


    if (f == NULL) {
        printf("Error opening file!,\n");
        exit(1);
    } else {
        printf("fichier bien ouvert\n");
    }

    int i,j;

    char c;
    rewind(f);



    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            tableau[i][j]= fgetc(f);
        }
    }

    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            grille[i][j]= fgetc(f);
        }
    }

    /*
    while ((c = fgetc(f)) !='A') {
    }
*/


    rewind(f);
    while ((c = fgetc(f)) !=EOF) {
        if (c != 'B') {

        } else {
            fgetc(f);

            fscanf(f, "%d", &NB_missile->bombe);
            fscanf(f, "%d", &NB_missile->artillerie);
            fscanf(f, "%d", &NB_missile->tactique);
            fscanf(f, "%d", &NB_missile->simple);
            fscanf(f, "%d", &Bateaux5->vie);
            fscanf(f, "%d", &Bateaux4->vie);
            fscanf(f, "%d", &Bateaux3->vie);
            fscanf(f, "%d", &Bateaux3_1->vie);
            fscanf(f, "%d", &Bateaux2->vie);
            Bateaux5->orientation=fgetc(f);
            Bateaux4->orientation=fgetc(f);
            Bateaux3->orientation=fgetc(f);
            Bateaux3_1->orientation=fgetc(f);
            Bateaux2->orientation=fgetc(f);
            *mode= fgetc(f);




        }
    }



    fclose(f);
}