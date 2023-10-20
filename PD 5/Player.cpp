#include<iostream>
#include<windows.h>
using namespace std;
int eX=90, eY=35;
int pX=2, pY=11;
int e2x=2, e2y=2;
int e3x=2, e3y=35;
void player();
void enemy();
void maze();
void movePlayer();
void movePlayerLeft();
void movePlayerRight();
void movePlayerDown();
void movePlayerUp();
void erasePlayer();
void enemy2();
void moveEnemy2();
void eraseEnemy2();
void eraseEnemy3();
void moveEnemy3();
char getCharAtxy(short int x, short int y);
void gotoxy(int x, int y);
main()
  { system("cls");
    maze();
    player();
    enemy();
    while(true){if (getCharAtxy(pX+50,pY)== ' '){ 
      if (GetAsyncKeyState(VK_RIGHT)){
        erasePlayer();
        movePlayerRight();
        }
     }
      
      
      
      if(getCharAtxy(pX-1,pY)==' ') {        
      if (GetAsyncKeyState(VK_LEFT)){
        erasePlayer();
        movePlayerLeft();
        }
      }
      
      
      
      if(getCharAtxy(pX, pY-5) == ' '){
      if (GetAsyncKeyState(VK_UP)){
        erasePlayer();
        movePlayerUp();
        }
      }
      
      if(getCharAtxy(pX, pY+10) == ' '){
      if (GetAsyncKeyState(VK_DOWN)){
        erasePlayer();
        movePlayerDown();
                    
      }}

      
    moveEnemy2();
    if(e2x==80){
      eraseEnemy2();
    }
    if(e2x==80){
      e2x = 2;
      eraseEnemy2();
      moveEnemy2();
      Sleep(100);
      
    }
   
    
    Sleep(150);
    eraseEnemy2();
    }
        
        
  
    
    gotoxy(eX,eY);
    gotoxy(pX,pY);
    gotoxy(1, 80);
  }
   
  
    

                                 
void player()
{gotoxy(pX,pY);
cout<<"     :--. ...                 "<<endl;
gotoxy(pX,pY+1);
cout<<"    .-----:::::.    .-==-.    "<<endl;
gotoxy(pX,pY+2);
cout<<"  .:===-::::::::::::::::::... "<<endl;
gotoxy(pX,pY+3);
cout<<"   :---::::::::::::::.        "<<endl;
gotoxy(pX,pY+4);
cout<<".::...:::::..                 "<<endl;
gotoxy(pX,pY+5);
cout<<"      ....                    "<<endl;
                   
}
void enemy()
{gotoxy(eX,eY); 
 cout<<"     ..:.                        "<<endl;  
 gotoxy(eX,eY+1);                       
 cout<<"     .:: ...                     "<<endl;
 gotoxy(eX,eY+2); 
 cout<<"        ...  ... .:::::::.       "<<endl; 
 gotoxy(eX,eY+3); 
 cout<<"           ...  ...       ..:    "<<endl;
 gotoxy(eX,eY+4);  
 cout<<"           ......:          :   "<<endl; 
 gotoxy(eX,eY+5); 
 cout<<"        ...:-::::::::::-:::-:.  "<<endl; 
 gotoxy(eX,eY+6); 
 cout<<"       ..                      .."<<endl; 
 gotoxy(eX,eY+7); 
 cout<<"      ..                      ..:"<<endl;
 gotoxy(eX,eY+8); 
 cout<<"      .:.....-::-::....::-----:: "<<endl; 
 gotoxy(eX,eY+9); 
 cout<<"        :    ::.---     ::.=-::  "<<endl;
 gotoxy(eX,eY+10);  
 cout<<"        .....-:.  ......-.      "<<endl; 
                  
                                                                                          
}
void maze()


{
 cout<<   "#####################################################################################################################################"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"##                                                                                                                                 ##"<<endl;
    cout<<"#####################################################################################################################################"<<endl;
    
}


  void gotoxy(int x, int y)
    {	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), coordinates);
}
  char getCharAtxy (short int x, short int y)
  {
    CHAR_INFO ci;
    COORD xy = {0,0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE) , &ci, coordBufSize , xy , &rect) ? ci.Char.AsciiChar: ' ';
  }    

  void erasePlayer()
{gotoxy(pX,pY);
cout<<"                                            "<<endl;
gotoxy(pX,pY+1); 
cout<<"                                                "<<endl;
gotoxy(pX,pY+2);    
cout<<"                                                "<<endl;
gotoxy(pX,pY+3);
cout<<"                                        "<<endl;
gotoxy(pX,pY+4);
cout<<"                                           "<<endl;
gotoxy(pX,pY+5);
cout<<"                                        "<<endl;
gotoxy(pX,pY+6);
cout<< "                                        "<<endl;
gotoxy(pX,pY+7);
cout<<"                                        "<<endl;
gotoxy(pX,pY+8);
cout<<"                                        "<<endl;
gotoxy(pX,pY+9);
cout<<"                                         "<<endl;
gotoxy(pX,pY+10);
cout<<"                                     "<<endl;
}
void enemy2()
{gotoxy(e2x,e2y);
  cout<<"    .:                     "<<endl;  
  gotoxy(e2x,e2y+1);                 
  cout<<"  =**=-=:     ::=-=:.       "<<endl;
  gotoxy(e2x,e2y+2);  
  cout<<"  .***+-::---=+*++***+-:.   "<<endl;
  gotoxy(e2x,e2y+3);  
  cout<<"...=***+=---::::::..        "<<endl;
  gotoxy(e2x,e2y+4);  
  cout<<" =*=***+-::::.              "<<endl;
  gotoxy(e2x,e2y+5);  
  cout<<" .--+-:::-:::               "<<endl;
  gotoxy(e2x,e2y+6);  
  cout<<" .::     :---:              "<<endl;
  gotoxy(e2x,e2y+7);  
  cout<<"         ...                "<<endl;

} 
void eraseEnemy2()
{
  gotoxy(e2x,e2y);
cout<<"                                                 "<<endl;
gotoxy(e2x,e2y+1);
cout<<"                                                 "<<endl;
gotoxy(e2x,e2y+2);
cout<<"                                                 "<<endl;
gotoxy(e2x,e2y+3);
cout<<"                                                 "<<endl;
gotoxy(e2x,e2y+4);
cout<<"                                                  "<<endl;
gotoxy(e2x,e2y+5);
cout<<"                                                  "<<endl;
gotoxy(e2x, e2y+6);
cout<<"                                     "<<endl;
gotoxy(e2x, e2y+7);
cout<< "                                    "<<endl; 
}                                                                                                    

