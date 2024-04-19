#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "BacDeF";

    // For Upper Case:

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
    cout << s << endl;

    // For Lower Case:

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    cout << s << endl;

    //  Using built-in Function

    string si = "BASCESG";
    transform(si.begin(), si.end(), si.begin(), ::tolower);
    cout << si << endl;
    return 0;
}
