#include<iostream>
using namespace std;
void discount(string name, float price);
main(){	
	string name;
	cout<<"Enter the country's name: ";
	cin>>name;
	float price;
	cout<<"Enter the ticket price in dollars: $";
	cin>>price;
	discount(name,price);
}
void discount(string name, float price)
{	if(name=="Pakistan"){
	float dp=price*0.05;
	float ra=price-dp;
	cout<<"Final ticket price after discount: $"<<ra;
}
	if(name=="Ireland"){
	float dp=price*0.1;
	float ra=price-dp;
	cout<<"Final ticket price after discount: $"<<ra;
}
	if(name=="India"){
	float dp=price*0.2;
	float ra=price-dp;
	cout<<"Final ticket price after discount: $"<<ra;
}
	if(name=="England"){
	float dp=price*0.3;
	float ra=price-dp;
	cout<<"Final ticket price after discount: $"<<ra;
}
	if(name=="Canada"){
	float dp=price*0.45;
	float ra=price-dp;
	cout<<"Final ticket price after discount: $"<<ra;
}
}