#include <iostream>

using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setData(void);
    int getData1();
    int getData2();
};

void Base::setData()
{
    data1 = 10;
    data2 = 20;
}
int Base::getData1()
{
    return data1;
}
int Base::getData2()
{
    return data2;
}
class derived : public Base
{
    int data3;

public:
    void process(void);
    void display(void);
};
void derived::process(void)
{
    data3 = data2 * getData1();
}
void derived::display(void)
{
    cout << "Data 1: " << getData1() << endl;
    cout << "Data 2: " << getData2() << endl;
    cout << "Data 3: " << data3 << endl;
}
int main()
{
    derived d;
    d.setData();
    d.process();
    d.display();

    return 0;
}