#include<iostream>
#include<windows.h>
using namespace std;
string projectTimeCalculation(int hours, int days, int workers);
main(){
    cout<<"Enter the needed hours: ";
    int hours;
    cin>>hours;
    cout<<"Enter the days that the firm has: ";
    int days;
    cin>>days;
    cout<<"Enter the number of all workers: ";
    int workers;
    cin>>workers;
    string result=projectTimeCalculation(hours,days,workers);
    cout<<result;
}
string projectTimeCalculation(int hours, int days, int workers)
{
    int time=(days*10)*24;
    time=(time*10)/100;
    if(time<hours){
        
        return"Not enough time!"+ to_string(time)+" hours needed.";
    }
    if(time>=hours){
        return"Yes!"+ to_string(hours) + " hours left.";
    }
}