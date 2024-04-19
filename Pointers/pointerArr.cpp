#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 10, 15, 20};
    int *ptr = arr;
    for (int i = 0; i < 4; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }

    /* Also use this
    for (int i = 0; i < 4; i++)
    {
        cout << *(arr + i) << endl;
    } */
    return 0;
}
