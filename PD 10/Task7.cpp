#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter the length of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element of the array: "<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<10; i++)
    {
        for(int x = 0; x<9; x++)
        {
            if(arr[x]>arr[x+1])
            {
                int a = arr[x];
                arr[x]= arr[x+1];
                arr[x+1]=a; 
            }
        }
    }
    bool isrearranged=false;
    for(int i = 0; i<size; i++)
    {
        if(arr[i]+1 == arr[i+1])
        {
            isrearranged = true;
            
        }
    }
    cout<<"Can be arranged: "<<isrearranged;
}