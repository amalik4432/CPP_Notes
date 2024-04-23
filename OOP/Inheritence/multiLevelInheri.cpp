#include <iostream>

using namespace std;
class student
{
protected:
    int rollNo;

public:
    void setRollNo(int);
    void getRollNo(void);
};
void student::setRollNo(int r)
{
    rollNo = r;
}
void student::getRollNo(void)
{
    cout << "Roll No is: " << rollNo << endl;
}

class exam : public student
{
protected:
    float math, physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};
void exam::setMarks(float m, float p)
{
    math = m;
    physics = p;
}

void exam::getMarks(void)
{
    cout << "Marks of math is: " << math << endl;
    cout << "Marks of physics is: " << physics << endl;
}
class result : public exam
{
public:
    void display(void);
};

void result::display(void)
{
    getRollNo();
    getMarks();
}
int main()
{
    result r1;
    r1.setRollNo(1);
    r1.setMarks(12.1, 32.3);
    r1.display();

    return 0;
}