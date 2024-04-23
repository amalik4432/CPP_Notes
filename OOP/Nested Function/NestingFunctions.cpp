#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void in(void);
    void out(void);
    void check_binary(void);
    void once_compliment(void);
};
void binary ::in()
{
    cout << "Enter Binary code: ";
    cin >> s;
}
void binary::out(void)
{
    cout << "Binary code: ";
    for (int i = 0; i < s.length(); i++)
    {

        cout << s.at(i);
    }
    cout << endl;
}
void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "In correct number";
            exit(0);
        }
    }
}
void binary::once_compliment(void)
{
    check_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
int main()
{
    binary b;
    b.in();
    b.out();
    b.once_compliment();
    b.out();

    return 0;
}