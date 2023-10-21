#include<iostream>
using namespace std;
int primorial(int number);
bool isPrime(int);
main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<primorial(num);
}
bool isPrime(int currentNumber){
     if (currentNumber <= 1) 
	{
        	return false; 
   	 }
    
    int mod; int x=2;
    while(x<currentNumber){ 
         mod = currentNumber%x;
         
         if(mod == 0){
            return  false;
            continue; 
        }
        
        x++;
    }
    
  return true;  

}
int primorial(int number)
{
    
    int previous = 1;
    int currentNumber = 2;
    
    int count = 0;
    while(count<number)  
    {    if(isPrime(currentNumber)){
           previous = previous*currentNumber;
            count++;
        }
        currentNumber++;
    }
    return previous;
}
