#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        // (*this).roll = roll; // pointer dereference kore
        this->roll = roll; // shortcut way
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student* fun()
{
    Student korim(8, 12, 2.50);
    Student* p = &korim;
    //  cout << (*p).roll << " " << (*p).cls << " " << (*p).gpa << endl;
    return p;
}

int main()
{
    Student* p = fun(); // function return korar por sob delete kore dei
    cout << (*p).roll << " " << (*p).cls << " " << (*p).gpa << endl;
    return 0;
}