#include <iostream>
using namespace std;
class A
{
public:
    int a = 10;
    A()
    {
        cout << "Created" << endl;
    }
    ~A()
    {
        cout << "Destroyed" << endl;
    }
};
int main()
{
    A obj;

    return 0;
}