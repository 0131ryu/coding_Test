#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    int ret;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        ret = 10000 + a * 1000;
    }
    else if (a == b)
    {
        ret = 1000 + a * 100;
    }
    else if (b == c)
    {
        ret = 1000 + b * 100;
    }
    else if (c == a)
    {
        ret = 1000 + c * 100;
    }
    else
    {
        int max = a;
        if (b > max)
            max = b;
        if (c > max)
            max = c;
        ret = max * 100;
    }
    cout << ret << '\n';
    return 0;
}
