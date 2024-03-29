import sys
sys.setrecursionlimit(10000)
input = sys.stdin.readline

N, M = map(int, input().split())
A = [[] for _ in range(N+1)]
visited = [False] * (N+1)


def DFS(v):
    visited[v] = True
    for i in A[v]:
        if not visited[i]:
            DFS(i)


for i in range(M):
    u, v = map(int, input().split())
    A[v].append(u)
    A[u].append(v)

count = 0

for i in range(1, N+1):
    if not visited[i]:
        count += 1
        DFS(i)

print(count)
