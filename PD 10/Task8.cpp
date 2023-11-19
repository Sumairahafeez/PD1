#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter the length of the array: ";
    cin>>size;
    string elements[size];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>elements[i];
    }
    int sum = 0;
    for(int i = 0; i<size; i++)
    {
        if(elements[i]=="right")
        {
            sum = sum + 90;
        }
        if(elements[i]=="left")
        {
            sum = sum - 90;
        }
    }
    cout<<"Number of full rotations: "<<(sum/360);
    
}