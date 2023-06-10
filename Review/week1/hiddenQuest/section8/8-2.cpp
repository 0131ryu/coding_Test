// 11005
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b;
    cin >> n >> b;
    string ret;

    while (n != 0)
    {
        int temp = n % b;
        if (temp < 10)
        {
            // 숫자를 문자로 바꾸기
            ret += (char)temp + '0';
        }
        else
        {
            ret += (char)temp - 10 + 'A';
        }
        n /= b;
    }
    reverse(ret.begin(), ret.end());
    cout << ret;
    return 0;
}