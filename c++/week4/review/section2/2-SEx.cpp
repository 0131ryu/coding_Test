// 1 -> 2, 1->3 일 때 노드 수는? 3
#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1004];
int visited[1004];
int dfs(int here)
{
    int ret = 1;
    for (int there : adj[here])
    {
        if (visited[there])
            continue;
        ret += dfs(there);
    }
    return ret;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    adj[1].push_back(2);
    adj[1].push_back(3);
    visited[1] = 1;
    cout << dfs(1) << '\n';
    return 0;
}