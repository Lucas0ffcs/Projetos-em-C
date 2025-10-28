#include<stdio.h>

#include<windows.h>

#include<stdlib.h>

int matrix[5][5];

int escolha;

int posicionar(int tipo, int lin, int col);

void iniciatabuleiro();

void tabuleiro();

void prepAtirar();

int loop();

void atirar(int lin, int col);


main(){
       
       
    	int tipo, lin, col;
   
    	iniciatabuleiro();
   
		do{
            printf("Selecione o tipo de embarcacao");
            printf("\n1 - Submarino");
            printf("\n2 - Porta-avioes");
            printf("\n3 - Navio\n");
            scanf("%i", &tipo);
           
            printf("Selecione a linha\n");
            scanf("%i", &lin);
            printf("Selecione a coluna\n");
            scanf("%i", &col);
           
            printf("\n\nRetornou: %i", posicionar(tipo, lin, col));
           
            printf("\n\n");
           
		    printf("\n");
            tabuleiro();
            printf("\n");
           
            
		   loop();
           
           
           
           
           
           
   		}while(1);
       
       
}       
int posicionar(int tipo, int lin, int col){
    switch(tipo){
    case 1:
        if(col >= 4){
                return 0;       
        }else{
            if(matrix[lin][col] == 0 && matrix[lin][col+1] == 0){
               matrix[lin][col] = 1;
            matrix[lin][col+1] = 1;
            return 1; 
            }
            printf("Ja esta ocupado!");
            return 0;
            
         }
    case 2:
        if(col >= 3){
            return 0;       
        }else{
            if( matrix[lin][col] == 0 &&
                matrix[lin][col+1] == 0 &&
                matrix[lin][col+2] == 0){
                
                matrix[lin][col] = 2;
                matrix[lin][col+1] = 2;
                matrix[lin][col+2] = 2;
                return 1;
            }
            printf("Ja esta ocupado!");
            return 0;
        }     
    case 3:
        if(col >= 3 || lin == 0){
            return 0;       
        }else{
            if( matrix[lin][col] == 0 && 
                matrix[lin][col+1] == 0 &&
                matrix[lin][col+2] == 0 &&
                matrix[lin-1][col+1] == 0){
                    
                    matrix[lin][col] = 3;
                    matrix[lin][col+1] = 3;
                    matrix[lin][col+2] = 3;
                    matrix[lin-1][col+1] = 3;
                    return 1;  
                    
                    
            }
            printf("Ja esta ocupado!");
            return 0;  
        }
    }
}


void iniciatabuleiro(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matrix[i][j] == 0;
        }
    }    
}


void tabuleiro(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(matrix[i][j] == 9){
                printf("X ");
                continue;
            }
            printf("%i ", matrix[i][j]);
            
            
        }
        printf("\n");
    }
}
void atirar(int lin, int col){
    
    if(matrix[lin][col] == 0){
        printf("Nenhum alvo atingido");
        
    }else{
        if(matrix[lin][col] == 1){
            matrix[lin][col] = 9;
            printf("\nSubmarino atingido!\n");
            
            
            
        }
        if(matrix[lin][col] == 2){
            matrix[lin][col] = 9;
            printf("\nPorta-avioes atingido!\n");
        }
        if(matrix[lin][col] == 3){
            matrix[lin][col] = 9;
            printf("\nNavio atingido!\n");
        }
    }
    
}
void prepAtirar(){
	int lin, col;
	printf("Digite a linha:\n");
	scanf("%i", &lin);
	printf("Digite a coluna:\n");
	scanf("%i", &col);
	printf("\n");
	printf("Ajustando lancador.");
	Sleep(500);
	printf("\nAjustando lancador..");
	Sleep(700);
	printf("\nAjustando lancador...");
	Sleep(1000);
	printf("\nAjustando lancador....");
	Sleep(1200);
	printf("\nAlvo na mira!\n");
	
	atirar(lin, col);
	
	tabuleiro();
	loop();
}
int loop(){
			printf("\n1 - Posicionar embarcacao\n");
            printf("2 - Atirar\n");
            printf("3 - Sair\n");
            scanf("%i", &escolha);
            
            switch(escolha){
        		case 1: 
           			main();
				case 2:
					prepAtirar();
				case 3:
					exit(EXIT_SUCCESS);
			}
					
}


