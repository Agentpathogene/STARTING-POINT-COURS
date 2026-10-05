#include <stdio.h>
#include <stdlib.h>
//autre teste on cree un pointer de tableau de pointer d entier
//on boucle dans tableau pour donner memoie taille int a chaqun et attribuer valeur i

int main (void)

{


    int* *vec , n;
    
    printf("Entrez nb d'element :>");
    scanf("%d",&n);
    vec = malloc(n * sizeof(int*));
    for (int i = 0;i < n;i++)
    {
        vec[i] = malloc(sizeof(int));
        *vec[i] = i;
        printf("%d ",*vec[i]);
    }
    printf("\n");

    for (int i = 0;i < n;i++)
    {
        free(vec[i]);
    }
    free(vec);
}