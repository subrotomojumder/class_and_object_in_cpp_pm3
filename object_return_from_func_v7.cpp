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
Student fun()
{
    Student korim(20, 8, 4.55);
    return korim;
}
int main()
{

    Student obj = fun();
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}