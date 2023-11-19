#include<iostream>
using namespace std;
main()
{   int count = 1;
    string sentence;
    cout<<"Enter a string: ";
    getline(cin, sentence);
    int sizeOfStr = 0;
    for(int i = 0; sentence[i]!='\0'; i++)
    {   
        sizeOfStr++;
        if(sentence[i]==' ')
        {   count++;
            
        }
    }

    string answer[count];
    int count1 = count;

    
        string word = "";
        
        for( int j = 0; j< sizeOfStr + 1;j++)
        {
            
            if(sentence[j] == ' ' || j == sizeOfStr)
            {
               
                answer[count1 - 1] = word;
                word = "";
                count1--;
               
            }
            else
            {
                
                word = word + sentence[j];
            }


        }
        

        string result = "";
        for(int i = 0;i<count;i++)
        {
            result = result + answer[i] + " ";
        }

        cout<<"Reversed string: "<<result;
        
   

        
    
    }
