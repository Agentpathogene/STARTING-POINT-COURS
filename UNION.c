#include<stdio.h>

union rouge{ //la taill etotal dune union est egale a celle de son membre le plus grand
    unsigned eax;
    unsigned short ax;
    struct 
    {
        unsigned char al;
        unsigned char ah;
    };
};

int main (void)
{
    // AFFICHE 2 FOIS 5000 car ils partage meme zone memoire
    union rouge registre;
    registre.eax = 5000;
    printf("%u %hu\n",registre.eax,registre.ax);






    return 0;
}