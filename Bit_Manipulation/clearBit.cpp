#include <iostream>
using namespace std;

int clearBit(int n, int pos)
{
    int marks = ~(1 << pos);
    return (n & marks);
}

int main()
{
    int n, pos;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter position ";
    cin >> pos;
    cout << clearBit(n, pos) << endl;
    return 0;
}