#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int rollNo;
    int age;
};

int main()
{
    int n;
    cout << "Enter Number of Student: ";
    cin >> n;
    student arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Name: ";
        cin >> arr[i].name;
        cout << "Enter roll No: ";
        cin >> arr[i].rollNo;
        cout << "Enter age: ";
        cin >> arr[i].age;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "name: " << arr[i].name << endl;
        cout << "age: " << arr[i].age << endl;
        cout << "roll No: " << arr[i].rollNo << endl;
        cout << endl;
    }

    return 0;
}