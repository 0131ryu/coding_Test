from collections import deque

dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

N, M = map(int, input().split())
A = [[0] * M for _ in range(N)]
visited = [[False] * M for _ in range(N)]

for i in range(N):
    numbers = list(input())
    for j in range(M):
        A[i][j] = int(numbers[j])


def BFS(i, j):
    queue = deque()
    visited[i][j] = True
    queue.append((i, j))
    while queue:
        now = queue.popleft()
        for k in range(4):  # 상하좌우 탐색
            x = now[0] + dx[k]
            y = now[1] + dy[k]
            if x >= 0 and y >= 0 and x < N and y < M:
                if A[x][y] != 0 and not visited[x][y]:
                    visited[x][y] = True
                    # A리스트에 depth를 현재 노드의 depth +1로 업데이트
                    A[x][y] = A[now[0]][now[1]] + 1
                    queue.append((x, y))


BFS(0, 0)
print(A[N-1][M-1])
