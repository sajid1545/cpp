#include <iostream>
using namespace std;

int main()
{
    char X;
    cin >> X;

    int AsciiValue = int(X); // Convert character to its ASCII value

    // Check if the character is uppercase
    if (AsciiValue >= 65 && AsciiValue <= 90)
    {
        cout << char(AsciiValue + 32); // Convert to lowercase by adding 32
    }
    // Check if the character is lowercase
    else if (AsciiValue >= 97 && AsciiValue <= 122)
    {
        cout << char(AsciiValue - 32); // Convert to uppercase by subtracting 32
    }

    return 0;
}
