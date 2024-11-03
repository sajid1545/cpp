#include <iostream>

using namespace std;

int main()
{

    int A, B;

    cin >> A >> B;

    int isMultiple = A % B;
    int isMultiple2 = B % A;

    if (isMultiple == 0)
    {
        cout << "Multiples";
    }
    else if (isMultiple2 == 0)
    {
        cout << "Multiples";
    }
    else
    {
        cout << "No Multiples";
    }

    return 0;
}