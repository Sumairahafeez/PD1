#include<iostream>
using namespace std;
string removeRep(string);
main()
{
    string s1, s2;
    cout<<"Enter the first string: ";
    cin>>s1;
    cout<<"Enter the second string: ";
    cin>>s2;
    string stOne=removeRep(s1);
    string stTwo=removeRep(s2);
    int count = 0;
    for(int i = 0; stOne[i]!='\0'; i++)
    {
        for(int j = 0; stTwo[j]!='\0'; j++)
        {
            if(stOne[i]==stTwo[j])
            {
                count++;
            }
        }
    }
    cout<<"Number of common characters: "<<count+1;

}
string removeRep(string st)
{   int size = 0;
    for(int i = 0; st[i]!='\0'; i++)
    {
        size++;
    }
    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(st[i]==st[j])
            {
                for(int k = j; k<=size-1; k++)
                {
                    st[k]=st[k+1];
                }
                size--;
                j--;
            }
        }
    }
    return st;
}