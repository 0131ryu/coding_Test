from collections import deque

N = int(input())
A = [[] for _ in range(N+1)]
visited = [False] * (N+1)
distance = [0] * (N+1)

for i in range(N):
    Data = list(map(int, input().split()))
    index = 0
    S = Data[index]
    index += 1
    while True:
        E = Data[index]
        if E == -1:
            break
        V = Data[index + 1]
        A[S].append((E, V))
        index += 2


def BFS(v):
    queue = deque()
    visited[v] = True
    queue.append(v)
    while queue:
        now = queue.popleft()
        for i in A[now]:
            if not visited[i[0]]:
                visited[i[0]] = True
                queue.append(i[0])
                distance[i[0]] = distance[now] + i[1]


BFS(1)
Max = 1

for i in range(2, N+1):
    if distance[Max] < distance[i]:
        Max = i

distance = [0] * (N+1)
visited = [False] * (N+1)

BFS(Max)
distance.sort()
print(distance[N])

# for i in range(1, N+1):
#     print(distance[i], end=' ') # 0 6 9 10 11
