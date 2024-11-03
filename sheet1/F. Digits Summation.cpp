#include <iostream>
#include <string>

using namespace std;

int main()
{
    string N, M;

    cin >> N >> M;

    char lastN = N.at(N.length() - 1);
    char lastM = M.at(M.length() - 1);

    long long int lastNDigit = lastN - '0';
    long long int lastMDigit = lastM - '0';

    cout << lastNDigit + lastMDigit;

    return 0;
}
