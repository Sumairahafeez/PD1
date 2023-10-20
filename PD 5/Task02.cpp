#include<iostream>
#include<cmath>
using namespace std;
float pyramidVolume(float length, float width, float height, string desire);
main(){
    
    cout<<"Enter the length of the pyramid (in meters): ";
    float length;
    cin>>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    float width;
    cin>>width;
    cout<<"Enter the height of the pyramid (in meters): ";
    float height;
    cin>>height;
   cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    string desire;
    cin>>desire;
    float value=pyramidVolume(length,width,height,desire);
    cout<<"The volume of the pyramid is: "<<value<<" cubic "<<desire;
}
float pyramidVolume(float length, float width, float height, string desire)
{   float ans=0.000000;
    float v=(length*width*height)/3;
    if(desire=="millimeters"){
     
       
        ans=v*(pow(1000,3));
        
    }
    if(desire=="centimeters"){
        ans=v*(pow(100,3));
    }
    if(desire=="meters")
    {
        ans=v;
    }
    if(desire=="kilometers")
    {
        ans=(v/(pow(1000,3)));
        
    }
    return ans;
}
