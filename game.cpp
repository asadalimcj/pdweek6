#include<iostream>
#include<windows.h>
using namespace std;
void print_maze();
void gotoxy(int x, int y);
void clear(int x, int y, char previous);
void show_pacman(int x, int y);
void show_gost(int x, int y);
char getCharAtxy(short int x, short int y);
main()
{
   int gx = 1;
   int gy = 1;
   string direction = "right";
   char previous_char = ' ';
   system("cls");
   print_maze();
   show_gost(gx, gy);
   while(true)
   {
      Sleep(100);
      if(direction=="right")
      {
         char nextlocation = getCharAtxy(gx+1, gy);
         if(nextlocation=='|')
         {
            direction = "left";
         }
         else if(nextlocation == ' ' || nextlocation == '.')
         {
           clear(gx, gy, previous_char);
           gx = gx +1;
           previous_char = nextlocation;
           show_gost(gx, gy);
         }
      }
      if(direction=="left")
      {
         char nextlocation = getCharAtxy(gx-1, gy);
         if(nextlocation=='|')
         {
            direction = "right";
         }
         else if(nextlocation == ' ' || nextlocation == '.')
         {
           clear(gx, gy, previous_char);
           gx = gx - 1;
           previous_char = nextlocation;
           show_gost(gx, gy);
         }
      }
   }


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
        void gotoxy(int x, int y)
        {
          COORD coordinates;
          coordinates.X = x;
          coordinates.Y = y;
          SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
        }
      
        void clear(int x, int y, char previous)
       {
         gotoxy(x, y);
         cout<<previous;
       }
       void show_gost(int x, int y)
       {
         gotoxy(x, y);
         cout<<"G";
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