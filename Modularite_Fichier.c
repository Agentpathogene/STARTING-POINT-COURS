#include<stdio.h>
#include"perso.h"



//ON DOIT DONNER AU COMPILATEUR LE FICHIER OU EST LA FONCTION COUCOU
extern void coucou();

//LE MIEU EST DE COMPILER SEPAREMENT FICHIER POUR SAVOIR OU SONT ERREURS
// 1)__on cree les fichier object avec gcc -c nomdufoichier
//en suite gcc -o nomdelexe puis tout les fichier .o (object)

int main (void)
{
    coucou();
    coucou2();



    return 0;
}

