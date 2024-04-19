#include <iostream>
using namespace std;

int oddNumbers(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}

int main()
{
    int a;
    cout << "Enter the value of a" << endl;
    cin >> a;
    int b;
    cout << "Enter the value of b" << endl;
    cin >> b;

    oddNumbers(a, b);
    return 0;
}