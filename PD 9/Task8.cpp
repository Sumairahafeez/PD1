#include<iostream>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped);
string removeRep(string);
main()
{
    string correct,actual;
    cout<<"Enter the correct phrase: ";
    getline(cin, correct);
    cout<<"Enter what you actually typed: ";
    getline(cin, actual);
    string result=findBrokenKeys(correct,actual);
    
    
    cout<<"Broken keys: ";
    removeRep(result);
    
}
string findBrokenKeys(string correctPhrase, string actualTyped)
{   string result;
    for(int i = 0 ; correctPhrase[i]!='\0'; i++)
    {
        if(correctPhrase[i]!=actualTyped[i])
        {   if(correctPhrase[i]!=correctPhrase[i+1])
            result+= correctPhrase[i];
        }
        else{
            continue;
        }
    }
    
    return result;
}
string removeRep(string result)
{   int size=0;
    for(int i = 0; result[i]!='\0'; i++)
    {
        size++;
    }
    for(int a = 0; a<size; a++)
    {
        for(int x = a+1; x<size; x++)
        {
            if(result[a]==result[x]){
                for(int k = x; k<=size-1; k++)
                {
                    result[k]=result[k+1];
                }
                size--;
                x--;
            }
        }
    }
    cout<< result;
}