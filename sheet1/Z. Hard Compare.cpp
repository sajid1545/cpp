#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long A, C;
    long long B, D;

    cin >>
        A >> B >> C >> D;

    cout << pow(A, B) << "   " << pow(C, D);

    // if (pow(A, B) > pow(C, D))
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }

    return 0;
}