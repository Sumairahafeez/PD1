#include<iostream>
using namespace std;


bool isRepeatingCycle(int c, int arr[], int size);
main()
{   int length;

    int  cycle;
    cout<<"Enter the length of the array: ";
    cin>>length;
    int arr[length];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0; i<length; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the length of the cycle: ";
    cin>>cycle;
    cout<<"Output: "<<isRepeatingCycle(cycle, arr, length);
}
bool isRepeatingCycle(int c, int arr[], int size)
{   bool isRepeating = false;
    for(int i = 0; i<size; i++)
    {
        if(arr[i] == arr[i+c])
        {
            isRepeating = true;
            
        }
        else if(c>size)
        {
            isRepeating = true;
        }
    }
    return isRepeating;
}