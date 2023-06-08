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
            alpha[s[i] - 65]++;
        }
        else
        {
            alpha[s[i] - 97]++;
        }
        // cout << alpha[i] << '\n';
    }
    int max = 0, max_idx = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < alpha[i])
        {
            max = alpha[i];
            max_idx = i;
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
        cout << (char)(max_idx + 65);
    return 0;
}