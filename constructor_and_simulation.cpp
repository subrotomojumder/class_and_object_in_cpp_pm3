#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g) // constructor
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main()
{
    int roll;
    int cls;
    double gpa;
    cin >> roll >> cls >> gpa;

    Student rohim(roll, cls, gpa); // use constructor

    // Student rohim(44, 10, 4.55);

    // rohim.roll = 44;
    // rohim.cls = 10;
    // rohim.gpa = 4.21;

    cout << rohim.roll << " " << rohim.cls << " " << rohim.gpa << endl;

    // Student korim;
    // korim.roll = 44;
    // korim.cls = 10;
    // korim.gpa = 5.00;

    // cout << korim.roll << " " << korim.cls << " " << korim.gpa << fixed << setprecision(4) << endl;
    return 0;
}