
#include <stdio.h>
#include<conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
 

void gotoxy(int x, int y);
void cobra();
int y;
int a;
char tecla;
int xhead = 5;
int yhead = 10;
int xbody = 3;
int ybody = 10;
void andacima();
char direcao = 'd';
int vet[3] = {219,219,64};
void andaD(char d);
void mapa();
void andaA(char a);
 
main(){
	
	
	mapa();
	
	
 	cobra();
 	tecla = _getch();
 	
 	
	while(tecla == 'd' || tecla == 'D'){
		
		andaD(tecla);
		
		
	}
	while(tecla == 'a' || tecla == 'A'){
		tecla = 'a';
		andaA(tecla);
		
		
	}
		
 			
	
 		
}
	

void cobra(){
	gotoxy(xhead,yhead);
	printf("%c", vet[2]);//cabeça
	gotoxy(xbody,ybody);
	printf("%c%c", 220,220);
	
}


void andaD(char d){
	
	char zap = tecla;
	
	for(int i = 0; xhead < 59; i++){
		while(zap=='d'){
			zap = 'd';
			system("cls");
			mapa();
			xhead++;
			xbody = xhead -2;
			cobra();
			Sleep(70);
			tecla = _getch();
			if(tecla!='d'){
				break;
			}
			
			
		}		
		tecla = _getch();
	}
	
	
	
}
void andaA(char a){
	for(int i = 0; xhead > 1; i++){
	
		system("cls");
		mapa();
		xhead--;
		xbody = xhead -2;
		cobra();
		Sleep(70);
	}
	
}



/*void andacima(){
	system("cls");
	yhead--;
	gotoxy(xhead,yhead);
	printf("%c", vet[2]);//cabeça
	xbody++;
	gotoxy(xbody,ybody);
	printf("%c",vet[1]);
	gotoxy(xbody+1,ybody);
	printf("%c",vet[0]);
	yhead--;
	gotoxy(xhead,yhead);
	
	
	
	gotoxy(xbody+1,ybody-1);
	printf("%c",vet[0]);
}
*/





void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void mapa(){
	
	for(int i = 0; i < 18; i++){
		gotoxy(60, i);
		printf("%c",186);
	}
	for(int i = 0; i < 18; i++){
		gotoxy(0, i);
		printf("%c",186);
	}
	for (int i = 1; i < 60; i++) {
    	gotoxy(i, 18);
    	printf("%c", 205);
	}
	for (int i = 1; i < 60; i++) {
    	gotoxy(i, 0);
    	printf("%c", 205);
	}
	gotoxy(60, 0);
	printf("%c", 187);
	gotoxy(60, 18);
	printf("%c", 188);
	gotoxy(0,0);
	printf("%c", 201);
	gotoxy(0,18);
	printf("%c", 200);

}









