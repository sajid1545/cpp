#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate B * log(A) and D * log(C) for comparison
    double left_side = B * log(A);
    double right_side = D * log(C);

    // Compare the two results
    if (left_side > right_side)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
