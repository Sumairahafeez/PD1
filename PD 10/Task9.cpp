#include<iostream>
using namespace std;
main()
{   int count = 0;
    int length;
    cout<<"Enter the length of the array: ";
    cin>>length;
    int arr[length];
    for(int i = 0; i<length; i++)
    {
        cin>>arr[length];
    }
    
        
       for(int x = 0; x<=length; x++)
       { 
        for(int i = x+1; i<length; i++)
       {if(arr[x]>=i)
        {
            count++;
            
        }}
       cout<<count;
        
        }
        
        
       
        }
        
    
    
   

    
