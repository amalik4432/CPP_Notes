#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;
    bool gender; // 0 for female, 1 for male

public:
    student()
    {
        cout << "\nDefault Constructor" << endl;
    }
    // Perameterised Constructor
    student(string s, int a, bool g)
    {
        cout << "\nPerameterised Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    }
    // Copy Constructor
    student(student &a)
    {
        cout << "\nCopy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
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
    student a("ALI", 11, 1);
    a.display();
    student b;
    student c(a);
    c.display();
    return 0;
}