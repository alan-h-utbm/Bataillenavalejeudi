//
// Created by simon on 19/05/2021.
//

#include "fonctions_supplementaires.h"
#include <stdio.h>
#include "grille.h"
#include <stdlib.h>
#include <time.h>
#include"grille.h"
#include "bateaux.h"
#include<string.h>
#include<ctype.h>
#include <strings.h>

/** fonction qui affiche le menus du jeu et demande a l'utilisateur de choisir le niveau de difficulté
 * @return b le choix de level
 */
char debut_partie_choixlevel() {
    char a, b, c;
// affiche le menus de depart
    printf("\nBienvenue dans la bataille navale !\n\n");
    printf("Menu : \n");
    printf("    Demarrer une nouvelle partie (D)\n");
    printf("    Charger une partie existante (C)\n");
    printf("    Quitter (Q)\n");
    printf("Faites votre choix : \n");
    scanf("%c", &a);
    a = toupper(a);


    while (a != 'D' && a != 'C' && a != 'Q') {

        printf("\nErreur,la lettre entree ne correspond a aucun menus!\n");
        printf("Choississez la lettre de la partie souhaitee :\n");
        scanf(" %c", &a);
        a = toupper(a);
    }




//choix de la difficultée
        switch (a) {
            case 'Q' :
                return a;
                break;
            case 'C' :
                return a;
                break;
            case 'D' :
                fflush(stdin);
                printf("Choississez le niveau de difficulte :\n");
                printf("Facile (F)\n");
                printf("Moyen (M)\n");
                printf("Difficile (D)\n");
                gets(&b);
                b = toupper(b);

                while (b != 'F' && b != 'M' && b != 'D') {
                    printf("Erreur,la lettre entree ne correspond a aucun menus!\n");
                    printf("Veuillez choisir un niveau de difficulte : F, M ou D\n");
                    gets(&b);
                    b = toupper(b);

                }
                break;
        }
        return b;
    }




/**
 * fonction qui affiche le menus du jeu et permet retrourner le mode de jeu choisi par l'utilisateur
 * @return a le choix du mode
 */
char debut_partie_choixmode(){
    char a ;
            printf("\n");
            fflush(stdin);
            printf("Choissisez un mode de jeu :\n");
            printf("    Classique (C)\n");
            printf("    Blind (B)\n");
            printf("    Active (A)\n");
            scanf(" %c", &a);
            a = toupper(a);

            while (a != 'C' && a != 'B' && a != 'A') {
                printf("\n");
                printf("Erreur,la lettre entree ne correspond a aucun menus!\n");
                printf("choisissez un mode de jeu valide :");
                scanf(" %c", &a);
                a=toupper(a);
            }

    return a;


            }


