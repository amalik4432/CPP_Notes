#include <iostream>
using namespace std;
class sumC
{
private:
    int a, b;

public:
    // Default COnstructor
    sumC()
    {
        a = b = 10;
    }
    void display()
    {
        cout << "Value of a:" << a << endl;
        cout << "Value of b:" << a << endl;
    }
};
int main()
{
    sumC obj;

    obj.display();
    return 0;
}
