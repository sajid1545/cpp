#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, B, C, Output;
    char S, Q;
    bool condition;

    cin >> A >> S >> B >> Q >> C;

    switch (S)
    {
    case '+':
        condition = (A + B == C);
        Output = A + B;
        break;
    case '-':
        condition = (A - B == C);
        Output = A - B;
        break;
    case '*':
        condition = (A * B == C);
        Output = A * B;
        break;

    default:
        break;
    }

    if (condition)
    {
        cout << "Yes";
    }
    else
    {
        cout << Output;
    }

    return 0;
}