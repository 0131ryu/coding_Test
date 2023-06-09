#include <bits/stdc++.h>
using namespace std;
int n, m, arrA[104][104], arrB[104][104], ret[104][104];
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arrA[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arrB[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ret[i][j] = arrA[i][j] + arrB[i][j];
            cout << ret[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}