#include<iostream>
using namespace std;
main()
{
    int size;
    int count = 0;
    char letter;
    cout<<"Enter how many words you want to Enter:";
    cin>>size;
    string words[size];
    
    for(int i = 0; i<size; i++)
    {   cout<<"Enter word "<<i+1<<": ";
        cin>>words[i];
    }
    cout<<"Enter the letter you want to count: ";
    cin>>letter;
    for(int x = 0; x<size; x++)
    {   string word = words[x]; 
         for(int i = 0; word[i]!='\0'; i++){ 
            if(letter==word[i])
            {
                count++;
            }
         }
        
    }
cout<<letter<<" shows up "<<count<<" times in the data.";
}