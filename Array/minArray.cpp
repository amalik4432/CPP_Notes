// Program to find min, max number in array

#include <iostream>
#include <climits>
using namespace std;
int main()
{

  int n;
  cout << "Enter Length of array: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int maxNo = INT_MIN;
  int minNo = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    maxNo = max(arr[i], maxNo); // for max number
    minNo = min(arr[i], minNo); // for min number
  }
  cout << "Greatest Number in array is: " << maxNo << endl;
  cout << "Smallest Number in array is: " << minNo << endl;
  return 0;
}