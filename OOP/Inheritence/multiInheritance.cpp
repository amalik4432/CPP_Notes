#include <iostream>
using namespace std;
class A
{
public:
    void afunc()
    {
        cout << "A wali inheritance" << endl;
    }
};
class B : public virtual A
{
public:
    void bInterit()
    {
        cout << "B wali inheritance" << endl;
    }
};
class C : public virtual A, public virtual B
{
};
int main()
{
    C inheri;
    inheri.afunc();
    inheri.bInterit();
    return 0;
}