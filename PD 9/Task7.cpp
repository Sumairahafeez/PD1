#include<iostream>
#include<string>
using namespace std;
void convertPINToDance(string pin);
main()
{
    string pin;
    cout<<"Enter your PIN (4 digits): ";
    cin>>pin;
   
    int count = 0; 
    for(int i = 0; pin[i]!='\0'; i++)
    {   

        count++;
        
    }
   
    if(count!=4)
    {
        cout<<"Invalid input.";
    }
    else{
     convertPINToDance(pin);
    }
}
        
    
   

void convertPINToDance(string pin)
{   string move;
string st;
    string moves[10]={
        "Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabasque"};
    
    ;
    string  x ="48";
    int k = 0;
    for(int i = 0; pin[i]!='\0'; i++)
    {   
        
            move = pin[i]+to_string(i);
            for(int j = 0; move[j]!='\0'; j++)
            {
                move = move[j];
                k = stoi(move)+i;
                    if(k == 13)
                    k = 3;
                        if(k == 12)
                        k = 2;
                            if(k == 11)
                            k = 1;
                                if(k == 10)
                                k = 0;
                
            }
            cout<<moves[k];
            if(i!=3)
            cout<<", ";
            
        
    }
    
    
}        
        
