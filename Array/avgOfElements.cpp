#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n];
    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int average = sum / n;
    cout << average;
    return 0;
}