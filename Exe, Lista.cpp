// tarefa: implementar funções para:
// 1. inserir um elemento no final da lista
// 2. excluir o último elemento da lista
// 3. inserir um elemento na enésima posição
// 4. excluir o enésimo elemento

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

typedef struct no No;

struct no {
	int info;
	No *next;
};

No *lista = NULL;

No* getnode() {
	No* no = (No*) malloc(sizeof(No));
  	if(no==NULL) {
    	printf("\nMemória insuficiente!");
	    exit(0);
  	}
  	return no;
}          

void freenode(No *no){
	free(no);
}

void imprimeLista() {
	printf("\n\nConteúdo da lista: ");
	No *l = lista;
	while(l!=NULL){
		printf("%i ",l->info);
		l=l->next;
	}
}

int contaQuantidadeDeElementosDaLista() {
	int contador = 0;
	No *l = lista;
	while(l!=NULL){
		contador++;
		l = l->next;
	}
	return contador;
}

void insereNoInicio(int numero){
	No *p = getnode();
    p->info = numero;
	p->next = lista;
	lista = p;
}

int removeDoInicio(){
	No *p = lista;
	lista = p->next;
	int x = p->info;
	freenode(p);
	return x;
}


No* localizaEnesimaPosicaoDaLista(int posicao) {
	int contador = 1;
	No *l = lista;
	while(contador<posicao){
		contador++;
		l = l->next;
	}
	return l;
}


void insereNaEnesimaPosicao(int posicao, int info) {
	if(posicao==1){
		insereNoInicio(info);
	} else if(posicao <= contaQuantidadeDeElementosDaLista()){
		No *posicaoAnterior = localizaEnesimaPosicaoDaLista(posicao-1);
		No *p = getnode();
    	p->info = info;
		p->next = posicaoAnterior->next;
		posicaoAnterior->next = p;
	} else printf("\n\n A lista não possui esta Posição! Elemento não inserido!");
}       

void insereNoFinalDaLista(int info) {
	int tamanho = contaQuantidadeDeElementosDaLista();
	if(tamanho>0){
		No* ultimaPosicao = localizaEnesimaPosicaoDaLista(tamanho);
		No *p = getnode();
    	p->info = info;
		p->next = NULL;
		ultimaPosicao->next = p;
	} else insereNoInicio(info);
}



int main() {
	setlocale(LC_ALL,"");
	int numero;
    do {
        system("cls");
        printf("\nDigite um valor inteiro, ou zero para finalizar: ");
        scanf("%d",&numero);
        if(numero!=0) {
            insereNoFinalDaLista(numero);  
        }
    } while(numero!=0);   
    imprimeLista();
    
    
    insereNaEnesimaPosicao(4,1000);
    
    
    imprimeLista();
	return 0;
}
