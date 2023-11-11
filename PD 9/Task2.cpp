#include<iostream>
using namespace std;
bool isSeven(int num);
string containSeven(int numbers[], int size);
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int num[size];
    for(int i = 0; i<size; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>num[i];
    }
    cout<<containSeven(num, size);
}
string containSeven(int numbers[], int size)
{   string result;
    for(int i = 0; i<size; i++)
    {   
        if(isSeven(numbers[i])|| numbers[i] == 7)
        {
            result= "Boom!";
            break;
        }
        else
        {
           result= "there is no 7 in the array" ;
        }
    }
    return result;
}
bool isSeven(int num)
{   int tensPlace=num/10;
    int unitPlace=num%10;
    if(tensPlace == 7 || unitPlace == 7)
    {
        return true;
    }
    return false;
}

