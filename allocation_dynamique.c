#include <stdio.h>
#include <stdlib.h>

int main (void)
{

    //avant on definissait la taille a a compilation
    int vecteur[10] = {1,2,3,4,5,6,7,8,9,9};
    //L ALLOCATION DYNAMIQUE permet de la definir apres compilation a l execution du programme
    int *vec = NULL, n;
    printf("entrez un nombre :");
    scanf("%d",&n);
    vec = malloc(sizeof(int)*n);//engros un entier = 4 octet * le nb entre par user
    for(int i =0;i< n;i++)
    {
        printf("%d\n",vec[i]);
    }
    //attention memoire alloue dynamiquement ne sera pas vide 
    //tant que le pc n'est pas eteint
    //librons memoire avec free
    free(vec);//sur premiere adress de zone memoire alouee

    //technique 1 pour le faire pointer vers un entier
    int *pointer = NULL;
    int y = 5;
    pointer = &y;

    //on peu faire ca
    int *po = NULL;
    po = malloc(sizeof(int));
    //si malloc ne sais pas alloue de la memoire il retourne null
    if (po == NULL)
    {
        printf("erreur\n");
    }
    else
    {
        *po = 6;
        printf("entier n = %d\n",*po);
        free(po); //important ca 
    }

    //le calloc comme malloc mais pour les vecteurs
    int *vect, f;
    vect = calloc(sizeof(int),f);//initialise toute case a 0
    //on peu faire un scanf pour entrer valeur dans f et tester
    printf("entrez un nombre :");
    scanf("%d",&f);
    for(int i =0;i< f;i++)
    {
        printf("%d\n",vect[i]);
    }
    free(vect);

    return 0;
}




