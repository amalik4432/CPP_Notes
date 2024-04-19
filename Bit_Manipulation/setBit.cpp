#include <iostream>
using namespace std;

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int main()
{
    int n, pos;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter position ";
    cin >> pos;
    cout << setBit(n, pos) << endl;
    return 0;
}