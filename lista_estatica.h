typedef struct lista_estatica Lista_Estatica;

Lista_Estatica* lst_estatica_cria();
int lst_estatica_insere_ini(Lista_Estatica* l, int v);
int lst_estatica_insere_fim(Lista_Estatica* l, int i);
int lst_estatica_insere_random(Lista_Estatica* l, int v);
void libera_lista_estatica(Lista_Estatica* l);
void lst_estatica_imprime(Lista_Estatica* l);
