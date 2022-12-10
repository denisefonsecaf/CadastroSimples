#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

struct tipo_pessoa{
	int idade;
	char nome[50];
	float altura;
	float peso;
};
typedef struct tipo_pessoa tipo_pessoa;

int main(){
	setlocale(LC_ALL, "Portuguese");
	tipo_pessoa dados[20];
	int i, x;

	printf("\nQuantidade de pessoas para fazer o cadastro: ");
	fflush(stdin);
	scanf("%d", &x);
	while(x > 20){
		puts("\nERRO: Capacidade máxima de cadastro é de até 20 pessoas!");
		puts("Digite a quantidade novamente: ");
		fflush(stdin);
		scanf("%d", &x);	
	};

	for(i=0; i<x; i++){
		printf("\n---------- %dª pessoa: ----------\n", i+1);
		printf("Nome: ");
		fflush(stdin);
		fgets(dados[i].nome, 50, stdin);
		
		printf("\nIdade: ");
		fflush(stdin);
		scanf("%d", &dados[1].idade);
		
		printf("\nAltura: ");
		fflush(stdin);
		scanf("%f", &dados[i].altura);
		
		printf("\nPeso: ");
		fflush(stdin);
		scanf("%f", &dados[i].peso);
	}
		
	system("cls");
	puts("\n\nCadastros:");
	for(i=0; i<x; i++){
		printf("\n---------- Cadastro da %dª pessoa: ----------\n", i+1);
		printf("Nome: %s\n", dados[i].nome);
		printf("Idade: %d\n", dados[i].idade);
		printf("\nAltura: %.2f\n", dados[i].altura);
		printf("\nPeso: %.3f\n", dados[i].peso);
	}
		
	printf("-------------------------------------------------");
}
