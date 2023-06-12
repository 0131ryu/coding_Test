#include <bits/stdc++.h>
using namespace std;
int a, b, v, ret = 1;
int main()
{
    cin >> a >> b >> v;
    ret += (v - a) / (a - b);
    if ((v - a) % (a - b) != 0)
    {
        ret++;
    }
    if (a >= v)
    {
        cout << 1;
    }
    else
    {
        cout << ret;
    }
    // cout << "% : " << (v - a) % (a - b) << '\n';
    // cout << "/ : " << (v - a) / (a - b) << '\n';
    return 0;
}