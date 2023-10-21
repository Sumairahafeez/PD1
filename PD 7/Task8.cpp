#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int count;
    cout<<"Enter the count of cargo for transportation: ";
    cin>>count;
    int n=1;
    float ton;
    float next = 0;
    float a = 0, b = 0;
    float previous = 0;
    float train, truck, minibus,price;
    while(n<=count){
        cout<<"Enter the tonnage of cargo "<<n<<": ";
        cin>>ton;
        if(ton<=3){
            minibus = ton+b;
            b = minibus;
        }
        if(ton>3 && ton<=11){
            truck = ton + next;
            next = truck;
        }
        if(ton>11){
            train = ton + a;
            a = train;
        }
        ton = ton + previous;
        previous = ton;
       
        price = (minibus*200+truck*175+train*120)/ton;
        
        n++;}
       
    cout<<fixed<<setprecision(2)<<price<<endl;
    
    cout<<fixed<<setprecision(2)<<minibus/ton*100<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<truck/ton*100<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<train/ton*100<<"%"<<endl;
}