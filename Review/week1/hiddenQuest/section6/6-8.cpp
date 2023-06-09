#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        int last_length = str.length();
        bool flag = true;
        for (int j = 0; j < last_length; j++)
        {
            for (int k = 0; k < j; k++)
            {
                // cout << "str[j] : " << str[j] << '\n';
                // cout << '\n';
                // cout << "str[k] : " << str[k] << '\n';
                if (str[j] != str[j - 1] && str[j] == str[k])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cnt++;
    }
    cout << cnt;
    return 0;
}