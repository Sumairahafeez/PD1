#include<iostream>
using namespace std;
bool isAvailable(string);
int counter(string);
main()
{
    int size;
    int count = 0;
    cout<<"Enter the number of words: ";
    cin>>size;
    string words;
    cout<<"Enter the words, one by one:"<<endl;
    int max =0;
    string result;
    for(int i = 0; i<size; i++)
    {
        cin>>words;
        if(isAvailable(words))
        {
            continue;
        }
        if(!isAvailable(words)){
            int count=counter(words);
            if(count>max){
                max=count;
                result = words;
            }
            
        }
    }
    cout<<"Longest 7-segment word: "<<result;
    
    
}
bool isAvailable(string word)
{  bool isFound = false;
   for(int i = 0; word[i]!='\0'; i++)
    {
        if(word[i]=='k' || word[i]=='m' || word[i]=='v' || word[i]=='w' || word[i] == 'x')
        {
            isFound=true;
        } 

    }
    return isFound;}

int counter(string word)
{
    int count = 0;
    for(int i = 0; word[i]!='\0'; i++)
    {
        count++;
    }
    
    
    return count;
}    