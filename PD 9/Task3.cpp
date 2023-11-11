#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    string element[size];
    bool istrue=false;
    for(int i =0 ; i<size; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>element[i];
        
        

    }
    for(int i =0; i<size; i++)
    {   
        if(element[i+1]==element[i])
        {
             istrue=true;
        }
        
    }
    cout<<istrue;
}