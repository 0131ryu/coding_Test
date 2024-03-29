#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};
int n, m, a[104][104], visited[104][104], cnt, cnt2;
vector<pair<int, int>> v;
void go(int y, int x)
{
    visited[y][x] = 1;
    if (a[y][x] == 1)
    {
        v.push_back({y, x});
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int ny = dy[i] + y;
        int nx = dx[i] + x;
        if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx])
            continue;
        go(ny, nx);
    }
    return;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    while (true)
    {
        cnt2 = 0;
        fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
        v.clear();
        go(0, 0);
        for (pair<int, int> b : v)
        {
            cnt2++;
            a[b.first][b.second] = 0;
        }
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] != 0)
                    flag = 1;
            }
        }
        cnt++;
        if (!flag)
            break;
    }
    cout << cnt << '\n'
         << cnt2 << '\n';
}