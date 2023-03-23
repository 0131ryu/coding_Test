// r : 바구니의 끝점(right)
// l : 바구니의 첫 점(left)

// 사과가 l과 r 사이 continue;
// 사과가 l과 r 밖에 표현, 떨어지는 위치 temp
//  l - temp (r은 l 기반이므로 상관없음)
#include <bits/stdc++.h>
using namespace std;
int n, m, j, l, r, temp, ret;
int main()
{
    cin >> n >> m >> j;
    l = 1;
    for (int i = 0; i < j; i++)
    {
        cin >> temp;
        r = l + m - 1;
        if (temp >= l && temp <= r)
            continue;
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
                l += (temp - r);
            }
        }
    }
    cout << ret << '\n';
    return 0;
}