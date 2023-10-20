#include<iostream>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
main(){
    string month;
    int stay;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>stay;
    cout<<calculateHotelPrices(month,stay);
    
}
string calculateHotelPrices(string month, int numberOfStays)
{   float priceStudio;
    float priceAp;
    if(month == "May" || month == "October")
    {if(numberOfStays<=7){
        priceStudio = 50*numberOfStays;
        priceAp=65*numberOfStays;
    }
    if(numberOfStays>7 && numberOfStays<=14){
        priceStudio = 50*numberOfStays;
        priceStudio = priceStudio-priceStudio*0.05;
    }
    if(numberOfStays>14){
        priceStudio = 50*numberOfStays;
        priceAp=65*numberOfStays;
        priceStudio = priceStudio-(priceStudio*0.3);
        priceAp = priceAp-(priceAp*0.1);
    }
    }
    if(month == "June" || month == "September")
    {if(numberOfStays<=14){
        priceStudio = 75.20*numberOfStays;
        priceStudio=priceStudio+0.000067;
        priceAp = 68.70*numberOfStays;
        priceAp=priceAp-0.000779;
    }
    
    if(numberOfStays>14){
        priceStudio = 75.20*numberOfStays;
        priceAp = 68.70*numberOfStays;
        priceStudio = priceStudio-((75.20*numberOfStays)*0.2);
        
        priceAp = priceAp-((68.70*numberOfStays)*0.1);
        
    }
    }
    if(month == "July" || month == "August"){
        priceStudio = 76*numberOfStays;
        priceAp = 77*numberOfStays;
        priceAp = priceAp-(priceAp*0.1);
    }
    return "Apartment: "+to_string(priceAp)+"$.\nStudio: "+to_string(priceStudio)+"$.";
}