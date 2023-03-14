#include <bits/stdc++.h>
using namespace std;
int n, cnt[26];
string s, ret;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        // 첫 글자 비교
        cnt[s[0] - 'a']++;
    }
    // 첫 글자를 사전순으로 공백없이 모두 출력(a ~ z : 26)
    for (int i = 0; i < 26; i++)
    {
        // cout << cnt[i] << '\n';
        if (cnt[i] >= 5)
        {
            ret += i + 'a';
            cout << "ret.size()" << ret.size() << '\n';
            // cout << 'i' << i << '\n';
            // cout << "i + 'a'" << i + 'a' << '\n';
            // cout << "ret" << ret << '\n';
        }
    }
    if (ret.size())
    {
        cout << ret << '\n';
    }
    else
    {
        cout << "PREDAJA" << '\n';
    }
}