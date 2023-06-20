#include <bits/stdc++.h>
using namespace std;
string str;
int cnt, ret[26];
int main()
{
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] < 97)
        {
            ret[str[i] - 65]++;
            // cout << str[i] - 65 << '\n';
        }
        else
        {
            ret[str[i] - 97]++;
            // cout << str[i] - 97 << " ";
        }
    }
    int max = 0, max_idx = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < ret[i])
        {
            max = ret[i];
            max_idx = i;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (max == ret[i])
        {
            cnt++;
        }
    }
    if (cnt > 1)
        cout << "?";
    else
        cout << (char)(max_idx + 65) << '\n';
    return 0;
}