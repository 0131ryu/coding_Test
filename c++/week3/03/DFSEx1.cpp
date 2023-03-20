#include <bits/stdc++.h>
using namespace std;
const int n = 5;
vector<int> adj[n];
int visited[n];
void dfs(int u)
{
    visited[u] = 1;
    cout << u << '\n';
    for (int v : adj[u])
    {
        if (visited[v] == 0)
        {
            dfs(v);
        }
    }
    cout << u << "를 방문했습니다!\n";
    return;
}
int main()
{
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[4].push_back(2);
    adj[2].push_back(5);
    dfs(1);
}