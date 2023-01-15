#include <iostream>
using namespace std;

int mydirection(int coordinateX, int coordinateY, int length);

main()
{
    int length;
    int coordinateX;
    int coordinateY;
    int result;

    cout<< "Enter length: ";
    cin >> length;
    cout << "Enter X coordinate: ";
    cin >> coordinateX;
    cout << "Enter y coordinate: ";
    cin >> coordinateY;

    result = mydirection(coordinateX, coordinateY, length);
    if(result == 1)
    {
        cout << "Inside";
    }
    if(result == 2)
    {
        cout << "Outside";
    }
    if(result == 3)
    {
        cout << "Border";
    }
    
}

int mydirection(int coordinateX, int coordinateY, int length)
{
    int direction;

    if(((coordinateX > 0) && (coordinateX < 3*length)) && (coordinateY > 0) && (coordinateY < length))
    {
        direction = 1;
    }
    else if(((coordinateX > length) && (coordinateX < 2*length)) && (coordinateY > 0) && (coordinateY < 4*length))
    {
        direction = 1;
    }
    else if(((coordinateX >= length) && (coordinateX <= 2*length)) && (coordinateY >= 0) && (coordinateY <= 4*length))
    {
        direction = 3;
    }
    else if(((coordinateX >= 0) && (coordinateX <= 3*length)) && (coordinateY >= 0) && (coordinateY <= length))
    {
        direction = 3;
    }
    else 
    {
        direction = 2;
    }
    return direction;
}