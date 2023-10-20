#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
int main(){
	int x=70, y=25;
	system("cls");
	gotoxy(x,y);
	cout <<"SUMAIRA HAFEEZ";
}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);}