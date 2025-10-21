#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void nave();
void gotoxy(int x, int y);
void monstro();
void lancarmissil(int dist);
void missil();
int coordpe = 10;
int missilpos = 3;
int vidas = 3;
int pehpos, dist;
void setColor(int color);
bool matou = false;
int escolha = 1;
int quebra;
main(){

	while(escolha == 1){
		matou = false;
	
		vidas = 3;
		missilpos = 3;
		matou = false;
		printf("	   Bem vindo ao jogo Nave x Monstro!\n\n");
		printf("   			Regras:\n\n");
		printf("#1 - Digite a distancia em que deseja lancar seu missil\n");
		printf("#2 - Voce precisa acertar o missil exatamente no peh do monstro\n");
		printf("#3 - Voce tem apenas 3 vidas\n");
		printf("\n\nPressione Enter para continuar");
		getchar();
		system("cls");
		
		while(matou == false){
		
			while(vidas){
			
			
				srand(time(NULL));//inicia o randomizer
				pehpos = (rand() % 15) + 10;
				
				
				gotoxy(20,2);
				switch(vidas){
					case 3:
						setColor(10);
						printf("Vidas restantes: %i", vidas);
						setColor(7);
						break;
						
					case 2: 
						setColor(14);
						printf("Vidas restantes: %i", vidas);
						setColor(7);
						break;
						
					case 1:setColor(12);
						printf("Vidas restantes: %i", vidas);
						setColor(7);
						break;
				}
				
				
				nave();
				
				monstro();
				gotoxy(0, 12);
				printf("Digite em que distancia deseja lancar o missil: \n");
				scanf("%i", &dist);
				lancarmissil(dist+2);
				if(missilpos == pehpos){
					gotoxy(pehpos-1,coordpe);
					printf("X");
					Sleep(1000);
					gotoxy(5,17);
					printf("Voce matou o monstro, parabens!!");
					Sleep(3000);
					matou = true;
				
				}else{
					vidas--;
				}
				missilpos = 3;
				
				
				system("cls");
				if(matou==true){
					system("cls");
				
					printf("Deseja jogar novamente?\nDigite 1 para sim e 0 para nao\n");
					scanf("%i", &escolha);
					quebra = 1;
					system("cls");
				}
				if(vidas == 0 ){
					system("cls");
					printf("Voce perdeu :(\n");
					printf("Deseja jogar novamente?\nDigite 1 para sim e 0 para nao\n");
					scanf("%i", &escolha);
					quebra = 1;
					system("cls");
				}
			if(matou==true){
				break;
			}
			
			}
			if(quebra==1){
				break;
			}
		}
	}
	
}
void nave(){
	gotoxy(0,10);
	printf("%c%c%c", 220, 219, 220);
}
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void monstro(){
	gotoxy(pehpos,coordpe-5);
	printf("%c",64);//cabeça
	gotoxy(pehpos-2,coordpe-4);
	printf("%c%c%c%c%c",178,32,219,32,178);//ponta dos braços e pescoço
	gotoxy(pehpos-2,coordpe-3);
	printf("%c%c%c%c%c",219,220,219,220,219);//braços e tronco
	gotoxy(pehpos,coordpe-2);
	printf("%c",219);//cintura
	gotoxy(pehpos-1,coordpe-1);
	printf("%c%c%c",219,223,219);//quadril
	gotoxy(pehpos-1,coordpe);
	printf("%c%c%c",219,32,219);//pés
}
void lancarmissil(int dist){
	gotoxy(missilpos, 10);
	for(int i = 3; i <= dist; i++){
		
		missil();
		Sleep(200);
		missilpos++;
	}
	
}
void missil(){
    if (missilpos > 3) {  
        gotoxy(missilpos-1, 10);  
        printf(" ");  
       	 // sobrescreve com espaço para "apagar" o rastro
    }
	
    gotoxy(missilpos, 10);  
    
    printf(">");  
    
	}
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

