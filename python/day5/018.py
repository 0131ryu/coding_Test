N = int(input())
A = list(map(int, input().split()))
S = [0] * N

# 삽입 정렬
for i in range(1, N):
    i_point = i
    i_value = A[i]
    for j in range(i-1, -1, -1):
        if A[j] < A[i]:
            i_point = j + 1
            break
        if j == 0:  # 끝까지 탐색
            i_point = 0
    for j in range(i, i_point, -1):
        A[j] = A[j-1]  # 한 칸씩 shift
    A[i_point] = i_value

S[0] = A[0]

for i in range(1, N):  # 0은 이미 들어가 있음
    S[i] = S[i-1] + A[i]

sum = 0

for i in range(0, N):
    sum += S[i]

print(sum)
