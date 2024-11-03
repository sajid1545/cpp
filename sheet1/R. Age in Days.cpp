#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int oneYear = 365;
    int oneMonth = 30;

    int years = N / 365; /// 2
    int months = (N - (years * 365)) / 30;
    int days = N - ((years * 365) + (months * 30));

    cout << years << " years" << "\n"
         << months << " months" << "\n"
         << days << " days";

    return 0;
}