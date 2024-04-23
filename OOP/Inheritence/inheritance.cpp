#include <iostream>

using namespace std;
class Base
{
    int id;
    float salary;

public:
    Base(int inid, float sal) : id(inid), salary(sal) {}
    void display()
    {
        cout << id << " " << salary;
    }
};
class Derived : public Base
{

    int bonus;

public:
    Derived(int inpid, float sal, int bon) : Base(inpid, sal), bonus(bon) {}
    void display()
    {
        cout << bonus;
    }
};
int main()
{
    Derived d(1, 12312.1, 102123211);
    d.Base::display();
    return 0;
}