#define TYPEO
#ifdef TYPEO

typedef struct Client_t Client;
Client *constructeur (char * nom,char age);
void destructeur(Client *cliennn);

//des "GETeur" pour obtenir des valeurs
char* get_nom(Client*);
char get_age(Client*);

//les SETteurs 
char* set_nom(Client*,char*);//un nom est une string on peu pas
//juste passer la valeur on pass donc la premiere adresse
char set_age(Client*,char);


#endif










