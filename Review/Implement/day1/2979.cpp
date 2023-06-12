#include <bits/stdc++.h>
using namespace std;
int a, b, c, startTime, endTime, cnt[104], ret;
int main()
{
    cin >> a >> b >> c;
    for (int i = 0; i < 3; i++)
    {
        cin >> startTime >> endTime;
        for (int j = startTime; j < endTime; j++)
        {
            cnt[j]++;
            cout << cnt[j] << '\n';
        }
    }
    for (int j = 1; j < 100; j++)
    {
        if (cnt[j])
        {
            if (cnt[j] == 1)
            {
                ret += a;
            }
            else if (cnt[j] == 2)
            {
                ret += b * 2;
            }
            else if (cnt[j] == 3)
            {
                ret += c * 3;
            }
        }
    }
    cout << ret;
    return 0;
}