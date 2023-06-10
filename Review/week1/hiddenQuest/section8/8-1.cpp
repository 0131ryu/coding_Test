#include <bits/stdc++.h>
using namespace std;
int main()
{
    string b_num;
    int n, ret = 0;
    cin >> b_num >> n;
    for (int i = 0; i < b_num.length(); i++)
    {
        int temp = b_num[b_num.length() - (i + 1)];
        // cout << temp - '0' << '\n';
        // cout << temp + '0' << '\n';
        // cout << (int)pow(n, i) << '\n';
        // cout << temp + 10 - 'A' << '\n';
        if ('0' <= temp && temp <= '9')
        {
            temp = temp - '0';
        }
        else
        {
            temp = temp + 10 - 'A';
        }
        ret += (temp * (int)pow(n, i));
    }
    cout << ret;
    return 0;
}