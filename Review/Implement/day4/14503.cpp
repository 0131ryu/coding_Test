#include <bits/stdc++.h>
using namespace std;
int n, m, arr[50][50], visited[50][50];
int r, c, d;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
void dfs(int r, int c, int d, int sum)
{
    // 1. 현재 위치를 청소한다.
    // 2. 현재 위치에서 현재 방향을 기준으로 왼쪽방향씩 차례대로 탐색 진행
    // a. 왼쪽 방향에 아직 청소하지 않은 공간(0)이 있다면 그 방향으로 회전한 다음 한 칸 전진하고 1번부터 진행
    // b. 왼쪽 방향에서 청소할 공간이 없다면 그 방향으로 회전나고 2번으로 돌아감
    // c. 네 방향 모두 이미 청소가 되어 있거나 벽인 경우 바라보는 방향을 유지한 채 한 칸 후진을 하고 2번으로 돌아간다.
    // d. 네 방향 모두 청소가 되어 있거나 벽이면서 뒤쪽 방향이 후진이라 회전할 수 없는 경우 작동을 멈춤
    for (int i = 0; i < 4; i++)
    { // 왼쪽부터 반 시계 방향
        int nd = (d + 3 - i) % 4;
        int nr = r + dy[nd];
        int nc = c + dx[nd];

        if (nr < 0 || nc < 0 || nr >= n || nc >= m || arr[nr][nc] == 1)
        { // 범위가 넘어가거나 벽이면 다음 방향
            continue;
        }
        // 아직 청소하지 않은 공간 존재 시
        if (visited[nr][nc] == 0 && arr[nr][nc] == 0)
        {
            visited[nr][nc] = 1; // 현재 위치 청소
            dfs(nr, nc, nd, sum + 1);
        }
    }
    int backIdx = d + 2 < 4 ? d + 2 : d - 2;
    int backr = r + dy[backIdx];
    int backc = c + dx[backIdx];
    if (backr >= 0 && backc >= 0 && backr <= n && backc <= m)
    {
        if (arr[backr][backc] == 0)
        {                              // 뒤쪽 방향이 벽이 아니어서 후진 가능할 때
            dfs(backr, backc, d, sum); // 한 칸 후진
        }
        else
        { // 뒤쪽 방향이 벽이라 후진 못할 때
            cout << sum << '\n';
            exit(0);
        }
    }
}
int main()
{

    cin >> n >> m;
    cin >> r >> c >> d;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            visited[i][j] = 0;
        }
    }
    visited[r][c] = 1;
    dfs(r, c, d, 1);
    return 0;
}