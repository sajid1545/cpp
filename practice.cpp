#include <iostream>
using namespace std;

// Find the sum of first n Natural Numbers

int main()
{

    int X;

    cout << "Enter a number : " << endl;

    cin >> X;

    int sum = 0;
    cout << "The natural numbers upto" << X << "th terms are " << endl;
    for (int i = 0; i <= X; i++)
    {
        sum = sum + i;
        cout << i;
    }

    cout << "\n";

    cout << "The sum of the natural numbers is: " << sum << endl;
    return 0;
}