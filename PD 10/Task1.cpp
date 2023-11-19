#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter the number of Saturdays: ";
    cin>>size;
    int sat[size];
    int count = 0;

    for(int i = 0; i<size; i++)
    {   cout<<"Enter miles run for Saturday "<<i+1<<": ";
        cin>>sat[size];
        if(sat[i+1]>sat[i])
        {
            count++;
        }
    }
    cout<<"Total progress days: "<<count;
}