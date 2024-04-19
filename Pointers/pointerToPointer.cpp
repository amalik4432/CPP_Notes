#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *aptr = &a;
    cout << aptr << endl;  // Print address
    cout << *aptr << endl; // Print value
    int **q = &aptr;       // Pointer to pointer store address of aptr
    cout << *q;            // Prints the address stored in q, which is the address of aptr.
    // So it prints the address of "a" i.e., where the integer variable 'a'is stored.
    return 0;
}
