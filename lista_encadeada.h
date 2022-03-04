typedef struct lista_encadeada Lista_Encadeada;

Lista_Encadeada* criar_lista_encadeada();
void inserir_lista_encadeada_ini(Lista_Encadeada **l, int i);
void inserir_lista_encadeada_fim(Lista_Encadeada **l, int i);
void inserir_lista_encadeada_random(Lista_Encadeada **l, int pos, int v);
void imprimir_lista_encadeada(Lista_Encadeada* l);
void liberar_lista_encadeada(Lista_Encadeada* l);