#include <stdio.h>


void swap(int var1,int var2)
{
    int tmp = var1; //PASSAGE PAR VALEUR
    var1 = var2;
    var2 = tmp;
}


void passage_par_pointer (int *var1,int *var2)
{
    int tmp = *var1;
    *var1 = *var2;
    *var2 = tmp;
}


int main(void)
{
    //cree un pointer vers adress 0 (rien)
    int *poi = NULL;
    int var = 5;

    int* monpointer = &var;          //un pointer fais 8 octet de taille
    *monpointer = 500; //modifi le contenu de la var dont le pointer pointe vers l adresse

    printf("valeur de var = %d\n",var);

    //POUR S AMUSER ON PEU CREER UN POINTER DE POINTER
    int** p = &monpointer;

    int v1 = 10,v2 =5;
    swap(v1,v2);//une copie des var a lieu dans swap mais elle vale idem apres func
    printf("eh oui ca  apas changer %d %d\n",v1,v2);

    //passage par pointers
    int lol1 = 10,lol2 = 5;
    passage_par_pointer(&lol1,&lol2);
    printf("quand on pass la valeur a adress ca change %d %d\n",lol1,lol2);




    return 0;
}