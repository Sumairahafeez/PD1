#include<iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main(){
    int holidays, weekends;
    string year;
    cout<<"Enter year type: ";
    cin>>year;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>weekends;
    cout<<calculateVolleyballGames(year,holidays, weekends);
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int ans;
    ans = 48-hometownWeekends;
    ans = ans*3/4;
    int p;
    p = holidays *2/3;
    ans = ans + p;
    ans = ans + hometownWeekends;
    if(yearType == "leap"){
        ans = ans+ (ans*0.15)+0.2;
    }
    if(yearType == "Normal"){
        ans = ans;
    }
    return ans;
}