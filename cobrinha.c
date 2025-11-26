#include <stdio.h>
#include<conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
 
 
 void gotoxy(int x, int y);
 void cobra();
 int a;
 char tecla;
 int xhead = 5;
 int yhead = 10;
 int xbody = 3;
 int ybody = 10;
 void andacima();
 char direcao = 'd';
 int vet[3] = {219,219,64};
 void andad();
 
 main(){
 	cobra();

 	
 	
 	while('d'){
 		
 		andad();
	 		
  
  
            tecla = _getch();
            switch(tecla){
            	case 'w' || 'W':
            		void andacima();
            		ybody--;
            		
            		
            	
            	
            	
            	
    
			}
            
		}
		
		
		return 0;
    }    
    

    
 	
 
 

void cobra(){
	gotoxy(xhead,yhead);
	printf("%c", vet[2]);//cabeça
	gotoxy(xbody,ybody);
	printf("%c%c", 220,220);
	
}


void andad(){
	system("cls");
	xhead++;
	xbody = xhead -2;
	cobra();
	Sleep(100);
	
}

void viracima(){
	
}


void andacima(){
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





void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
