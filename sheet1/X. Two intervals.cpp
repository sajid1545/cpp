#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int l1, l2, r1, r2;

    cin >> l1 >> r1 >> l2 >> r2;

    if (r1 < l2 || r2 < l1)
    {
        cout << -1;
    }
    else
    {
        if (l1 <= l2 && r1 <= r2)
        {
            cout << l2 << " " << r1;
        }
        else if (l1 <= l2 && r1 >= r2)
        {
            cout << l2 << " " << r2;
        }
        else if (l2 <= l1 && r2 >= r1)
        {
            cout << l1 << " " << r1;
        }
        else if (l2 <= l1 && r1 >= r2)
        {
            cout << l1 << " " << r2;
        }
    }

    return 0;
}