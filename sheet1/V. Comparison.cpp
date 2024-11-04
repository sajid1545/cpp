#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, B;
    char S;
    bool condition;

    cin >> A >> S >> B;

    switch (S)
    {
    case '>':
        condition = A > B;
        break;
    case '<':
        condition = A < B;
        break;
    case '=':
        condition = A == B;
        break;

    default:
        break;
    }

    if (condition)
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }

    return 0;
}