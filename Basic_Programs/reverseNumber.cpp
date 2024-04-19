#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number to Reverse";
    cin >> n;
    int reverse = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        /*  Assume i enter 1234, 0 * 10 = 0 + lastDigit = 4 then 4*10 + last digit = 40 + 3, 43 * 10 + lastDigit = 430 + 2 = 432 and so on... */
        n = n / 10;
    }

    cout << reverse << endl;
    system("pause");
    return 0;
}