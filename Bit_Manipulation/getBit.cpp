#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return (n & (1 << pos)) != 0;
}

int main()
{
    int n, pos;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter position ";
    cin >> pos;
    cout << getBit(n, pos);
    return 0;
}