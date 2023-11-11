#include<iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n);


main()
{
    int size,times;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int arr[size];
    for(int i =0 ; i<size; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];

    }
    cout<<"Enter number of times even-odd transformation need to be done: ";
    cin>>times;
    
    evenOddTransform(arr,size,times);
    cout<<"[";
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<"";
        if(i!=size-1){
            cout<<", ";
        }
    }
    cout<<"]";
    
}
void evenOddTransform(int arr[], int size, int n)
{
    
    
    
    
    
       
       for(int x = 0; x<n; x++ ){
        for(int i =0; i<size; i++){
    
        if(arr[i]%2==0)
        {
            arr[i] = arr[i]-2;
        }
        else{
            arr[i] = arr[i]+2;
        }
        } }
       
       
       
    
      
        
}