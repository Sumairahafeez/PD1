#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
int e3x=3, e3y=35;
void enemy3();
void eraseEnemy3();
maze(){
    printMaze();
    while(true){
        enemy3();
        eraseEnemy3();

    }

}
void printMaze()
{
    cout<<"#####################################################################################################################################"<<endl;
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
void enemy3(){
    if (e3y+1==80){
        e3y =35;
    }
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
void eraseEnemy3()
{
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
