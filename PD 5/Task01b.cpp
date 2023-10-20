#include<iostream>
using namespace std;

int x = 10;
void myFunction()
{
    cout<<"The value of x is: "<< x;
    int x = 20;
}
main()
{   
    myFunction();
    int x = 10;
    cout << "The value of the x is: "<< x;
    myFunction();
}