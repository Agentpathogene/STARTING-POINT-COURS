#include<stdio.h>
#include<math.h>
/*Une fonction est un morceau de code portable et reutilisable
qui effectue une seul operation*/

//creation d une fonction de calcul de factoriel vealeur reour entier du coup

int globaL = 1;//cett var declare hor sbloc est accessible partout
//Les variables local sont prioritaires sur les globales

int factoriel (int a)
{
    int x = 1;
    while(a > 1)
        x *= a--;
    return x;
}

void renvoirien (float a,float b)
{
    printf("%f\n",a+b);
    printf("%d\n",globaL);
}

void noparametre(void)
{
    printf("hello world\n");
}
//A SAVOIR UN RETURN STOP EXECUTION DE LA FONCTION
//oN PEUX METTRE FONCTION EN PARAMETRED DE FONCTION

void print(const int x)//constante
{

}


static int lol(int a)//fonction static propre au fichier
{//elle peu pas etre importee ailleurs
    {
        //BLOC ANONYME ET OUI CA PEU SE FAIRE
    }

}

inline int add(int a,int b)//fonction ultra courte traite commme
// equivatent dune macro par compilateur tres peu utiliser
{
    return a+b;
}


int main (void)
{
    int mainvar = 5;//limiter dans le bloc ou elle est ici main
    static int  z = 0;//reste en memoire meme apres fin d execution de la fonction
    //mais sa portee est uniquement dans fonction 
    //sert a enregister etat entre plusieurs exec de la func
    volatile int vol = 0;//Dit au compilateur de pas optimiser le code
    register int rg = 1;//var est pas stocke dans la ram mais dans registre du processeur 
    //donc accessible plus rapidement
    int x = 50;
    int test = 5;
    printf("cos de x en radian = %lf\n",cos(x));//utoilise fonction du module
    printf("5 factoriel = %d\n",factoriel(test));
    renvoirien(4.2,5.4);
    printf("%p\n",&factoriel);//affiche adress debut fonction
    return 0;
}