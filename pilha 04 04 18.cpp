#include <locale.h>
#include <stdio.h>


// Esta fun��o devolve 1 se a string s cont�m uma
// sequ�ncia bem-formada de par�nteses e colchetes
// e devolve 0 se a sequ�ncia � malformada.

    int i;
   	for (i = 0; s[i] != '\0'; ++i) {
    push(p,s[i]);
	}
    

void empilharCaracteresDaPalavraLida(Pilha *p, char s[]) {
	
void desempilharEImprimir(pilha *p) {


   
					
                   	
int main() {
	setlocale(LC_ALL,"");
	char palavra[100]
	printf("digite a palavra a ser invertida");
	gets(palavra);
	Pilha *pilha =criapilha();
	empilharCaracteresDaPalavraLida(pilha,palavra);
	desempilharEImprimir(pilha);
	return 0;
}
	

void desempilharEImprimir(pilha *p) {
	char letra;
	while(!empty(p)){
		letra = pop(p);
		printf("%c". letra)
	}
