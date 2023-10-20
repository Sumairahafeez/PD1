#include<iostream>
using namespace std;
float dueAmount(char type, float mins,char time);
main(){
    float mins;
    char time,type;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>type;
    
    if(type == 'p' || type == 'P'){
        cout<<"Enter time of call (D/d for day, N/n for night): ";
    cin>>time;
    cout<<"Enter the number of minutes used: ";
    cin>>mins;
        cout<<"Service Type: Premium"<<endl;
    }
    else if(type == 'r' || type == 'R'){
    
    cout<<"Enter the number of minutes used: ";
    cin>>mins;
        cout<<"Service Type: Regular"<<endl;
    }
    cout<<"Total Minutes Used: "<<mins<<" minutes"<<endl;
    cout<<"Amount Due: $"<<dueAmount(type,mins,time);
}
float dueAmount(char type, float mins, char time)
{   float extra, due;
    if(type == 'r' || type == 'R'){
        if(mins>50){
            extra=mins-50;
            due = extra*0.2;
            return (due+10);
        }
        if(mins<=50){
            return 10;
        }
    }
    
    if(type == 'p' || type == 'P'){
        if(time == 'd' || time == 'D'){if(mins>75)
        extra = mins-75;
        due = extra * 0.1;
        due = due + 25;}
        if(mins<=75){
            due = 25;
        }
        }
        if(time == 'n'|| time == 'N'){if(mins>100){
            extra = mins-100;
            due = extra * 0.05;
            due = due + 1875;
        }
        if(mins<=100){
            due = 25;
        }
        return due;
    }
}