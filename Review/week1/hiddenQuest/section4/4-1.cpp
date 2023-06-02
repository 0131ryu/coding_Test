#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[104], b;
    int ret = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> b;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b)
        {
            ret++;
        }
    }
    cout << ret << '\n';
    return 0;
}