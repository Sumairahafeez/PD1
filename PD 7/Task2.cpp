#include<iostream>
using namespace std;
void halfDiamond(int rows);
main()
{
    int rows;
    cout<<"Enter desired number of rows: ";
    cin>>rows;
    halfDiamond(rows);
}
void halfDiamond(int rows)
{
    for(int x = 1; x<=rows; x++){
        for(int space = rows; space>=x; space--)
        {
            cout<<" ";
        }
        for(int y = 1; y<=x; y++){
            cout<<"*";
        }
        cout<<endl;}
    
        for(int a = 1; a<=rows; a++){
            for(int space = 1; space<=a; space++)
        {
            cout<<" ";
        }
        for(int s = rows; s>=a; s--){
            cout<<"*";
        }
        cout<<endl;
    }
}
