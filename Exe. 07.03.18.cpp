#include <stdio.h>
#include <stdlib.h>
#include "livro.c"


int main () {
   Livro *Livro, livros[5];
   char titulo[50];
   float preco, media;
   int nropg, ano, soma;
   for(contador=0; contador,5; contador++)
   printg("Titulo:" );
   fflush(stdin);
   gets(titulo);
   
	Livro *livro, livros[5]; 
	char titulo[50];
	float preco;
	int nropg, ano;
	for(contador=0;contador<5;contador++){
		printf("Titulo: ");
		fflush(stdin);
		gets(titulo);
		printf("Numero de paginas: ");
		scanf("%i",&nropg);
		livro = criar(nomeDoAluno,notaDoAluno);
		printf("Ano: ");
		scanf("%i",&Ano);
		printf("Preco: ");
		scanf("%i",&preco);
		turma[contador] = *aluno;
	}
	soma=0;
	for(contador=0;contador<10;contador++){
		aluno = &turma[contador];
		acessar(aluno,nomeDoAluno,&notaDoAluno);
		printf("\nnome do aluno: %s, nota: %f",nomeDoAluno,notaDoAluno);
		soma = soma + notaDoAluno;
	}
	media = soma/10;
	printf("\n\nMedia da turma = %.2f",media);
	return 0;
}

