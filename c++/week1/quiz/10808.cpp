#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string str;
int cnt[26];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // 문자열 넣기
    cin >> str;
    for (char a : str)
    {
        cnt[a - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << cnt[i] << " ";
    }
    return 0;
}