#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long A, B, C, D;

    cin >> A >> B >> C >> D;

    long multipliedVal = (A % 100) * (B % 100) * (C % 100) * (D % 100);

    int lastTwoDigits = multipliedVal % 100;

    if (lastTwoDigits >= 0 && lastTwoDigits <= 9)
    {
        cout << "0" << lastTwoDigits;
    }
    else
    {

        cout << lastTwoDigits;
    }

    return 0;
}