#include<iostream>
using namespace std;
void diamond(int rows);
main()
{
    int rows;
    cout<<"Enter desired number of rows: ";
    cin>>rows;
    diamond(rows);
}
void diamond(int rows)
{
    for(int x = 1; x<=rows; x++){
        for(int y = rows; y>=x; y--){
            cout<<"*";
        }
        cout<<endl;
    }
}