// Using function + private access

#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int rollNo;
    int age;

    void printInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "roll No: " << rollNo << endl;
        cout << endl;
    }
    void setname(string s)
    {
        name = s;
    }
};

int main()
{
    int n;
    cout << "Enter Number of Student: ";
    cin >> n;
    student arr[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cout << "Enter Name: ";
        cin >> s;
        arr[i].setname(s);
        cout << "Enter roll No: ";
        cin >> arr[i].rollNo;
        cout << "Enter age: ";
        cin >> arr[i].age;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i].printInfo();
    }

    return 0;
}