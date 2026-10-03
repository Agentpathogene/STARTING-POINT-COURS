#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//une chaine de caractere est un vecteur de char

int main (void)
{

    char string[6+1] = "hello\n";//hello plus le caractere null voir table ascii
    char *str = "pas oblige de preciser taille mais pas good";//avec cette syntace donnee stockee en lecture seule pas de modification
    char stri[] = "taille automatiquement assigne the best";
    //nOUVELLE FONCTION DE STRING.H LE PUTS
    puts(string);//rajoute le _\n

    printf("%s",string);

    //recuperer une chaine de caractere
    printf("Entrez votre texte :>");
    scanf("%5s",&string);//attention a la taille je limite saisie a 5char
    //avec %5C au lieu de s la saisie de 5 caractere aurait ete obligatoire
    puts(string);

    //equivalent du scanf fonction de string
    //gets a ete bannie de c car entraine faille
    //on reinitialise string sinon \n coupe fscanf

    getchar();//extrait et renvoi octet en haut du tampon clavier donc \n qui bloque le fgets
    printf("Entrez une chaine de caractere :>");
    fgets(string,sizeof(string),stdin);
    printf("%5s",string);
    float pi = 3.14;
    sprintf(stri,"PI= %f\n",pi);
    fprintf(stdout,"%s\n",stri);


    //TRANSFORME STR EN CHIFFRE

    char stra[] = "777";
    int n;
    int m;
    n = atoi(stra); //ON A atof() POUR LES FLOATS
    printf("%d\n",n);

    //connaitre taille d une string
    char tail[] = "im a ramsomware happy to see you";
    printf("%lu\n",strlen(tail));

    //concatenation string
    char str1[] = "hello ";
    char str2[] = "world";
    strcat(str1 , str2);
    printf("%s\n",str1);

    //comparaison de strings
    if(strcmp(str1,str2) == 0)//en gros si y a pas de difference ordre alphabetique
    {
        puts("egales");
    }
    else 
    {
        puts("not Egales !");
    }

    //copier une string avec string copy
    char one[] = "AAAbgt";
    char two[] = "BBBbbgf";
    puts(one);
    strcpy(one, two);
    puts(one);

    //trouver indice d une premiere occurence de qqch

    int ptrc;
    ptrc = strchr(one, 'b')-one;//adresse de l ocurence moin celle de premiere case done indice
    printf(" %d\n",ptrc);


    return 0;
}
