void movePlayerLeft()
{
  erasePlayer();
  pX = pX-1;
  player();
}  
void movePlayerRight()
{
  erasePlayer();
  pX=pX+1;
  player();
}      
void movePlayerDown()
{
  erasePlayer();
  pY = pY+1;
  player();
}
void movePlayerUp()
{
  erasePlayer();
  pY= pY-1;
  player();
}                                                                                  
 void moveEnemy2()
 {
 if(e2x==80){
  
  
  e2x ==2;
 }
  e2x=e2x+1;
  gotoxy(e2x+1,e2y);
cout<<"     :--. ...                 "<<endl;

gotoxy(e2x+2,e2y+1);
cout<<"    .-----:::::.    .-==-.    "<<endl;

gotoxy(e2x+3,e2y+2);
cout<<"  .:===-::::::::::::::::::... "<<endl;

gotoxy(e2x+4,e2y+3);
cout<<"   :---::::::::::::::.        "<<endl;

gotoxy(e2x+5,e2y+4);
cout<<".::...:::::..                 "<<endl;

gotoxy(e2x+6,e2y+5);
cout<<"      ....                    "<<endl;
 

 }
 void moveEnemy3()
 {
  
 gotoxy(e3x, e3y+1);   
 cout<<"     .+:   "<<endl;
 gotoxy(e3x, e3y+2);      
 cout<<"     +-+   "<<endl;
 gotoxy(e3x, e3y+3);    
 cout<<"    .+:+.  "<<endl;
 gotoxy(e3x, e3y+3);    
 cout<<"    .+:+.  "<<endl; 
 gotoxy(e3x, e3y+4);   
 cout<<"    .+:+.  "<<endl;
 gotoxy(e3x, e3y+5);    
 cout<<"    .+:+.  "<<endl;
 gotoxy(e3x, e3y+6);    
 cout<<"    .+:+.  "<<endl;
 gotoxy(e3x, e3y+7);    
 cout<<"    .+-+.  "<<endl;
 gotoxy(e3x, e3y+8);   
 cout<<"   .#***#: "<<endl;
 gotoxy(e3x, e3y+9);   
 cout<<"  -%@*#+@%="<<endl;
 gotoxy(e3x, e3y+10);   
 cout<<"  =-.+#+.-="<<endl;
 gotoxy(e3x, e3y+11);   
 cout<<"    .*=*:  "<<endl;
 gotoxy(e3x, e3y+12);   
 cout<<"    -*=+=  "<<endl;
 gotoxy(e3x, e3y+13);   
 cout<<"    .#+*:  "<<endl;
 gotoxy(e3x, e3y+14);   
 cout<<"     *+*   "<<endl;
 gotoxy(e3x, e3y+15);   
 cout<<"     -#=   "<<endl;
 gotoxy(e3x, e3y+16);   
 cout<<"      #.   "<<endl;
} 
 void eraseEnemy3(){
   gotoxy(e3x, e3y+1);   
 cout<<"          "<<endl;
 gotoxy(e3x, e3y+2);      
 cout<<"          "<<endl;
 gotoxy(e3x, e3y+3);    
 cout<<"          "<<endl;
 gotoxy(e3x, e3y+3);    
 cout<<"          "<<endl; 
 gotoxy(e3x, e3y+4);   
 cout<<"          "<<endl;
 gotoxy(e3x, e3y+5);    
 cout<<"          "<<endl;
 gotoxy(e3x, e3y+6);    
 cout<<"          "<<endl;
 gotoxy(e3x, e3y+7);    
 cout<<"          "<<endl;
 gotoxy(e3x, e3y+8);   
 cout<<"          "<<endl;
 gotoxy(e3x, e3y+9);   
 cout<<"           "<<endl;
 gotoxy(e3x, e3y+10);   
 cout<<"            "<<endl;
 gotoxy(e3x, e3y+11);   
 cout<<"           "<<endl;
 gotoxy(e3x, e3y+12);   
 cout<<"           "<<endl;
 gotoxy(e3x, e3y+13);
 cout<<"           "<<endl;
 gotoxy(e3x, e3y+14);   
 cout<<"           "<<endl;
 gotoxy(e3x, e3y+15);   
 cout<<"            "<<endl;
 gotoxy(e3x, e3y+16);   
 cout<<"            "<<endl;   
}  

 

                                                                                         
                                                                                          
                                                                                          
                                                                                          
                                                                                          
                                                                                          
                                                                                          
                                                                                          
                                                             















                                                                                          
                                                                                          


                                    

