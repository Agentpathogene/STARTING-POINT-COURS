#include <stdio.h>
#include <stdlib.h>
#include "typeopaque.h"

//en resume un type opaque est une struct dont on
//cache le contenu a l utilisateur on fournit seulement
//un pointer vers la struct qui elle est accessible que 
//dans le .c



int main (void)
{
    Client *p = NULL;
    //printf("%d\n",p->age) => peu pas car il connais 
    //pas contenance de client c est type opaque
    p = constructeur("Arthur",19);
    if (!p)//si p == NULL
    {
        perror("CLIENT ERROR\n");
        return -1;
    }

    //donc ici comme c'est un type opaque on ne peu pas 
    //acceder aux champs
    // on peu pas : printf("nom : %s age %d" p->nom,p->age)
 
    printf("Nom : %s\n",get_nom(p)); 
    printf("Age : %hhd\n",get_age(p)); 
    //le %hdd affiche la valeur numerique et pas celle
    //correspondant au code comme %c

    set_nom(p,"Paul");
    set_age(p,35);
    printf("Nom : %s\n",get_nom(p)); 
    printf("Age : %hhd\n",get_age(p)); 





    destructeur (p);
    p = NULL;//apres de alloc on fais pointer pointer
    //vers null afin eviter qu il pointe n importe ou






    return 0;
};