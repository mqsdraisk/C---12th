// write a program that uses getch(), getche(), gets() and puts() functions for I/O operations;

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    char ch;
    char str[100];

    // Demonstration of getche() - Echoes the character
    cout << "Enter a character using getche(): ";
    ch = getche();
    cout << endl;
    cout << "You entered: " << ch << endl;

    // Demonstration of getch() - No echo of the character
    cout << "Enter another character using getch(): ";
    ch = getch();
    cout << endl;
    cout << "You entered: " << ch << endl;

    // Demonstration of gets() - Reads a string
    cout << "Enter a string using gets(): ";
    gets(str);
    cout << "You entered: ";
    puts(str);

    return 0;
}
