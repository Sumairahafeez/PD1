#include<iostream>
using namespace std;
main()
{
    int days;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>days;
   
    int untreated = 0;
    int x =0, y =0;
    int treated = 0;
    for(int patients = 1; patients<=days; patients++)
    {   int visits;
        cout<<"Number of patients who visited hospital on Day "<<patients<<": ";
        cin>>visits;
        
            treated = 7;
          treated = y + treated;
          y = treated;
          if(visits<7){
            treated = treated-(6-visits);
          
          }
         
          
          
         if(visits>7){
            untreated = x+(visits-7);
            x =untreated;

         }
         if(untreated>treated){
            untreated = untreated-1;
            treated = treated+1;
            
          }
          
          
      
          
    }
    cout<<"Treated Patients: "<<treated<<endl;
         cout<<"Untreated Patients: "<<untreated<<endl;
    
}