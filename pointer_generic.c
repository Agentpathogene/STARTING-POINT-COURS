#include <stdio.h>

//un pointer est une var qui contient l'adresse d'une autre var

typedef struct
{
    int a;
    int b;
}STR;



int main(void)
{

    STR s;
    STR *p = &s;
    //demonstration pointer dereferencement
    int a = 5;
    int *point = &a;
    printf("ce que vaux p :%p\n",point);
    printf("*p donc valeur que adresse que point p contient : %d\n",*point);

    p->a = 5;//comme ca qu on pointe vers var dans struct
    printf("La valeur de a est : %d\n",s.a);

    //POINTER GENERIC


    int entier = 1;
    float flottant = 2.5;
    void *pointergeneric = &entier; //peux stocker adresse de n importe quel type de donnes
    pointergeneric = &flottant;
    printf("que vaux floattant : %f\n",*(float*)pointergeneric);


    //et oui on dois caster de void a float
    //voici autre exemple de casting
    float pi = 3.14;
    int entierr = (int)pi;
    printf("pi en entier = %d\n",entierr);

    //MANIPULATION POINTER GENERIC

    void *pg = NULL;
    pg = &entierr;
    printf("%d\n",*(int*)pg);




    return 0;
}