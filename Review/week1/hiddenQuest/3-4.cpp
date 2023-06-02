#include <bits/stdc++.h>
using namespace std;
int x, n, a, b, ret[100000];
int main()
{
    cin >> x;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum += a * b;
    }
    if (sum == x)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }
    return 0;
}