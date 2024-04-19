#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "enter key";
    cin >> key;
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            cout << "key found at: " << i;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Key not found";
    }
    return 0;
}