#include <stdio.h>
#ifndef PERSO_H // evite erreur de double inclusion de fichier
//ex on inclut lol.h et c.h qui lui meme inclut lol.h
#define PERSO_H
void coucou();
void coucou2()
{
    printf("coucou1\n");
}

#endif 