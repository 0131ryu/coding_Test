#include <bits/stdc++.h>
using namespace std;
const int max_n = 104;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int n, m, y, x, a[max_n][max_n], visited[max_n][max_n];
int main()
{
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%1d", &a[i][j]);
        }
    }
    queue<pair<int, int>> q;
    visited[0][0] = 1;
    q.push({0, 0});
    while (q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            // 4방향 탐색
            int ny = dy[i] + y;
            int nx = dx[i] + x;
            // a[ny][nx] == 0이 먼저 나오면 안 됨
            if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 0) // 문제에서 0을 건널 수 없다고 나옴
                continue;
            if (visited[ny][nx])
                continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    printf("%d", visited[n - 1][m - 1]);
    return 0;
}
// 가중치는 1칸
// BFS 사용
// 따딱따딱 있는 것 => scanf()