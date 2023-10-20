#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);
main(){
    string fruit, day;
     double quantity;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>>day;
    
    cout<<"Enter the quantity: ";
    cin>> quantity;
    float price = calculateFruitPrice(fruit,day,quantity);
    if(price!=0){
    cout<<price;}
      
}
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{   float price;
    if(dayOfWeek == "Saturday" || dayOfWeek == "Sunday"){
        if(fruit == "banana"){
            price = quantity*2.7;
        }
        if(fruit == "apple"){
            price = quantity*1.25;
        }
        if(fruit == "orange"){
            price = quantity*0.9;
        }
        if(fruit == "grapefruit"){
            price = quantity*1.6;
        }
        if(fruit == "kiwi"){
            price = quantity*3.00;
        }
        if(fruit == "pineapple"){
            price = quantity*5.6;
        }
        if(fruit == "grapes"){
            price = quantity*4.20;
        }
        if(fruit != "banana" && fruit!= "apple" && fruit!= "orange" && fruit!="grapefruit" && fruit!= "kiwi" && fruit!= "pineapple" && fruit!="grapes"){
            cout<<"Invalid";
            
        }
    }
    if(dayOfWeek!="Sunday" && dayOfWeek!="Saturday"){if(fruit == "banana"){
            price = quantity*2.5;
        }
        if(fruit == "apple"){
            price = quantity*1.2;
        }
        if(fruit == "orange"){
            price = quantity*0.85;
        }
        if(fruit == "grapefruit"){
            price = quantity*1.45;
        }
        if(fruit == "kiwi"){
            price = quantity*2.70;
        }
        if(fruit == "pineapple"){
            price = quantity*5.5;
        }
        if(fruit == "grapes"){
            price = quantity*3.85;
        }

    }
    if(dayOfWeek!="Sunday"&&dayOfWeek!="Saturday"&&dayOfWeek!="Monday"&&dayOfWeek!="Tuesday"&&dayOfWeek!="Wednesday"&&dayOfWeek!="Thursday"&&dayOfWeek!="Friday"){
        cout<<"error";
        return 0;
    }
    
    return price;
    }
