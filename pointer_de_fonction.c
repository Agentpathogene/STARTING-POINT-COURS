#include<stdio.h>

//un pointer de fonction est une variable qui contient l'adress d'une autre fonction

void print(void)
{
    printf("coucou\n");

}

int ascichar(char c)
{
    printf("%c\n",c);
    return (int)c;
}
//POINTER == ADRESSMEMOIRE
//POINTER DEREFERENCE *p == CONTENU STOCKE A L ADRESSE
/*
fonction qui compare deux valeurs de type inconnu
retourne -1 si premier parametre > 2eme et 1 dans le cas contraire
*/
int compare(void *p1,void *p2,int (*cmp)(void *,void *))//on prend 2 valeur de tout type et la fonction de comparaison
{
    return cmp(p1,p2);
}
int cmpInt(void *p1,void *p2)
{
    return *(int *)p1 > *(int *)p2 ? 1 : -1;//on caste les 2 valeur de n importe quel type en entier et on applique une comparaison
}
int cmpFloat(void *p1,void *p2)
{
    return *(float *)p1 > *(float *)p2 ? 1 : -1;//on caste les 2 valeur de n importe quel type en entier et on applique une comparaison
}



int main (void)
{

    int ab = 5,bc = 6;
    printf("%d\n",compare(&ab,&bc,&cmpInt));

    float cbd = 13.14;
    float cbg = 6.7;
    printf("%d\n",compare(&cbd,&cbg,&cmpFloat));

    //afficher adress d'une fonction
    printf("%p %p\n",print,&print);

    //pointer de fonction
    void (*id)(void) = &print;
    //apelle de la fonction via pointer
    id();
    //ou plus precis deferencer pointer puis apelle fonction a aress
    (*id)();

    //a l image de id print est un pointer vers une fonction
    print();
    (*print)();

    //---
    int (*p)(char);
    p = &ascichar;
    p('E');


    return 0;
}