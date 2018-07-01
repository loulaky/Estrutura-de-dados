#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAMANHO 10 
  
struct fila
{
	int codigo[TAMANHO];
	int qtdelemento;
	int posicao;
};

typedef struct fila Fila;

Fila* criar()
{
	Fila* fila = (Fila*) malloc(sizeof(Fila));
	if(fila != NULL)
	{
		fila->posicao = 0;
		fila->qtdelemento = 0;
		return fila;
	}
}

void inserir(Fila* fila, int codigo)
{
	fila->posicao = (fila->posicao+fila->qtdelemento)%TAMANHO;
	fila->codigo[fila->posicao] = codigo;
	fila->qtdelemento++;
}

int main()
{
	Fila* fila;
	char comando[5],op;
	
	fila = criar ();
	
	while(1)
	{
		gests(comando);
		op=comando[0];
		
		switch(op){
			'c':printf("carrochecando");
			'p':printf("pcarropartindo");
			 
		} 
	}
	
	return 0;
}
