#include <iostream>

using namespace std;

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c)
{
    return a + b + c;
}

// Function to concatenate two strings
string add(string s1, string s2)
{
    return s1 + s2;
}

int main()
{
    // Testing the overloaded functions
    cout << "Sum of 5 and 7: " << add(5, 7) << endl;
    cout << "Sum of 3, 8, and 12: " << add(3, 8, 12) << endl;
    cout << "Concatenation of 'Hello' and ' World': " << add("Hello", " World") << endl;

    return 0;
}
