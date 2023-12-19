#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
using namespace std;
                          // GLOBAL VARIABLES//
int eX = 100, eY = 25;
int pX = 2, pY = 11;
int e2x = 2, e2y = 2;
int e3x = 3, e3y = 30;
int fire2X = 0, fire2Y = 0;
bool fired = false;
bool game=false;
float score = 0;
float fuel = 1000;
float life = 100;
bool e2xwallhit = false;
bool e3ywallhit = false;
int astX[1000000];
int astY[1000000];
int isAstActive[1000000];
int astCount = 0;
                                            // Players //
void player();
void enemy();
void enemy2();
void enemy3();
                                          //Graphics//
void maze();
void header();
int startUpMenu();
void instructions();
void scoreBoard();
string setcolor(unsigned short color);
char getCharAtxy(short int x, short int y);
void gotoxy(int x, int y);
                                        //Player Movement//
void movePlayer();
void movePlayerLeft();
void movePlayerRight();
void movePlayerDown();
void movePlayerUp();
void erasePlayer();
                                        //Enemey2 Movement//
void moveEnemy2();
void eraseEnemy2();
void patrolEnemy2();
                                          //Enemy 3 Movement//
void eraseEnemy3();
void moveEnemy3();
void patrolEnemy3();
                                                          //Scoring and Ponints//
float scoreCalculator();
int fuelLeft();
float lifeCalculator();
void checkLife(int life);
                                                          //Bombing By Player//
void moveBomb(int BombX, int BombY);
void eraseBomb(int BombX, int BombY);
void playerBomb();
void printBomb(int BombX, int BombY);
void eraseBomb(int BombX, int BombY);
void printBomb(int BombX, int BombY);
                                                        //Firing by Enemy 2//
void printFIRE();
void moveFire();
void eraseFire();
void shootingSecondEnemy();
                                                      //Firing by Enemy 3//
 bool generateBullet(int X);
 bool moveBullet();
void eraseBullet();
void printBullet();
                                                        //Game Over//
void gameOver();
void youWin();
void lifeEnd();
                                                        //Energy Booster//
// void energyBooster();
// void eraseEnergyBooster(int X, int Y);
main()
{
  system("cls");
  header();
  Sleep(100);
  int option;
  while(option != 3)
  {
     option = startUpMenu();
  //This Menu will provide User a Start up which asks user to get started or end the game without starting
  if(option == 1)
  {
    instructions();
  }
  if (option == 2)
   {
      system("cls");
      maze();
      player();
      enemy();
    while (true)
    {
      movePlayer();
      patrolEnemy2();
      patrolEnemy3();
      Sleep(50);
      eraseEnemy2();
      eraseEnemy3();
      scoreBoard();
      //  Till Now Loading of all the page and players are done//
     
      //  energyBooster();
       int speed = 0;
       if(game == true)
       {
        gameOver();
        break;
        }
        shootingSecondEnemy();
         if (e3y == 10)
           {
             generateBullet(10);
           }
        moveBullet();
        speed++;
        Sleep(30);
        playerBomb();
      }    
    
  }
  
  if (option == 0)
  {
    break;
  }
  }
  
 
  
}


void player()
{
  setcolor('2');
  gotoxy(pX, pY);
  cout << "                -:         " << endl;
  gotoxy(pX, pY + 1);
  cout << "       ...-==-:.::::-=--.. " << endl;
  gotoxy(pX, pY + 2);
  cout << "      ..::--=-=+++===-::..." << endl;
  gotoxy(pX, pY + 3);
  cout << "                ....       " << endl;
}
void enemy()
{
  setcolor('4');
  gotoxy(eX, eY);
  cout << "              .##-  " << endl;
  gotoxy(eX, eY + 1);
  cout << "          .-+#:=##: " << endl;
  gotoxy(eX, eY + 2);
  cout << ".-:::---=+##%##=*%#:" << endl;
  gotoxy(eX, eY + 3);
  cout << "      .+#%%%%%%%%#%#." << endl;
  gotoxy(eX, eY + 4);
  cout << "       +###########+." << endl;
}
void header()
{
  setcolor('2');
  cout << R"(
   .-')    .-. .-')                ('-.     .-')                        .-') _  .-. .-')        .-') _                 (`\ .-') /`     .-') _  
 ( OO ).  \  ( OO )             _(  OO)   ( OO ).                     ( OO ) ) \  ( OO )      ( OO ) )                 `.( OO ),'    ( OO ) ) 
