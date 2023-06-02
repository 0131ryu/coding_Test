#include <bits/stdc++.h>
using namespace std;
int a[101];
int n, m;
int main()
{
    cin >> n >> m;
    while (m--)
    {
        int i, j, k;
        cin >> i >> j >> k;
        for (int b = i; b <= j; b++)
        {
            a[b] = k;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}