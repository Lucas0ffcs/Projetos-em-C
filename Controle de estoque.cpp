#include <stdio.h>

void menu();
int z = 0;






struct Produto{
	char nome;
	int codigo;
	int quantidade;
	float valor;
	
};



Produto vet[10];




int main(){
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

void cadastro(){
	z++;
	if(z >= 10){
		printf("Limite de produtos atingido!");
	}else{
		printf("Digite o nome do produto:\n");
		scanf("%c", vet[z-1].nome);
		printf("Digite o codigo do produto:\n");
		scanf("%i", vet[z-1].codigo);
		printf("Digite a quantidade:\n");
		scanf("%i", vet[z-1].quantidade);
		printf("Digite o valor unitario do produto:\n");
		scanf("%f", vet[z-1].valor);
	}
}


void menu(){
	int escolha;
	printf("1 - Cadastrar um novo produto");
	printf("2 - Consultar informações de um produto");
	printf("3 - Retirar produto do estoque");
	printf("4 - Gerar balanço total de estoque");
	printf("5 - Sair do sistema");
	
	switch(escolha){
		case 1:
			cadastro();
			break;
			
		case 2:
		
			break;
			
		case 3:
		
			break;
			
		case 4:	
			
			break;
			
		case 5:
		
			break;	
			
			
		
	}
	
	
}
