#include <iostream>

using namespace std;
class Base1
{
protected:
    int data1;

public:
    void setData1(int d1)
    {
        data1 = d1;
    }
};
class Base2
{
protected:
    int data2;

public:
    void setData2(int d2)
    {
        data2 = d2;
    }
};
class Child : public Base1, public Base2
{
protected:
    int data3;

public:
    void setData3(int d3)
    {
        data3 = d3;
    }
    int dataSum()
    {
        return (data1 + data2 + data3);
    }
    void display()
    {
        cout << "Data1 : " << data1 << endl;
        cout << "Data2 : " << data2 << endl;
        cout << "Data3 : " << data3 << endl;
    }
};
int main()
{
    Child c;
    c.setData1(2);
    c.setData2(3);
    c.setData3(4);
    c.display();
    cout << "Sum of data : " << c.dataSum() << endl;

    return 0;
}