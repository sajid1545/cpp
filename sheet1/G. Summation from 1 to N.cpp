#include <iostream>

using namespace std;

int main()
{
    long long int N;

    cin >> N;

    long long sum = N * (N + 1) / 2;

    cout << sum;

    return 0;
}