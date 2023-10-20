#include<iostream>
using namespace std;
void possibleBonus(int x, int y);
main(){
	int yrPosition;
	cout<<"Enter your position: ";
	cin>>yrPosition;
	int frPosition;
	cout<<"Enter your friend's position: ";
	cin>>frPosition;
	possibleBonus(yrPosition, frPosition);
}
void possibleBonus(int x, int y)
{
	if(y-x<6){
	cout<<"true";
}
	if(y-x>6){
	cout<<"false";
}



}