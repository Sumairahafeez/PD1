#include<iostream>
using namespace std;
int calculateVolume(int arr[], int size);
main()
{
    int n,vol=0;
    cout<<"Enter the number of boxes: ";
    cin>>n;
    int size=n*3;
    int arr[size];
    cout<<"Enter the dimensions of the boxxes (length, width, height): "<<endl;
    for(int i=0; i<size; i++ )
    {
        cin>>arr[i];
        
        
        
    }
     vol =calculateVolume(arr, size);
    cout<<"Total volume of all boxes: "<<vol;
    
}
int calculateVolume( int arr[], int size)
{   int sum = 0;
    int i = 0;
    int vol;
    while(i<size){
     vol = arr[i]*arr[i+1]*arr[i+2]; 
     
     sum = vol+sum;
     i=i+3;  
    }
    return sum;
}