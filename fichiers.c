#include <stdio.h>
#include <stdlib.h>

int main (void)
{

    char str[] = "hello world\n";
    char car = '#';
    char buffer = 0;

    //la fonction fopen
    //premier parametre == nom du fichier
    //deuxieme parametre == chaine de caractere
    //qui correspond au mode d ouverture du fichier
    //FILE est un type opaque definit dans stdio.h qui contient
    //tout ce dont la biblio a besoion pour gerer le fichier
    //si il ne trouve pas de fichier il en cree un
    FILE *fp = fopen("test.txt","wt");  //wt pour write text
    //on a aussi "at" qui ouvre un fichier le cree si il existe pas l'ecrase pas si il existe
    //la regle bonne conduite idem el allocation dynamique
    if(!fp)//si fp est NULL
    {
        perror("affiche msg d erreur personalise + recupere celui de l ordi\n");
    }
    else
    {
        //code de manip du fichier
        //cet fonction prend en parametre un car et le flux "fichier" dans le quel elle l ecrit
        //n oublions pas fichier est flux on peu mettre stdout ....
        fputc(car ,fp);
        //pareil mais pour une string
        fputs(str,fp);
        //egalenment possible avec printf juste specifier le pointer de fichier fp comme flux
        fprintf(fp,"%s",str);

     
        //ferme le stream "fichier"
        fclose(fp);
    }
    //le mode  lecture avec "rt"
    FILE *pf = fopen("test.txt","rt");
    if(!pf)
    {
        perror("Fichier non ouvert ");
    }
    else
    {
        //lire nb definit de caractere avec fgetc
        buffer = fgetc(pf);
        fprintf(stdout,"buffer : %c\n",buffer);//destination ; ceque je veux ecrire ; entree
        buffer = fgetc(pf);
        fprintf(stdout,"buffer : %c\n",buffer);//destination ; ceque je veux ecrire ; entree
        //le caractere change en effet quand on lit le fichier 'on y deplace un pointer ' sur chacune des casees une a une 

        //pour lire le fihier 
        //retourne eof quand pointer est sur eof en gros
        //et faire un boucle
        while((buffer = fgetc(fp)) != EOF)
        { 
            printf("%c",buffer);
        }
        //ON PEU LIRE AVEC FSCANF EN PASSWANT LES BONS FLUS
        //ATTENTION QUE EN CAS D ESPACE FSCANF S ARRETE

        while(fscanf(pf , "%s" ,str) == 1)//tant qu il renvoi qqch
        {
            printf("%s\n",str);
        }




        fclose(pf);
    }
    





    return 0;
}