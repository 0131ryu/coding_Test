#include <bits/stdc++.h>
using namespace std;
int n, ret[10], temp;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        for (int j = 0; j < n; j++)
        {
            if (ret[j] == 0 && temp == 0)
            {
                ret[j] = i + 1;
                break;
            }
            else if (ret[j] == 0)
            {
                temp--;
            }
        }
    }

    // 결과
    for (int i = 0; i < n; i++)
    {
        cout << ret[i] << " ";
    }
}