from collections import deque

N, M, V = map(int, input().split())
A = [[] for _ in range(N+1)]
visited = [False] * (N+1)

for i in range(M):
    s, e = map(int, input().split())
    A[s].append(e)
    A[e].append(s)

# 탐색 순서 일정하게 유지
for i in range(N+1):
    A[i].sort()


def DFS(num):
    print(num, end=' ')
    visited[num] = True
    for i in A[num]:
        if not visited[i]:
            DFS(i)


DFS(V)


def BFS(num):
    queue = deque()
    queue.append(num)
    visited[num] = True
    while queue:
        now_node = queue.popleft()
        print(now_node, end=' ')
        for i in A[now_node]:
            if not visited[i]:
                visited[i] = True
                queue.append(i)


print()
visited = [False] * (N+1)
BFS(V)
