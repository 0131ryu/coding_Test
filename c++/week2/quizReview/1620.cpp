#include <bits/stdc++.h>
using namespace std;
int n, m;
string s, a[100004];
map<string, int> mp;
map<int, string> mp2;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        mp[s] = i + 1; // 0부터시작하므로 +1
        mp2[i + 1] = s;
        a[i + 1] = s;
    }
    // 문제풀이
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        if (atoi(s.c_str()) == 0)
        { // 문자인 경우
            cout << mp[s] << '\n';
        }
        else
        { // 숫자인 경우
            // cout << mp2[atoi(s.c_str())] << '\n';
            cout << a[atoi(s.c_str())] << '\n';
        }
    }
}