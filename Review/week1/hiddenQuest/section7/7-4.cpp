#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100][100];
    int n, x, y, ret = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        for (int j = y; j < y + 10; j++)
        {
            for (int k = x; k < x + 10; k++)
            {
                if (!arr[j][k])
                {
                    ret++;
                    arr[j][k] = 1;
                }
            }
        }
    }
    cout << ret;
    return 0;
}