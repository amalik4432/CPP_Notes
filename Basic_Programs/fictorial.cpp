#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    int fictorial = 1;
    if (n < 0)
    {
        cout << "The number is negative. Please enter a positive integer.";
    }

    for (int i = 1; i <= n; i++)
    {
        fictorial *= i;
    }
    cout << fictorial;
    return 0;
}