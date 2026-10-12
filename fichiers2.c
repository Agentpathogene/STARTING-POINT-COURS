#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char str[100] = "";
    FILE *fp = fopen("test.txt","rt");//rb pour fichier binnaires
    if(!fp)
    {
        perror("Fichier non ouvert");
    }
    else
    {
        while(fscanf(fp,"%s",str) == 1)
        {
            printf("%s\n",str);
        }
        //POUR LIRE UNE 2EME FOIS IL FAUT 
        //RAMENER LE POINTER DE LECtURE AU DEBUT
        fseek(fp,3,SEEK_SET); //le flux l incrementation en octet de puis ou c 'est et la position
        //SEEK_CUR = position courante on peu lui dire d incrementer de 5 caractere de puis la ou de reculer d autat avec -5
        //SEEK_END = position fin du fichier
        while(fscanf(fp,"%s",str) == 1)
        {
            printf("%s\n",str);
        }
        rewind(fp); //remet le curseur a zero
        fclose(fp);

    }
    remove("test.txt"); //=> va effacer le fichieer
    //rename("premiernom","deuxiemenom") => renommer

    return 0;
}