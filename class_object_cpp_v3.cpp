// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     char name[100];
//     int roll;
//     double gpa;
// };

// int main()
// {
//     Student a;
//     char name[100] = "Bijoy";
//     // a.name = name;
//     strcpy(a.name, name);
//     a.roll = 10;
//     a.gpa = 3.5;
//     cout << a.name << " " << a.roll << " " << a.gpa << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    Student a, b;
    cin >> b.name >> b.roll >> b.gpa;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    cin.ignore(); // To ignore the enter key after previous input
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cout << a.name << " " << a.roll << " " << a.gpa << endl;

    return 0;
}