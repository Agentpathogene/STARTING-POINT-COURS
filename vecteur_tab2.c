#include<stdio.h>
#define MAX 5

void print_vec(int *vec,const int nbel)
{
    int i;
    for (i = 0;i < nbel;i++)
    {
        printf("%d\n",vec[i]);
    }
}

typedef struct
{
    int a;
    int b;
}STR;

int plus(int a,int b)
{
    return a + b;
}

int moins(int a,int b)
{
    return a - b;
}
int fois(int a,int b)
{
    return a * b;
}
int diviser(int a,int b)
{
    return a / b;//devision entiere ducoup 
}

int main (void)
{

    int v[5];
    for(int i = 0; i< 5;i++)
    {
        printf("Entrez valeur numero %d du vecteur (tab de 1 dimension):>>",i);
        fscanf(stdin,"%d",&v[i]);
        printf("v %d = %d\n",i,v[i]);
    }
    //et oui c est dix valeur continu on peux ecrire aussi comme ca
    //rappelons que plusieurs dimensions genre 10 sont tout a fais possible 
    int t[2][5] = {1,2,3,4,5,6,7,8,9,10};
    //la taille du vecteur et definit a compilation on peu pas faire de scanf dessus

    int vec[MAX] = {0};
    int vecteur[10] = {0};
    print_vec(&vecteur[0],10);

    //VECTEUR DE STRUCT ENUM UNION
    STR vvec[10] = {{1,2},{3,4},{5,6}};
    printf("%d\n",vvec[2].a);
    char vecc[5] = {'P','W','N','E','D'};
    for(int i = 0; i < 5 ; i ++)
    {
        printf("%c",vecc[i]);
    }

    printf("\n");

    //UN VECTEUR DE POINTER DEFONCTION
    int (*operation[5])(int , int) = {plus ,moins ,fois,diviser}; //pointer vers func qui retourne un entier et prend en paramettre deux entiers

//EVITE LE SWITCH CASE
    int choix;
    printf("Entrez choix operatiion en forme d'indice:>>");
    scanf("%d",&choix);
    printf("%d\n",operation[choix](17,5));

//on peu aussi faire une enum de const ADD,SUB etc qui est automatiquement
//en valeur increment 0,1,2 etc et donne genre SUb en parametre de EXEMPLE = operation[SUB]


    return 0;
}