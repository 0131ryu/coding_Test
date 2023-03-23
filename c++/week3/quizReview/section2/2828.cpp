#include <bits/stdc++.h>
using namespace std;
int n, m, j, ret, temp, l, r;
int main()
{
    cin >> n >> m >> j;
    l = 1;
    for (int i = 0; i < j; i++)
    {
        cin >> temp;   // 사과 개수
        r = l + m - 1; // m이 아닌 temp를 썼었음
        if (temp >= l && temp <= r)
            continue; // l과 r 사이
        else
        {
            if (temp < l)
            {
                ret += (l - temp);
                l = temp;
            }
            else
            {
                ret += (temp - r);
                l += temp - r;
            }
        }
    }
    cout << ret << '\n';
    return 0;
}