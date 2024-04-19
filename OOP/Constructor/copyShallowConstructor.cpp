// in SHALLOW COPY pointer are copied but where(locations) they are pointing aint copy

#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;
    bool gender; // 0 for female, 1 for male

public:
    // Perameterised Constructor
    student(string s, int a, bool g)
    {
        name = s;
        age = a;
        gender = g;
    }
    void display()
    {
        cout << "Name is: " << name << endl;
        cout << "Age is: " << age << endl;
        cout << "Gender is: " << gender << endl;
    }
};
int main()
{
    student s("ALI", 11, 1);
    student d(s);
    d.display();
    return 0;
}