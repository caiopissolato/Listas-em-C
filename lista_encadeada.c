#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

struct lista_encadeada{
    int info;
    struct lista_encadeada* prox;
};

Lista_Encadeada* criar_lista_encadeada(){
    return NULL;
}

void inserir_lista_encadeada_ini(Lista_Encadeada **l, int i){
    Lista_Encadeada *novoNo;
    novoNo = (Lista_Encadeada*)malloc(sizeof(Lista_Encadeada));
    novoNo->info = i;
    novoNo->prox = *l;
    *l = novoNo;
}

void inserir_lista_encadeada_fim(Lista_Encadeada **l, int i){
    Lista_Encadeada *aux, *novoNo;
    novoNo = (Lista_Encadeada*)malloc(sizeof(Lista_Encadeada));

    novoNo->info = i;
    novoNo->prox = NULL;

    if((*l) == NULL){
        *l = novoNo;
    }else{
        aux = *l;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = novoNo;
    }
}

void inserir_lista_encadeada_random(Lista_Encadeada **l, int pos, int v){
    int cont;
    Lista_Encadeada *novoNo, *aux, *aux_ant;
    novoNo = (Lista_Encadeada*)malloc(sizeof(Lista_Encadeada));
    novoNo->info = v;
    cont = 0;
    aux = (*l);

    while((cont < pos) && (aux != NULL)){
        cont = cont + 1;
        aux_ant = aux;
        aux = aux->prox;
    }

    if((cont == pos) && (pos > 0)){
        novoNo->prox = aux;
        aux_ant->prox = novoNo;
    }else{
        novoNo->prox = *l;
        *l = novoNo;
    }
}

void imprimir_lista_encadeada(Lista_Encadeada* l){
    Lista_Encadeada* p;
    for(p = l; p != NULL; p = p->prox){
        printf("%d\n", p->info);
    }
}

void liberar_lista_encadeada(Lista_Encadeada* l){
    Lista_Encadeada* p = l;
    while(p != NULL){
        Lista_Encadeada* t = p->prox;
        free(p);
        p = t;
    }
}