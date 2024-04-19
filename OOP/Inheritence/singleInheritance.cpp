#include <iostream>
using namespace std;
class A
{
public:
    int afunc()
    {
        cout << "inheritence" << endl;
        return 0;
    }
};
class B : public A
{
};
int main()
{
    B inheri;
    inheri.afunc();

    return 0;
}