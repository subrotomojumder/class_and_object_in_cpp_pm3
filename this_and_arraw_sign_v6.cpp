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
int main()
{
    Student rohim(10, 9, 4.50);
    cout << rohim.roll << " " << rohim.cls << " " << rohim.gpa << endl;
    return 0;
}