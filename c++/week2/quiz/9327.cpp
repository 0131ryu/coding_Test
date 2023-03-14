#include <bits/stdc++.h>
using namespace std;
int t, n;
string a, b;
int main()
{
    cin >> t;
    while (t--)
    {
        map<string, int> _map;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            _map[b]++; // 종류
        }
        long long ret = 1; // 경우의 수는 long long으로 시작할 것
        for (auto c : _map)
        {
            ret *= ((long long)c.second + 1); // 종류마다 아무것도 안 입는 경우 +1
        }
        ret--; // 아무것도 안 입는 경우
        cout << ret << '\n';
    }
    return 0;
}