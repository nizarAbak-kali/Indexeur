#include"header.h"



//fichier ou l'on va definir les fonctions de lecture ainsi que de comparaison


//ouverture
fichier ouvrir(string nomdefichier,fichier f){
    f =fopen("nomdeficher","rw");

    if (f){
        printf("le fichier existe et est en ouverture en ectriture/lecture ");

    }
    if (!f){
        printf("le fichier n'existe pas");
    }
    return f ;

}

//lecture

