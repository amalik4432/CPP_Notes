#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "Bacdfehg";
    sort(str.begin(), str.end(), [](char a, char b)
         { return tolower(a) < tolower(b); });
    cout << str << endl;
    return 0;
}
