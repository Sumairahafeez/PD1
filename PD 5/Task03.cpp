#include<iostream>
using namespace std;
float taxCalculator(char type, float price);
main(){
    cout<<"Enter the vehicle type code (M, E, S ,V, T): ";
    char type;
    cin>>type;
    cout<<"Enter the price of the vehicle: $";
    float price;
    cin>>price;
    float result=taxCalculator(type, price);
    cout<<"The final price of a vehicle of type E after adding the tax is &"<<result<<".";
}
float taxCalculator(char type, float price)
{
    float amount;
    if(type=='M'){
        amount=(price * 0.06);
        amount=price+amount;
    }
    if(type=='E'){
        amount=(price*8)/100;
        amount=price+amount;
    }
    if(type=='S'){
        amount=(price*10)/100;
        amount=price+amount;
    }
    if(type=='V'){
        amount=(price*12)/100;
        amount=price+amount;
    }
    if(type=='T'){
        amount=(price*15)/100;
        amount=price+amount;
    }
    return amount;
}