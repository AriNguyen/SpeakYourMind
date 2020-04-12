// Cursor_Movement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{   
    int x, y;
  
    cout << "Enter the x,y position to move the cursor: \n";
    cin >> x;
    cin >> y;

    // move the cursor to the desired position 
    SetCursorPos(x, y);
    // Sleep for 1 second 
    Sleep(1000);
    cout << "Cursor Moved!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
