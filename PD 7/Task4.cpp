#include<iostream>
using namespace std;
void triangularNumber(int num);
main()
{
    int num;
    cout<<"Enter number of Triangle: ";
    cin>>num;
    triangularNumber(num);
}
void triangularNumber(int num)
{  int x =1, sum=0;
    while(x<=num)
    {    sum = sum+x;
        x=x+1;
       
    }
    cout<<"Dots in the Triangle: "<<sum;


}