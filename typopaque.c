#include<stdlib.h>
#include <stdio.h>
#include"typeopaque.h"
#include "string.h"


struct Client_t
{
    char *nom;
    char age;
};
typedef struct Client_t Client;

//ON CREE LES FONCTION PERETTANT D MODIFIER LA STRUCT
//DE TYPE OPAQUE
Client* constructeur (char * nom,char age)
{
    Client *client = malloc(sizeof(Client));
    if(!client)//si client =null
        return NULL;
    client->age = age;
    client->nom = malloc(sizeof(char)*strlen(nom)+1);//+1 pour le caractere de fin de chaine
    if(client->nom == NULL)
    {
        free(client);
        return NULL;
    }
    strcpy(client->nom,nom);
    printf("Creation d'un client ( nom : %s , age : %d )\n",client->nom,client->age);
    return client;
}

void destructeur(Client *cliennn)
{
    if(cliennn->nom != NULL)
        free(cliennn->nom);
    cliennn->nom = NULL;

    if (cliennn != NULL)
        free(cliennn);
}


char* get_nom(Client *client)
{
    return client->nom;
}


char get_age(Client *client)
{
    return client->age;
}


char* set_nom(Client *client,char* nom)
{
    //on peu gere ici ce que rentre user 
    // ou struct elle meme exemple 
    if(!strcmp(nom , "Paul"))
    {
        printf("Nom Interdit par le setter\n");
        return 0;
    }
    client->nom = nom;
}


char set_age(Client *client,char age)
{
    client->age = age;
}




















































