#include <stdlib.h>
#include <stdio.h>
#include "lista_estatica.h"

struct lista_estatica{
    int qtd;
    int valor[10000];
};

Lista_Estatica* lst_estatica_cria(){
    Lista_Estatica *l;
    l = (Lista_Estatica*)malloc(sizeof(struct lista_estatica));
    if(l != NULL)
        l->qtd =0;
    return l;
}

//Função de inserção no inicio e retorna lista atualizada
int lst_estatica_insere_ini(Lista_Estatica* l, int v){
    if(l == NULL) return 0;
    int i;
    for(i=l->qtd-1; i>=0; i--){
        l->valor[i+1] = l->valor[i];
    }
    l->valor[0] = v;
    l->qtd++;
    return 1;
}

int lst_estatica_insere_fim(Lista_Estatica* l, int i){
    if(l == NULL){
        return 0;
    }
    l->valor[l->qtd] = i;
    l->qtd++;
    return 1;
} 

int lst_estatica_insere_random(Lista_Estatica* l, int v){
    if(l == NULL) return 0;
    int k, i = 0;
    while(i<l->qtd && l->valor[i] < v){
        i++;
    }
    for(k=l->qtd-1;k>=i;k--){
        l->valor[k+1] = l->valor[k];
    }
    l->valor[i] = v;
    l->qtd++;
    return 1;
}

void lst_estatica_imprime(Lista_Estatica* l){
    int i;
    for(i = 0; i < l->qtd; i++){
        printf("%d\n", l->valor[i]);
    }
}

void libera_lista_estatica(Lista_Estatica* l){
    free(l);
}