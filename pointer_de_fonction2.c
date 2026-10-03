#include <stdio.h>



typedef struct
{
    int age;
    int money;
}User;

int comparer(void *p1,void *p2, int (*cmp)(void *,void *))
{
    return cmp(p1,p2);
}

int cmpUser (void *p11,void *p22)
{
    if((( User *)p11)->age > (( User *)p22)->age)//fleche au lieu du point dans une structure
    //la fleche dereference egalement pas besoin de * (strucct user *)
    {
        printf("L'age de l'user a est plus grand que celui du b \n");
    }
}


int main (void)
{

    User a , b;
    a.age = 50;
    a.money = 1000;
    b.age = 18;
    b.money = 750;
    printf("%d\n",comparer(&a,&b,cmpUser));




    return 0;
}