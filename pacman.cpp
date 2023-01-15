#include<iostream>
#include<windows.h>
using namespace std;
void print_maze();
void gotoxy(int x, int y);
void erase(int x, int y);
void print_pacman(int x, int y);
char getCharAtxy(short int x, short int y);
main()
{
    int pacmanX = 4;
    int pacmanY = 4;
    int score= 0;
    bool gameRunning = true;

    system("cls");
    print_maze();
    print_pacman(pacmanX, pacmanY);
    while(gameRunning)
    {
        if(GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if(nextLocation==' ')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                print_pacman(pacmanX, pacmanY);
            }
	    if(nextLocation=='.')
	    {
                gotoxy(76, 6);
                score = score +1;
                cout<<"SCORE:"<<score;
	        erase(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
		print_pacman(pacmanX, pacmanY);
	        cout<<" ";
                
	    }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if(nextLocation==' ')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                print_pacman(pacmanX, pacmanY);
            }
            if(nextLocation=='.')
            {
                gotoxy(76, 6);
                score = score +1;
                cout<<"SCORE:"<<score;
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                print_pacman(pacmanX, pacmanY);
                cout<<" ";
            }
        }
        if(GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
            if(nextLocation==' ')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                print_pacman(pacmanX, pacmanY);
            }
            if(nextLocation=='.')
            {

                gotoxy(76, 6);
                score = score +1;
                cout<<"SCORE:"<<score;
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                print_pacman(pacmanX, pacmanY);
                cout<<" ";
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
            if(nextLocation==' ')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                print_pacman(pacmanX, pacmanY);
            }
            if(nextLocation=='.')
            {
                gotoxy(76, 6);
                score = score +1;
                cout<<"SCORE:"<<score;
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                print_pacman(pacmanX, pacmanY);
                cout<<" ";

            }
        }
        if(GetAsyncKeyState(VK_ESCAPE))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
            if(nextLocation==' ')
            {
                gameRunning = false;
            }
           
        }   
            Sleep(100);
    }

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
    COORD xy ={0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
   }
     void erase(int x, int y)
     {
        gotoxy(x, y);
        cout<<" ";
     }
       void print_pacman(int x, int y)
       {
        gotoxy(x, y);
        cout<<"p";
       }
        void print_maze()
        {
           cout<<"########################################################################"<<endl;
           cout<<"||..    ....................................................  ......  ||"<<endl;
           cout<<"||.. %%%%%%%%%%%%%%%%%%                %%%%%%%%%%%%%%  |%|..   %%%%   ||"<<endl;
           cout<<"||..         |%|    |%|     |%|...     |%|        |%|  |%|..    |%|   ||"<<endl;
           cout<<"||..         |%|    |%|     |%|...     |%|        |%|  |%|..    |%|   ||"<<endl;
           cout<<"||..         %%%%%%%%%  ..  |%|...     %%%%%%%%%%%%%%     ..   %%%%.  ||"<<endl;
           cout<<"||..         |%|        ..  |%|...    ............... |%| ..       .  ||"<<endl;
           cout<<"||..         %%%%%%%%%%%..  |%|...    %%%%%%%%%%%%    |%| ..   %%%%.  ||"<<endl;
           cout<<"||..                 |%|.             |%|......       |%| ..    |%|.  ||"<<endl;
           cout<<"||..      .........  |%|.        p    |%|......|%|        ..    |%|.  ||"<<endl;
           cout<<"||..|%|   |%|%%%|%|. |%|. |%|            ......|%|        ..|%| |%|.  ||"<<endl;
           cout<<"||..|%|   |%|   |%|..     %%%%%%%%%%%%%  ......|%|         .|%|.      ||"<<endl;        
           cout<<"||..|%|   |%|   |%|..            ...|%|    %%%%%%%        . |%|.      ||"<<endl;
           cout<<"||..|%|             .            ...|%|               |%| ..|%|.      ||"<<endl;
           cout<<"||..|%|   %%%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"<<endl;
           cout<<"||.................................................   |%| ..........  ||"<<endl;
           cout<<"||   ..............................................          .......  ||"<<endl;
           cout<<"||..|%|  |%|   |%|..    %%%%%%%%%%%%%%%   ......|%|   |%| ..|%|.      ||"<<endl;
           cout<<"||..|%|  |%|   |%|..             ...|%|      %%%%%%   |%| ..|%|.      ||"<<endl;
           cout<<"||..|%|            .     G       ...|%|               |%| ..|%|.      ||"<<endl;
           cout<<"||..|%|  %%%%%%%%%%%%%%          ...|%|%%%%%%%%%%%    |%| ..|%|%%%%%  ||"<<endl;
           cout<<"||.................................................   |%| ..........  ||"<<endl;
           cout<<"||  ...............................................          .......  ||"<<endl;
           cout<<"########################################################################"<<endl;
        }