#include<iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);
main(){
	int RR;
	cout<<"Red Rose: ";
	cin>>RR;
	int WR;
	cout<<"White Rose: ";
	cin>>WR;
	int tulip;
	cout<<"Tulips: ";
	cin>>tulip;
	flowerShop(RR,WR,tulip);
}
void flowerShop(int redRose, int whiteRose, int tulip) 
{	float OrPrice;
	OrPrice=(redRose*2.00)+(whiteRose*4.10)+(tulip*2.50);
	cout<<"Original Price: $"<<OrPrice<<endl;
	if(OrPrice>200){
	float dp;
	dp=OrPrice*0.2;
	float ra;
	ra=OrPrice-dp;
	cout<<"Price after Discount: $"<<ra;}
	if(OrPrice<200){
	cout<<"No discount applied.";}
}