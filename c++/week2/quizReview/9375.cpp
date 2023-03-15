#include <bits/stdc++.h>
using namespace std;
int t, n;
string a, b;
int main()
{
    cin >> t;
    while (t--)
    {
        map<string, int> mp;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            mp[b]++;
            // cout << "mp[b]++" << mp[b]++ << '\n';
        }
        long long ret = 1; // 경우의 수는 long long
        for (auto c : mp)
        {
            cout << "(long long)c.second : " << (long long)c.second << '\n';
            cout << "(long long)c.second + 1 : " << (long long)c.second + 1 << '\n';
            ret *= ((long long)c.second + 1);
        }
        ret--;
        cout << ret << '\n';
    }
    return 0;
}