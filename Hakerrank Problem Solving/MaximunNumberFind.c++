#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b && a > c && a > d)
    {
        cout << a << endl;
    }
    else if (b > a && b > c && b > d)
    {
        cout << b << endl;
    }
    else if (c > a && c > b && c > d)
    {
        cout << c << endl;
    }
    else
    {
        cout << d << endl;
    }
    return 0;
}