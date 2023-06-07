#include <bits/stdc++.h>
using namespace std;
string s;
int cnt = 0, alpha[26];
int main()
{
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < 97)
        {
            // 소문자인 경우
            alpha[s[i] - 65]++;
        }
        else
        {
            alpha[s[i] - 97]++;
        }
    }
    int max = 0, max_index = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < alpha[i])
        {
            max = alpha[i];
            max_index = i;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (max == alpha[i])
        {
            cnt++;
        }
    }
    if (cnt > 1)
        cout << "?";
    else
        cout << (char)(max_index + 65);
    return 0;
}