(_)---\_) ,--. ,--.    ,-.-')  (,------. (_)---\_)    ,--. ,--.   ,--./ ,--,'  ,--. ,--.  ,--./ ,--,'   .-'),-----. ,--./  .--.  ,--./ ,--,'  
/    _ |  |  .'   /    |  |OO)  |  .---' /    _ |     |  | |  |   |   \ |  |\  |  .'   /  |   \ |  |\  ( OO'  .-.  '|      |  |  |   \ |  |\  
\  :` `.  |      /,    |  |  \  |  |     \  :` `.     |  | | .-') |    \|  | ) |      /,  |    \|  | ) /   |  | |  ||  |   |  |, |    \|  | ) 
 '..`''.) |     ' _)   |  |(_/ (|  '--.   '..`''.)    |  |_|( OO )|  .     |/  |     ' _) |  .     |/  \_) |  |\|  ||  |.'.|  |_)|  .     |/  
.-._)   \ |  .   \    ,|  |_.'  |  .--'  .-._)   \    |  | | `-' /|  |\    |   |  .   \   |  |\    |     \ |  | |  ||         |  |  |\    |   
\       / |  |\   \  (_|  |     |  `---. \       /   ('  '-'(_.-' |  | \   |   |  |\   \  |  | \   |      `'  '-'  '|   ,'.   |  |  | \   |   
 `-----'  `--' '--'    `--'     `------'  `-----'      `-----'    `--'  `--'   `--' '--'  `--'  `--'        `-----' '--'   '--'  `--'  `--'   

)";
  cout << endl;
}
int startUpMenu()
{
  system("cls");
  header();
   setcolor('0');
  int op;
  cout << setw(70) << "1. INSTRUCTIONS"<<endl;
  cout << setw(70) << "************" << endl;
  cout << setw(70) << "2. START OVER" << endl;
  cout << setw(70) << "************" << endl;
  cout << setw(70) << "3. END" << endl;
  cout << setw(70) << "************" << endl;
  cout<<setw(70)<<"Enter Your Option: ";
  cin >> op;
  return op;
}
void instructions()
{ system("cls");
  header();
  setcolor('0');
  cout<<setw(70)<<"RULES AND REGULATIONS!!!"<<endl;
  cout<<setw(70)<<"Rule 1: 1.	The Player has to get scores from the pills."<<endl;
  cout<<setw(70)<<"Rule 2: 2. Scores are only increased if the player engulfs the pills by vertically reaching it from the back."<<endl;
  cout<<setw(70)<<"Rule 3: 3.	Eating the pills once increases the scores but the fuel decreases with it."<<endl;
  cout<<setw(70)<<"Rule 4: 4. The player has a stipulated life which decreases as long as he gets in  the firing of the enemies."<<endl;
  cout<<setw(70)<<"Rule 5: 5.	The player has to reach the end by eating all the bonus pills and bomb the targeted Tank."<<endl;
  cout<<setw(70)<<"Rule 6: 6.	If the player bomb the target and has not eaten all the pills he will loose the game automatically."<<endl;
  cout<<setw(70)<<"Rule 7: 7.	Bomb should be dropped in the end."<<endl;
  cout<<setw(70)<<"Press any key to continue: ";
  getch();
}
void maze()

{
  setcolor('4');
  cout << "#####################################################################################################################################" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                              @                                                                  ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                       @                         ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                      @                                          ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                     @           ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "##                                                                                                                                 ##" << endl;
  cout << "#####################################################################################################################################" << endl;
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
  CHAR_INFO ci;
  COORD xy = {0, 0};
  SMALL_RECT rect = {x, y, x, y};
  COORD coordBufSize;
  coordBufSize.X = 1;
  coordBufSize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
string setcolor(unsigned short color)
{
  HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hcon, color);
  return "";
}

void erasePlayer()
{
  gotoxy(pX, pY);
  cout << "                           " << endl;
  gotoxy(pX, pY + 1);
  cout << "                           " << endl;
  gotoxy(pX, pY + 2);
  cout << "                           " << endl;
  gotoxy(pX, pY + 3);
  cout << "                           " << endl;
}
void enemy2()
{
  setcolor('0');
  gotoxy(e2x, e2y);
  cout << "      .              " << endl;
  gotoxy(e2x, e2y + 1);
  cout << ".:.. .:::..             " << endl;
  gotoxy(e2x, e2y + 2);
  cout << ".::=-=-::::::-==-=----.  " << endl;
  gotoxy(e2x, e2y + 3);
  cout << " .+===------::.........  " << endl;
  gotoxy(e2x, e2y + 4);
  cout << ".--::::...:..            " << endl;
  gotoxy(e2x, e2y + 5);
  cout << "  ..                     " << endl;
}
void eraseEnemy2()
{
  gotoxy(e2x, e2y);
  cout << "                        " << endl;
  gotoxy(e2x, e2y + 1);
  cout << "                        " << endl;
  gotoxy(e2x, e2y + 2);
  cout << "                        " << endl;
  gotoxy(e2x, e2y + 3);
  cout << "                        " << endl;
  gotoxy(e2x, e2y + 4);
  cout << "                        " << endl;
  gotoxy(e2x, e2y + 5);
}

void movePlayerLeft()
{
  erasePlayer();
  pX = pX - 1;
  player();
}
void movePlayerRight()
{
  erasePlayer();
  pX = pX + 1;
  player();
}
void movePlayerDown()
{
  erasePlayer();
  pY = pY + 1;
  player();
}
void movePlayerUp()
{
  erasePlayer();
  pY = pY - 1;
  player();
}
void moveEnemy2()
{
  eraseEnemy2();
  patrolEnemy2();
  enemy2();
}
void Enemy3()
{
  setcolor('0');
  gotoxy(e3x, e3y);
  cout << "  :::   " << endl;
  gotoxy(e3x, e3y - 1);
  cout << " :*==:  " << endl;
  gotoxy(e3x, e3y - 2);
  cout << "  +*=:.." << endl;
  gotoxy(e3x, e3y - 3);
  cout << "  :-:   " << endl;
}
void eraseEnemy3()
{
  gotoxy(e3x, e3y);
  cout << "            " << endl;
  gotoxy(e3x, e3y - 1);
  cout << "          " << endl;
  gotoxy(e3x, e3y - 2);
  cout << "          " << endl;
  gotoxy(e3x, e3y - 3);
  cout << "          " << endl;
}
void moveEnemy3()
{
  eraseEnemy3();
  e3y = e3y - 1;
  if (e3y == 20)
  {
    e3y = 47;
  }
  Enemy3();
}
void movePlayer()
{
  if (getCharAtxy(pX + 35, pY) == ' ')
  {
    if (GetAsyncKeyState(VK_RIGHT))
    {
      erasePlayer();
      movePlayerRight();
    }
  }
  if (getCharAtxy(pX - 1, pY) == ' ')
  {
    if (GetAsyncKeyState(VK_LEFT))
    {
      erasePlayer();
      movePlayerLeft();
    }
  }
  if (getCharAtxy(pX, pY - 5) == ' ')
  {
    if (GetAsyncKeyState(VK_UP))
    {
      erasePlayer();
      movePlayerUp();
    }
  }
  if (getCharAtxy(pX, pY + 10) == ' ')
  {
    if (GetAsyncKeyState(VK_DOWN))
    {
      erasePlayer();
      movePlayerDown();
    }
  }
}
void scoreBoard()
{
  gotoxy(133, 5);
  cout << "score: " << scoreCalculator() << endl;
  
  gotoxy(133, 6);
  cout << "life: " << lifeCalculator() << endl;
  gotoxy(133, 7);
  cout << "fuel left: " << fuelLeft() << endl;
}

float scoreCalculator()
{
  if((getCharAtxy(pX+29, pY) == '@' || getCharAtxy(pX+29, pY+1) == '@' || getCharAtxy(pX+29, pY+2) == '@' || getCharAtxy(pX+29, pY+3) == '@') && GetAsyncKeyState(VK_RIGHT))
  {
    score = score+5;
  }
  return score;
}

void patrolEnemy2()
{
  eraseEnemy2();
  if (!e2xwallhit)
  {
    e2x = e2x + 1;
  }
  if (e2x == 80)
  {
    e2xwallhit = true;
  }
  if (e2xwallhit)
  {
    e2x = e2x - 1;
    if (e2x < 2)
    {
      e2xwallhit = false;
    }
  }
  enemy2();
}
void patrolEnemy3()
{
  eraseEnemy3();
  if (!e3ywallhit)
  {
    e3y = e3y - 1;
  }
  if (e3y == 5)
  {
    e3ywallhit = true;
  }
  if (e3ywallhit)
  {
    e3y = e3y + 1;
    if (e3y == 30)
    {
      e3ywallhit = false;
    }
  }

  Enemy3();
}
int fuelLeft()
{   if(score == 5)
    {
        fuel = 9;
    }
    else if(score == 10)
    {
        fuel = 8;
    }
    else if(score == 15){
        fuel = 7;
    }
    else if( score == 20)
    {
        fuel = 6;
    }
    return fuel;
}
void printBomb(int BombX, int BombY)
{   
    gotoxy(BombX, BombY);
    cout<<"OOOO";
}
void eraseBomb(int BombX, int BombY)
{   
    gotoxy(BombX, BombY);
    cout<<"    ";
}
void gameOver()
{
    system("cls");
    setcolor('1');
    gotoxy(1, 70);
    cout<<R"(
    //   ) )                                         //   ) )                              
   //            ___        _   __        ___       //   / /              ___        __    
  //  ____     //   ) )   // ) )  ) )   //___) )   //   / /   ||  / /   //___) )   //  ) ) 
 //    / /    //   / /   // / /  / /   //         //   / /    || / /   //         //       
((____/ /    ((___( (   // / /  / /   ((____     ((___/ /     ||/ /   ((____     //        

    )";
    cout<<endl;
    // while(true)
    // {
    //     eraseEnemy2();
    // erasePlayer();
    // }
    
    // 
    Sleep(700);
     startUpMenu();
    
    

}
void youWin()
{
  cout<<R"(
\\    / /                         ||   / |  / /                        // 
 \\  / /      ___                 ||  /  | / /     ( )       __       //  
  \\/ /     //   ) )   //   / /   || / /||/ /     / /     //   ) )   //   
   / /     //   / /   //   / /    ||/ / |  /     / /     //   / /         
  / /     ((___/ /   ((___( (     |  /  | /     / /     //   / /   //     

  )";
  cout<<endl;                                                                          
  cout<<"Press Any Key to Continue: ";
  getch();
   Sleep(700);
    gameOver();
}
void lifeEnd()
{
  cout<<R"(
    / /                //  ) )                  //   / /                                    
   / /        ( )   __//__         ___         //____         __        ___   /      ___    
  / /        / /     //          //___) )     / ____       //   ) )   //   ) /     ((   ) ) 
 / /        / /     //          //           //           //   / /   //   / /       \ \     
/ /____/ / / /     //          ((____       //____/ /    //   / /   ((___/ /     //   ) )   

  )";
  cout<<endl;
  cout<<"Press Any Key to Continue: ";
  getch();
   Sleep(700);
    gameOver();
}
void youLost()
{
  cout<<R"(
\\    / /                             / /                                   
 \\  / /      ___                    / /         ___        ___     __  ___ 
  \\/ /     //   ) )   //   / /     / /        //   ) )   ((   ) )   / /    
   / /     //   / /   //   / /     / /        //   / /     \ \      / /     
  / /     ((___/ /   ((___( (     / /____/ / ((___/ /   //   ) )   / /      

  )";
  cout<<endl;
  cout<<"Press Any Key to Continue: ";
  getch();
   Sleep(700);
    gameOver();
}

void playerBomb()
{
    int BombX = pX+6;
    int BombY = pY+4;
    if(GetAsyncKeyState(VK_SPACE))
    {
       
            moveBomb(BombX, BombY);
          
        
    }
}
void moveBomb(int BombX, int BombY)
{
    while(BombY+4!=35)
    {
        printBomb(BombX, BombY);
            Sleep(50);
            eraseBomb(BombX, BombY);
            if((BombX == eX+1 || BombX == eX || BombX == eX+2 || BombX == eX+3) && BombY == eY && score == 20)
            {   youWin();
                game==true;
            }
            if(score<15 && (BombX == eX || BombX == eX+1 || BombX == eX+2 || BombX == eX+3) && BombY == eY )
            { 
              youLost();
            }
            BombY++;
            if(BombY+4 == 35)
            {
                break;
            }
    }
}
void printFIRE()
{
    gotoxy(fire2X, fire2Y);
    cout<<"()";
    
}
void moveFire()
{   
     gotoxy(fire2X, fire2Y);
    cout << "  ";
    if (getCharAtxy(fire2X, fire2Y + 1) == ' ')
    {
        fire2Y = fire2Y+1;
        gotoxy(fire2X, fire2Y);
        cout << "()";
       
    }
     else
    {   
        gotoxy(fire2X, fire2Y);
        cout << " ";
        fired = false;
    }
}
void eraseFire()
{
  gotoxy(fire2X, fire2Y);
  cout<<"  ";
}
 bool generateBullet(int X)
{
    int Y = 10;
    char next = getCharAtxy(X, Y);
    if (next == ' ')
    {
        astX[astCount] = X;
        astY[astCount] = Y;
        isAstActive[astCount] = true;
        astCount++;
        gotoxy(X, Y);
        cout << "   ";
    }
}

void eraseBullet(int X, int Y)
{
    gotoxy(X, Y);
    cout << " ";
}

void printBullet(int X, int Y)
{
    gotoxy(X, Y);
    cout << "--  ";
}

bool moveBullet()
{
    for (int x = 0; x < astCount; x++)
    {
        if (isAstActive[x] == true)
        {
            char next = getCharAtxy(astX[x] - 1, astY[x]);
            if (next != ' ')
            {
                eraseBullet(astX[x], astY[x]);
                isAstActive[x] = false;
            }
            else if (next == ' ')
            {
                eraseBullet(astX[x], astY[x]);
                astX[x] = astX[x] + 1;
                printBullet(astX[x], astY[x]);
            }
           
           if(astX[x]==120)
           {
             eraseBullet(astX[x], astY[x]);
                isAstActive[x] = false;
           }
    }
}   
}

// void energyBooster()
// {
//   int Y = 1 + rand() % 30;
//   int X = 1 + rand() % 30;
//   gotoxy(X, Y);
//   cout<<"@";
//   Sleep(100);
//   eraseEnergyBooster(X,Y);
// }
// void eraseEnergyBooster(int X, int Y)
// {
//   gotoxy(X, Y);
//   cout<<" ";
// }
void shootingSecondEnemy()
{
  for(int x = 10; x!=100; x=x+10)
  {
 if(e2x == x)
  {
    
        if (!fired)
            {   
                fire2X = x;
                fire2Y = 7;
                printFIRE();
                fired = true;
                
            }
         
  }
  }
  if(fired)
                {
                    moveFire();

                 } 
}
float lifeCalculator()
{
                if((fire2X == pX || fire2X == pX+1 || fire2X == pX+2 || fire2X == pX+3 || fire2X == pX+4 || fire2X == pX+5 || fire2X == pX+6 || fire2X == pX+7 || fire2X == pX+8 || fire2X == pX+9 || fire2X == pX+10 || fire2X == pX+11 || fire2X == pX+12 || fire2X == pX+13 || fire2X == pX+14 || fire2X == pX+15 || fire2X == pX+16 || fire2X == pX+17 || fire2X == pX+18 || fire2X == pX+19 || fire2X == pX+20)&& (fire2Y == pY || fire2Y == pY+1 || fire2Y == pY+2 || fire2Y == pY+3 || fire2Y == pY+4 || fire2Y == pY+5))
                {
                  life = life-3;
                }
                if(astX[astCount] == pX && astY[astCount] == pY)
                {
                  life = life - 1;
                }
                checkLife(life);
                return life;
}
void checkLife(int life)
{
  if(life == 0 || life<0)
  { lifeEnd();
 
  }
}