typedef struct lista_dupla_encadeada Lista_Dupla_Encadeada;

Lista_Dupla_Encadeada* criar_lista_dupla_encadeada();
Lista_Dupla_Encadeada* insere_lista_dupla_encadeada_ini(Lista_Dupla_Encadeada* l, int v);
void insere_lista_dupla_encadeada_fim(Lista_Dupla_Encadeada **l, int v);
void insere_lista_dupla_encadeada_random(Lista_Dupla_Encadeada **l, int p, int v);
void imprimir_lista_dupla_encadeada(Lista_Dupla_Encadeada* l);