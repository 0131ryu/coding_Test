#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, retA, retB;
    cin >> a >> b;
    cout << "(a % 10) * 100 : " << (a % 10) * 100 << '\n';
    cout << "(a / 10 % 10) * 10 : " << (a / 10 % 10) * 10 << '\n';
    cout << "a/100 : " << a / 100 << '\n';
    retA = (a % 10) * 100 + (a / 10 % 10) * 10 + (a / 100);
    retB = (b % 10) * 100 + (b / 10 % 10) * 10 + (b / 100);
    if (retA > retB)
    {
        cout << retA;
    }
    else
    {
        cout << retB;
    }
    return 0;
}