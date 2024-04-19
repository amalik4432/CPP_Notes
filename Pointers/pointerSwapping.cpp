#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 5, b = 10;
    int *aptr = &a;
    int *bptr = &b;
    swap(aptr, bptr);
    cout << "Value of a: " << a << "\nValue of b: " << b << endl;
    return 0;
}
