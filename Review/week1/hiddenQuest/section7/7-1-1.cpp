#include <bits/stdc++.h>
using namespace std;
int n, m;
int main()
{
    cin >> n >> m;
    vector<vector<int>> arrA(n, vector<int>(m));
    vector<vector<int>> arrB(n, vector<int>(m));
    vector<vector<int>> arrRet(n, vector<int>(m));

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
            arrRet[i][j] = arrA[i][j] + arrB[i][j];
            cout << arrRet[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}