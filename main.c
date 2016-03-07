/* 
 * File:   main.c
 * Author: ili817
 *
 * Created on January 23, 2013, 5:33 PM
 */
#include "header.h"


int main(/*int argc, char** argv*/) {
  fichier f,g;
    string nomdufichier;
    tabmot i;
    printf("Entrer le nom de votre fichier : \n ") ;
    scanf("%s",nomdufichier);


    g = ouvrir(nomdufichier,f);

    fgets(i->mot,10,f);

    i->lettre1 = i->mot[0];
    printf("  first %c mot %s ",i->lettre1,i->mot);

    fclose(f);
    return (EXIT_SUCCESS);
}

