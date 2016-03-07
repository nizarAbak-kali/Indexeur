/* 
 * File:   header.h
 * Author: ili817
 *
 * Created on January 23, 2013, 6:16 PM
 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char * string;
typedef FILE* fichier;


struct list{
    int pages;
    struct list * next;
 };
typedef struct list list;

 struct Tmot{
     char lettre1;
     string mot;
     int nombre_d_apparition;
     list pages_d_apparition;
};

typedef struct Tmot* tabmot;
// contient le nom du fichier
struct table{
    string nomdufichier;
    tabmot index;
};



fichier ouvrir(string,fichier);
