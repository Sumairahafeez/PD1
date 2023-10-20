#include<iostream>
using namespace std;
void pet(int holidays);
main(){
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}
void pet(int holidays)
{
	int Wdays;
	Wdays=365-holidays;
	int TimeForGames;
	TimeForGames=Wdays*63+holidays*127;
	int DifNorm;
	DifNorm=30000-TimeForGames;
	int convTimehours;
	convTimehours=DifNorm/60;
	int mins;
	mins=DifNorm-convTimehours*60;
	if(TimeForGames<=30000){
	cout<<"Tom sleeps well"<<endl;
	cout<<convTimehours<<" hours and "<<mins<<" minutes less for play";}
	if(TimeForGames>30000){
	int h,m;
	h=-1*convTimehours;
	m=-1*mins;
	cout<<"Tom will run away"<<endl;
	cout<<h<<" hours and "<<m<<" minutes for play";}

}