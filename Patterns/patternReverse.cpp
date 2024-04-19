#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}