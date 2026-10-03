#include<stdio.h>

//QU EST CE QU'UN VECTEUR ?
/*Un vecteur est une suite de nombre stocke de maniere
continue en memoire*/



int main (void)
{
    //declaration d'un vecteur d'entier
    //on initialise chacune des case du vecteur a 0
    //sino on peu chainer valeur {0,4,7*7,4,8}
    int vec[10] = {0};//en gros vec pointe vers une zone memoire
    //qui contient 10 entier l'un a la suite de l'autre
    printf("vec = %p\n",vec);
    int i;
    for (i = 0;i< 10;i++)
    {
        printf("valeur %d adresse :%p\n",vec[i],&vec[i]);
    }

    //un vecteur peu contenir des struct pointer de fonction etc fin bref tout
    printf("%d\n",*(vec+1));

    //un tableau est comme une matrice elle peux avoir plusieurs dimensions
    //un tableau dont chacune des case pointe vers le premier element d un vecteur
    int tab [2][5]= {
        {1,2,3,4,5},
        {6,7,8,9,10}
       
    };
    tab[0][2] = 4;
    int a,b;
    for (a = 0; a< 2;a++)    
    {
        for(b= 0; b< 5;b++)
        {
            printf("%d ",tab[a][b]);
        }
        printf("\n");
    }




    return 0;
}