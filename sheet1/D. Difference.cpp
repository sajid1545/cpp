#include <string>
#include <iostream>

using namespace std;

int main()
{
    long long int A, B, C, D;

    cin >> A >> B >> C >> D;

    long long int difference = (A * B) - (C * D);

    cout << "Difference = " << difference;

    return 0;
}