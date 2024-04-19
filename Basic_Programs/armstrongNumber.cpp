#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;
    int sum = 0;
    int original = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += round(pow(lastDigit, 3));
        n = n / 10;
    }
    //     There is problem when you use pow() function, this is happening because the return type of pow() is float and it returns numbers like 152.9999 but 0.9999 is truncated as we are storing it as an integer.
    // -> USE

    // sum += round(pow(lastdigit, 3));
    // round() will round 152.9999 to 153 and you will get the correct output
    if (sum == original)
    {
        cout << "is armstrong Number";
    }
    else
    {
        cout << "isnt" << endl;
    }
    system("pause");
    return 0;
}