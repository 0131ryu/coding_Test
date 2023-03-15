#include <bits/stdc++.h>
using namespace std;
string s, ret;
int cnt[200], flag;
char mid;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    for (char a : s)
        cnt[a]++; // cout << a << '\n';
    for (int i = 'Z'; i >= 'A'; i--)
    {
        if (cnt[i])
        {
            if (cnt[i] & 1)
            { // 홀수면
                mid = char(i);
                flag++;
                // cout << "i : " << i << '\n';
                // cout << "cnt[i] : " << cnt[i] << '\n';
                cnt[i]--;
                // cout << "mid : " << mid << '\n';
                // cout << "char(i)1 : " << char(i) << '\n';
                // cout << "flag : " << flag << '\n';
            }
            if (flag == 2)
                break;
            for (int j = 0; j < cnt[i]; j += 2)
            {
                // cout << "char(i)2 : " <<  char(i) << '\n';
                ret = char(i) + ret; // ret 앞에 붙임
                ret += char(i);      // ret 뒤에 붙임
            }
        }
    }
    if (mid)
    {
        // cout << "mid : " << mid << '\n';
        ret.insert(ret.begin() + ret.size() / 2, mid);
        // cout << "ret : " << ret << '\n';
        // cout << "ret.size() : " << ret.size()  << '\n';
    }
    if (flag == 2)
        cout << "I'm Sorry Hansoo\n";
    else
        cout << ret << '\n';
}