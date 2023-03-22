#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int t, m, n, k, a[51][51], y, x, ny, nx, ret;
bool visited[51][51];
void bfs(int y, int x)
{
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        ny = dy[i] + y;
        nx = dx[i] + x;
        if (ny < 0 || nx < 0 || ny >= n || nx >= m)
            continue;
        if (a[ny][nx] == 1 && !visited[ny][nx])
        {
            bfs(ny, nx);
        }
    }
    return;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while (t--)
    {
        fill(&a[0][0], &a[0][0] + 51 * 51, 0);
        fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
        ret = 0;
        cin >> m >> n >> k;
        for (int i = 0; i < k; i++)
        {
            cin >> y >> x;
            a[y][x] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 1 && !visited[i][j])
                {
                    bfs(i, j);
                    ret++;
                }
            }
        }
        cout << ret << '\n';
    }
    return 0;
}