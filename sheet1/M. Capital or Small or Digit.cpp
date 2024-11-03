#include <iostream>

using namespace std;

int main()
{

    char X;

    cin >> X;

    int AsciiValue = int(X);

    if (AsciiValue >= 65 && AsciiValue <= 90)
    {
        cout << "ALPHA" << "\n"
             << "IS CAPITAL";
    }
    else if (AsciiValue >= 97 && AsciiValue <= 122)
    {
        cout << "ALPHA" << "\n"
             << "IS SMALL";
    }
    else if (AsciiValue >= 48 && AsciiValue <= 57)
    {
        cout << "IS DIGIT";
    }

    return 0;
}