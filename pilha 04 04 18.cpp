#include <locale.h>
#include <stdio.h>


// Esta função devolve 1 se a string s contém uma
// sequência bem-formada de parênteses e colchetes
// e devolve 0 se a sequência é malformada.

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
