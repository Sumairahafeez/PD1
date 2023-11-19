#include<iostream>
#include<climits>
using namespace std;
int isMin(int weight[], int n);
main()
{   int weight[10];
    cout<<"Enter the weights of 10 packages: "<<endl;
    for(int i = 0; i<10; i++)
    {
        cin>>weight[i];
    }
    for(int i = 0; i<10; i++)
    {
        for(int x = 0; x<9; x++)
        {
            if(weight[x]>weight[x+1])
            {
                int a = weight[x];
                weight[x]= weight[x+1];
                weight[x+1]=a; 
            }
        }
    }
    cout<<"[";
    for(int i = 0; i<10; i++)
    {
        cout<<weight[i];
        if(i!=9){
            cout<<", ";
        }
    }
    cout<<"]";

}