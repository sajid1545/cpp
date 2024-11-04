#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long A, B, C, D;

    cin >> A >> B >> C >> D;

    long long multipliedVal = A * B * C * D;

    long long lastTwoDigits = multipliedVal % 100;

    cout << lastTwoDigits;

    return 0;
}