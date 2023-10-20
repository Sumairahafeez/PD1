#include <iostream>
using namespace std;
void businessName();
void menu();
void header();
void create();
main(){
    system("cls");
    header();
    int option;
    cout<<"#########################################"<<endl;
    cout<<"##1. MENU                              ##"<<endl;
    cout<<"##2. BILLING                           ##"<<endl;
    cout<<"##3. STOCK                             ##"<<endl;
    cout<<"##4. ATTENDENCE                        ##"<<endl;
    cout<<"##5. EXIT                              ##"<<endl;
    cout<<"##                                     ##"<<endl;
    cout<<"#########################################"<<endl;
    cout<<"#Your Options: ";
    cin>>option;
    if(option==1)
    {
        menu();
    } 
      
}
void menu()
{   int option;
  
    cout<<"######################################################"<<endl;
    cout<<"##1.CREATE MENU                                     ##"<<endl;
    cout<<"##2.UPDATE MENU                                     ##"<<endl;
    cout<<"##3.DELETE MENU                                     ##"<<endl;
    cout<<"##4.VIEW MENU                                       ##"<<endl;
    cout<<"##5.EXIT                                            ##"<<endl;
    cout<<"######################################################"<<endl;
    cout<<"Your Option: ";
    cin>>option;
   
  
    
  
    if(option==1){
         create();
        
    }
    
        
}
void create()
{   
    string lunch1, dinner1, lunch2, dinner2, lunch3, dinner3;
    cout<<"Menu for Monday Lunch: ";
    cin>>lunch1;
    cout<<"Menu for Monday dinner: ";
    cin>>dinner1;
    cout<<"Menu for Tuesday lunch: ";
    cin>>lunch2;
    cout<<"Menu for Tuesday dinner: ";
    cin>>dinner2;
    cout<<"Menu for Wednesday lunch: ";
    cin>>lunch3;
    cout<<"Menu for Wednesday dinner: ";
    cin>>dinner3;
}
void header(){
cout<<"                                                                                                       __                           __                   "<<endl;  
cout<<".--------..-----..-----..-----.  .--------..---.-..-----..---.-..-----..-----..--------..-----..-----.|  |_   .-----..--.--..-----.|  |_ .-----..--------."<<endl;
cout<<"|        ||  -__||__ --||__ --|  |        ||  _  ||     ||  _  ||  _  ||  -__||        ||  -__||     ||   _|  |__ --||  |  ||__ --||   _||  -__||        |"<<endl;
cout<<"|__|__|__||_____||_____||_____|  |__|__|__||___._||__|__||___._||___  ||_____||__|__|__||_____||__|__||____|  |_____||___  ||_____||____||_____||__|__|__|"<<endl;
cout<<"                                                                |_____|                                              |_____|                              "<<endl;
}
                                                                                                                                                          
                                                                                                                                                          
                                       
                                                                                                               



	


