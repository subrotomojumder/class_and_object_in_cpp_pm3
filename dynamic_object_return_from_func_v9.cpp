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
Student *fun()
{
    // int * arr = new int[44];
    Student *korim = new Student(5, 10, 2.44); // dynamic object declare
    // Student *p = &korim;
    return korim;
}
int main()
{
    Student *obj = fun();
    // Student rohim(10, 9, 4.50);
    cout << obj->roll << " " << obj->cls << " " << obj->gpa << endl;
    return 0;
}
// dynamic object without function
// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     int roll;
//     int cls;
//     double gpa;
//     Student(int roll, int cls, double gpa)
//     {
//         // (*this).roll = roll; // pointer dereference kore
//         this->roll = roll; // shortcut way
//         this->cls = cls;
//         this->gpa = gpa;
//     }
// };
// int main()
// {
//     Student * korim = new Student(10, 8, 4.55);
//     cout << korim->roll << " " << korim->cls << " " << korim->gpa << endl;
//     return 0;
// }
