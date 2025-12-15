#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort(a, a + 2); // first index to second
    // sort(a + 2, a + 5); // third index to fifth
    // sort(a, a + n); // first to last sort for ascending
    sort(a, a + n, greater<int>()); // descending order sort
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}