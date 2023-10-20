#include<iostream>
using namespace std;
void amplify(int num);
main()
{
    int num;
    cout<<"Enter the number to Amplify: ";
    cin>>num;
    amplify(num);
}
void amplify(int num)
{
    for(int x = 1; x<=num; x++ )
    {
        
        if(x%4==0){
            cout<<x*10<<", ";
            continue;
        }
        cout<<x<<", ";
    }
}