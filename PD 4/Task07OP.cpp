#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void movePlayer(int x, int y);
main(){
	int x=4,y=1;
	system("cls");
	printmaze();
	int wallhit=0;
	while(true)
	{movePlayer(x,y);
	
	if(wallhit==0){
		y=y+1;
	}
	if(y>6){
		wallhit=1;
	}
	if(wallhit==1){
		y=y-1;
	}
	if(y<2){
		wallhit=0;
	}
	}
	
	
	}


	

	




void printmaze()
{	cout<<"##################"<<endl;
	cout<<"#                #"<<endl;
	cout<<"#                #"<<endl;
	cout<<"#                #"<<endl;
	cout<<"#                #"<<endl;
	cout<<"#                #"<<endl;
	cout<<"##################"<<endl;}
void movePlayer(int x, int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(100);
	gotoxy(x,y);
	cout<<" ";
	
}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);}
