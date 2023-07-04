#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

void SetConsoleColor(int colorCode)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colorCode);
}

int main()
{
    cout << "Color Picker" << endl;
    cout << "-------------" << endl;
    cout << "Available Colors:" << endl;
    cout << "1. Red" << endl;
    cout << "2. Green" << endl;
    cout << "3. Blue" << endl;
    cout << "4. Aqua" << endl;
    cout << "5. Purple" << endl;
    cout << "6. Yellow" << endl;

    int colorCode;
    cout << "Enter the color code: ";
    cin >> colorCode;

    switch (colorCode)
    {
        case 1:
            SetConsoleColor(4);
            cout << "You selected Red!" << endl;
            break;
        case 2:
            SetConsoleColor(2);
            cout << "You selected Green!" << endl;
            break;
        case 3:
            SetConsoleColor(1);
            cout << "You selected Blue!" << endl;
             break;
        case 4:
            SetConsoleColor(3);
            cout << "You selected Aqua!" << endl;
            break;

        case 5:
            SetConsoleColor(5);
            cout << "You selected Purple!" << endl;
            break;
        case 6:
            SetConsoleColor(6);
            cout << "You selected Yellow!" << endl;
            break;
        default:
            cout << "Invalid color code!" << endl;
    }

    return 0;
}
