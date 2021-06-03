#include <stdio.h>
#include "grille.h"
#include <stdlib.h>
#include <time.h>
#include"grille.h"
#include"fonctions_supplementaires.h"
#include "bateaux.h"
#include "inventaire.h"
#include"missile.h"
#include "sauvegarde.h"
int main() {

    int colonne;
    int ligne;
int nbimpact;

    int min1, min2;
    int max1, max2;

    char grille[10][10]={0};
    char tableau[10][10];
    char level;
    char mode = 0;


    int visible=0;
    inventaire NB_missile;
    boat Bateaux2;
    boat Bateaux3;
    boat Bateaux3_1;
    boat Bateaux4;
    boat Bateaux5;

    char action;

    int choix_enregister_ou_charger;

    int completion=0;
int invvide=0;
    char type_missile ;
    char difficulte = 0;

// faire une fonction affichage pour chaque fin de programme





    //affiche menu princial+choix sur modes//
    level=debut_partie_choixlevel();


    if(level=='Q'){
        printf("fin du programme\n");
        return 0;

    } else if(level=='F' || level=='M'|| level=='D'){




        // initialise les deux grille avec des ______
        initgrille(grille, tableau);


        //genere les bateaux dans la grille

        genere_bateau(grille,&Bateaux2,&Bateaux3_1,&Bateaux3,&Bateaux4,&Bateaux5);


        mode=debut_partie_choixmode();


        NB_missile=munitions(level);

    } else if(level=='C'){


        charger(grille,tableau,&NB_missile,&Bateaux5,&Bateaux4,&Bateaux3,&Bateaux3_1,&Bateaux2);



    }




    if (mode=='B' || mode=='b'){
        visible=1;
    }









    //affiche la grillevierge
    grilleutilisateur(tableau);
    regles();





    //affiche grille avec bateaux
    affiche_grille(grille);



    //initialise le nb de munitions en fonction de ce qu'a choisit l'utilisateur
    NB_missile=munitions(difficulte);

    do {

        action=demande();
        if(action=='J'){

            type_missile=choix_type_missile(&NB_missile, tableau, grille, &Bateaux2, &Bateaux3_1, &Bateaux3, &Bateaux4, &Bateaux5, visible);
            verif(tableau, grille, &ligne, &colonne);


            if (type_missile == 'C' && NB_missile.simple != 0) {

                impact(tableau, grille, ligne, colonne, &nbimpact, &Bateaux2, &Bateaux3_1, &Bateaux3, &Bateaux4, &Bateaux5);
                //affichage

                affichecoup(tableau, grille, visible, nbimpact, &Bateaux2, &Bateaux3_1, &Bateaux3, &Bateaux4, &Bateaux5);

                nbimpact=0;

            } else if (type_missile == 'B' && NB_missile.bombe != 0) {


                bombe(tableau, grille, ligne, colonne, &min1, &min2, &max1, &max2);

                for (int k = min1; k <= max1; ++k) {
                    for (int l = min2; l <= max2; ++l) {

                        impact(tableau, grille, l, k, &nbimpact, &Bateaux2, &Bateaux3_1, &Bateaux3, &Bateaux4, &Bateaux5);
                    }
                }

                affichecoup(tableau, grille, visible, nbimpact, &Bateaux2, &Bateaux3_1, &Bateaux3, &Bateaux4, &Bateaux5);

                nbimpact=0;


            } else if (type_missile == 'A' && NB_missile.artillerie != 0) {


                for (int i = 0; i < 10; ++i) {
                    impact(tableau, grille, i, colonne, &nbimpact, &Bateaux2, &Bateaux3_1, &Bateaux3, &Bateaux4, &Bateaux5);
                }

                //applique impact sur toutes les colonnes de la croix

                for (int i = 0; i < 10; ++i) {
                    impact(tableau, grille, ligne, i, &nbimpact, &Bateaux2, &Bateaux3_1, &Bateaux3, &Bateaux4, &Bateaux5);
                }

                affichecoup(tableau, grille, visible, nbimpact, &Bateaux2, &Bateaux3_1, &Bateaux3, &Bateaux4, &Bateaux5);

                nbimpact=0;

            } else if (type_missile == 'T' && NB_missile.tactique != 0) {

            }

            if(Bateaux5.vie==0 && Bateaux4.vie==0 && Bateaux3_1.vie==0 && Bateaux3.vie==0 && Bateaux2.vie==0){
                completion=1;
                printf("Vous avez coule tout les Bateaux\n");
                printf("Vous avez gagne felicitations\n");
            }

            if(NB_missile.artillerie==0 && NB_missile.tactique==0 && NB_missile.simple==0 && NB_missile.bombe==0){

                invvide=1;
                if(completion!=1){
                    printf("vous n'avez plus de missile et n'avez pas coule tout les Bateaux\n");
                    printf("vous avez perdu\n");

                    //demander si il veut faire une nouvelle partie ou quitter
                }
            }





        } else {

            affiche_grille(grille);
            enregistrer(tableau,grille,&NB_missile,&Bateaux5,&Bateaux4,&Bateaux3,&Bateaux3_1,&Bateaux2);
            affiche_grille(grille);
        }



    } while (invvide==0 && completion==0);



    return 0;
}
