#include<iostream>
using namespace std;
int coloringTime(string cols[], int size);
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    string colors[size];
    for(int i = 0; i<size; i++)
    {   cout<<"Enter Element "<<i+1<<": ";
        cin>>colors[i];
        
    }
    cout<<"Time to color: "<<coloringTime(colors, size)<<" seconds";
}
int coloringTime(string cols[], int size)
{   int time;
int count = 1;
    for(int i = 0; i<size; i++)
    {       time=2*(i+1);
        if(cols[i+1]!=cols[i])
        {
            time = time+i;
        }
        else
        {
            
            time = time-i;
            
        }
    }
    return time;
}