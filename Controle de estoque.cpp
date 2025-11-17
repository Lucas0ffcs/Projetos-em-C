#include <stdio.h>
#include <stdlib.h>

//vet[z-1].codigo

void menu();
int z = 0;

struct Produto{
	char nome[20];
	int codigo;
	int quantidade;
	float valor;
	
};

struct Produto vet[10];

void cadastro1();
void consulta2();
void remove3();
double balanco4();

int main(){
	while(1){
		menu();
	}
}

void cadastro1(){
	int cdg;
	int codigo_unico;
	system("cls");
	getchar();
	
	if(z >= 10){
		printf("Estoque cheio!\n\n");
		system("pause");
		return;
	}

    printf("\nDigite o nome do produto:\n");
	scanf("%s", vet[z].nome);

    do {
        codigo_unico = 1;
        printf("Digite o codigo do produto:\n");
        if (scanf("%i", &cdg) != 1) {
            printf("Entrada invalida. Digite um numero.\n");
            while (getchar() != '\n'); 
            codigo_unico = 0;
            continue;
        }

        for(int i = 0; i < z; i++){
            if(cdg == vet[i].codigo){
                printf("Codigo ja cadastrado. utilize outro codigo.\n");
                codigo_unico = 0;
                break;
            }
        }
    } while (!codigo_unico);

    vet[z].codigo = cdg;

    printf("Digite a quantidade:\n");
    scanf("%i", &vet[z].quantidade);
    printf("Digite o valor unitario do produto:\n");
    scanf("%f", &vet[z].valor);

    z++;
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
			printf("%.2f", balanco4());
			system("pause");
			break;
			
		case 5:
			exit(0);
			break;	
			
	}
	
	
}

void consulta2(){
	int cdg;
	int encontrado = 0;
	system("cls");
	printf("Digite o codigo do produto a ser consultado:\n");
	scanf("%i", &cdg);
	
 	for(int i = 0; i < z; i++){
		if(vet[i].codigo == cdg){
			printf("Nome: %s\n", vet[i].nome);
			printf("Quantidade: %i\n", vet[i].quantidade);
			printf("Valor: %.2f\n", vet[i].valor);
			encontrado = 1;
			break;
		}
	}
	if (!encontrado) {
    	printf("Produto nao encontrado\n");
	}
}

void remove3(){
	int cdg;
	int removido;
	int encontrado = 0;
	system("cls");
	printf("Digite o codigo do produto a ser removido:\n");
	scanf("%i", &cdg);
	
	
	for(int i = 0; i < z; i++){
		if(vet[i].codigo == cdg){
			encontrado = 1;
			printf("Digite a quantidade que deseja remover do estoque:\n");
			scanf("%i", &removido);
            
            if(removido > 0 && vet[i].quantidade >= removido){
                vet[i].quantidade -= removido;
            } else if (removido <= 0){
                printf("A quantidade a remover deve ser positiva!\n");
            }
            else{
                printf("Quantidade insuficiente!");
            }
            break;
		}
	}
    if (!encontrado) {
	    printf("Produto nao encontrado");
    }
}
double balanco4(){
	double soma =0.0;
	for(int i= 0; i<10; i++){
		soma+= vet[i].quantidade*vet[i].valor;
		
	}
	return soma;
}
