#include<iostream>
using namespace std;
string decideActivity(string,string);
main(){
    string temp,humid;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humid;
    cout<<"Recommended activity: "<<decideActivity(temp,humid);
}
string decideActivity(string temp,string humid){
    string result;
    if(temp == "warm" && humid == "dry")
    {
        result = "Play tennis";
    }
    else if(temp == "warm" && humid == "humid"){
        result = "Swim";
    }
    else if(temp == "cold" && humid == "dry"){
        result = "Play basketball";
    }
    else if(temp == "cold" && humid == "humid"){
        result = "Watch TV";
    }
    return result;
}