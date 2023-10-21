#include<iostream>
using namespace std;
bool isPrime(int number);
main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<isPrime(num);
}
bool isPrime(int number)
{   bool result;
int mod; int x=2;
    while(x<number){ 
         mod = number%x;
         
         if(mod == 0){
            return  false;
            continue; 
        }
        
        x++;
    }
    
  return true;  
   
    
}

