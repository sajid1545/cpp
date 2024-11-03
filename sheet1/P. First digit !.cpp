#include <iostream>
#include <string>
using namespace std;

int main()
{

    int X;

    cin >> X;

    string numToString = to_string(X);

    string firstString = numToString.substr(0, 1);

    int firstDigit = stoi(firstString);

    if (firstDigit % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }

    return 0;
}
