#include <stdio.h>
#include <stdlib.h>
#include "lista_dupla_encadeada.h"

struct lista_dupla_encadeada{
    int valor;
    Lista_Dupla_Encadeada *prox;
    Lista_Dupla_Encadeada *ant;
};

Lista_Dupla_Encadeada* criar_lista_dupla_encadeada(){
    return NULL;
}

Lista_Dupla_Encadeada* insere_lista_dupla_encadeada_ini(Lista_Dupla_Encadeada* l, int v){
    Lista_Dupla_Encadeada *novoNo;
    novoNo = (Lista_Dupla_Encadeada*)malloc(sizeof(Lista_Dupla_Encadeada));
    novoNo->valor = v;
    novoNo->prox = l;
    novoNo->ant = NULL;
    // verifica se lista não está vazia
    if(l != NULL)
        l->ant = novoNo;
    return novoNo;
}

void insere_lista_dupla_encadeada_fim(Lista_Dupla_Encadeada **l, int v){
    Lista_Dupla_Encadeada *novoNo, *aux;
    novoNo = (Lista_Dupla_Encadeada*)malloc(sizeof(Lista_Dupla_Encadeada));

    novoNo->valor = v;
    novoNo->prox = NULL;
    novoNo->ant = NULL;

    if(*l == NULL){
        *l = novoNo;
    }else{
        aux = *l;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = novoNo;
        novoNo->ant = aux;
    }
}

void insere_lista_dupla_encadeada_random(Lista_Dupla_Encadeada **l, int p, int v){
    Lista_Dupla_Encadeada *novoNo, *aux, *aux_ant;
    int cont;
    novoNo = (Lista_Dupla_Encadeada*)malloc(sizeof(Lista_Dupla_Encadeada));
    novoNo->valor = v;
    cont = 0;
    aux = (*l);

    while((cont < p) && (aux != NULL)){
        cont = cont + 1;
        aux_ant = aux;
        aux = aux->prox;
    }  

    if((cont == p) && (p > 0)){
        novoNo->prox = aux;
        aux_ant->prox = novoNo;
    }else{
        novoNo->prox = *l;
        *l = novoNo;
    }
}

void imprimir_lista_dupla_encadeada(Lista_Dupla_Encadeada* l){
    Lista_Dupla_Encadeada* p;
    for(p = l; p != NULL; p = p->prox){
        printf("%d\n", p->valor);
    }
}