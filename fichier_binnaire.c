#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nom[21];
    unsigned solde;
    //si on a une struct la tout champ seront ecris
    //dans fichier si on a un pointer seulement l adress
}user;

int main (void)
{

    user user1 = {"Arthur",10000};//on peux faire tableau de struct
    int var[] = {1,2,3,4,5};
    //rename("test.txt","test.dat");
    FILE *fp = fopen("test.txt","wb");//rb pour la lecture
    if(!fp)
    {
        perror("mon message d erreur personalise");
    }
    else
    {   //pas de & car tableau si juste int &var
        fwrite(var,sizeof(int),5,fp); //retourne le nb d objet qu il a ecrit
        //4parametre pointer de donne quel taille et cb de fois ainsi que pointerd de fichiers 
        fwrite(&user1,sizeof(user),1,fp);

        fclose(fp);
    }
    FILE *pff = fopen("test.txt","rb"); 
    fseek(pff, sizeof(int) * 5, SEEK_SET);//fau ramener le curseur on bon lieur dc

    fread(&user1,sizeof(user),1,pff);//retourne nb d objects lu
    printf("%s\n%u\n",user1.nom,user1.solde);

    //ftell(flux) retourne en long (%ld) le nb d octet que le curseur a deja lu
    //on peu fseek en seek_end puis ftell pour avoir taille octet du fichier;..
    

    return 0;
}