#include <bits/stdc++.h>
using namespace std;
const int v = 10;
bool a[v][v], visited[v];
void go(int n)
{
    visited[n] = 1;
    cout << n << '\n';
    for (int i = 0; i < n; i++)
    {
        if (visited[n])
            continue;
        if (a[n][i])
        {
            go(i);
        }
    }
    return;
}
int main()
{
    a[1][2] = 1;
    a[1][3] = 1;
    a[3][4] = 1;
    a[2][1] = 1;
    a[3][1] = 1;
    a[4][3] = 1;
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (a[i][j] && visited[i] == 0)
            {
                go(i);
            }
        }
    }
}
