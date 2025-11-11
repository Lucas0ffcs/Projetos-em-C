#include <stdio.h>
#include <stdlib.h>

void menu();
int z = 0;







struct Produto{
	char nome[20];
	int codigo;
	int quantidade;
	float valor;
	
};



Produto vet[10];



void cadastro1();
void consulta2();
void remove3();





int main(){
	while(1){
		menu();
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

void cadastro1(){
	system("cls");
	getchar();
	
	z++;
	if(z > 10){
		printf("Estoque cheio!\n\n");
		system("pause");
	}else{
		
		printf("\nDigite o nome do produto:\n");
		scanf("%s", &vet[z-1].nome);

		printf("Digite o codigo do produto:\n");
		scanf("%i", &vet[z-1].codigo);
		printf("Digite a quantidade:\n");
		scanf("%i", &vet[z-1].quantidade);
		printf("Digite o valor unitario do produto:\n");
		scanf("%f", &vet[z-1].valor);
	}
}


void menu(){
	int escolha;
	system("cls");
	printf("1 - Cadastrar um novo produto\n");
	printf("2 - Consultar informacoes de um produto\n");
	printf("3 - Retirar produto do estoque\n");
	printf("4 - Gerar balanco total de estoque\n");
	printf("5 - Sair do sistema\n");
	
	
	scanf("%i", &escolha);
	switch(escolha){
		case 1:
			cadastro1();
			break;
			
		case 2:
			consulta2();
			system("pause");
			break;
			
		case 3:
			remove3();
			system("pause");
			break;
			
		case 4:	
			
			break;
			
		case 5:
		
			break;	
			
	}
	
	
}

void consulta2(){
	int cdg;
	system("cls");
	printf("Digite o codigo do produto a ser consultado:\n");
	scanf("%i", &cdg);
	for(int i = 0; i < 10; i++){
		if(vet[i].codigo == cdg){
			printf("Nome: %s\n", vet[i].nome);
			printf("Quantidade: %i\n", vet[i].quantidade);
			printf("Valor: %.2f\n", vet[i].valor);
			break;
		}
		
			
		}
	printf("Produto nao encontrado");
	}

void remove3(){
	int cdg;
	int removido;
	system("cls");
	printf("Digite o codigo do produto a ser removido:\n");
	scanf("%i", &cdg);
	
	
	for(int i = 0; i < 10; i++){
		if(vet[i].codigo == cdg){
			printf("Digite a quantidade que deseja remover do estoque:\n");
			scanf("%i", &removido);
		}else{
			printf("Produto nao encontrado");
			break;
		}
		if(vet[i].quantidade>removido>0){
			vet[i].quantidade -= removido;
		}else{
			printf("Quantidade insuficiente!");
			break;
		}
			
			
		}
}

