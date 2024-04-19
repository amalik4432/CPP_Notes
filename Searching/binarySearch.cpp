#include <iostream>
using namespace std;
int binarySearch(int key, int arr[], int n, bool flag)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            cout << "Key found at index: " << mid << endl;
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int arr[n];
    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key: ";
    cin >> key;
    cout << binarySearch(key, arr, n, flag);
    return 0;
}
