#include <iostream>
using namespace std;
int main()
{
    int rows, col;
    cin >> rows >> col;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if ((i == 2 || i == 3) && (j == 2 || j == 3))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
