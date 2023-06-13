#include <bits/stdc++.h>
using namespace std;
int n, len;
vector<int> v;
bool parser(string str)
{
    int sum = 0;
    int temp = 0;
    char sign = '+';
    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            temp = temp * 10 + (str[i] - '0');
            if (i == len - 1)
            {
                if (sign == '+')
                {
                    sum += temp;
                }
                else
                {
                    sum -= temp;
                }
            }
        }
        else if (str[i] == '+' || str[i] == '-')
        {
            if (sign == '+')
            {
                sum += temp;
            }
            else
            {
                sum -= temp;
            }
            temp = 0;
            sign = str[i];
        }
    }
    if (sum == 0)
    {
        return true;
    }
    return false;
}
void dfs(int num, string str)
{
    if (num == len)
    {
        if (parser(str))
        {
            cout << str << '\n';
        }
        return;
    }
    dfs(num + 1, str + " " + to_string(num + 1));
    dfs(num + 1, str + "+" + to_string(num + 1));
    dfs(num + 1, str + "-" + to_string(num + 1));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> len;
        string str = "1";
        dfs(1, str);
        cout << '\n';
    }
}

// https://m.blog.naver.com/zbqmgldjfh/222596371436