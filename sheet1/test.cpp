#include <iostream>

using namespace std;

int main()
{
    double a, b, c;

    cin >> a >> b >> c;

    double max, min, mid;

    if (a > b && a > c)
    {
        max = a;
        if (b > c)
        {
            mid = b;
            min = c;
        }
        else
        {
            mid = c;
            min = b;
        }
    }
    else if (b > a && b > c)
    {
        max = b;
        if (a > c)
        {
            mid = a;
            min = c;
        }
        else
        {
            mid = c;
            min = a;
        }
    }
    else if (c > a && c > b)
    {
        max = c;
        if (a > b)
        {
            mid = a;
            min = b;
        }
        else
        {
            mid = b;
            min = a;
        }
    }

    // Print the sorted order
    cout << min << "\n"
         << mid << "\n"
         << max << "\n";

    // Print a blank line
    cout << "\n";

    // Print the original order
    cout << a << "\n"
         << b << "\n"
         << c << "\n";

    return 0;
}