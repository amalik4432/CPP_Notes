// Check palindrome
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    bool check = true;
    cin >> arr;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - i - i])
        {
            check = false;
        }
    }
    if (check == true)
    {
        cout << "Word is a pelrndrome";
        cout << endl;
    }
    else
    {
        cout << "Word is not a pelrndrome";
    }
    return 0;
}
