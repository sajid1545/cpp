#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float N;

    cin >> N;

    if (int(N) == N)
    {
        cout << "int " << N;
    }
    else
    {
        cout << "float " << int(N) << " " << fixed << setprecision(3) << N - int(N);
    }

    return 0;
}