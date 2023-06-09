#include <bits/stdc++.h>
using namespace std;
int arr[100][100];
int main()
{
    int n, x, y, ret = 0;
    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        for (int i = x; i < x + 10; i++)
        {
            for (int j = y; j < y + 10; j++)
            {
                if (!arr[i][j])
                {
                    ret++;
                    arr[i][j] = 1;
                }
            }
        }
    }
    cout << ret;
    return 0;
}