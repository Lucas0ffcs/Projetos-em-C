#include <stdio.h>

struct Funcionario{
	int registro;
	float salario;
};

Funcionario vet[5];

void c_vet(int tam);
void e_vet(int tam);




main(){
	c_vet(2);
	e_vet(20
	
	
	);
	
	
	
}

void c_vet(int tam){
	for(int i = 0; i < tam; i++){
		printf("\nDigite o registro:\n");
		scanf("%d", &vet[i].registro);
		printf("\nDigite o salario:\n");
		scanf("%f", &vet[i].salario);
		
	}
	
}

void e_vet(int tam){
	for(int i = 0; i < tam; i++){
	printf("Registro: %d \n", vet[i].registro);
	printf("Salario: %.2f \n", vet[i].salario);
	
	
	
		
	}
	
	
}





