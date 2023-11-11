#include<iostream>
using namespace std;
bool lengthEven(string,int );
int main()
{
    string a;
    cout<<"Enter a String: ";
    cin>>a;
    int count = 0;
    for(int i = 0; a[i]!=0; i++)
    {
        count++;
    }
    cout<<lengthEven(a, count);
}
bool lengthEven(string name, int length)
{   int mod = length%2;
    if(mod==0)
    {
        return true;
    }
    return false;
}