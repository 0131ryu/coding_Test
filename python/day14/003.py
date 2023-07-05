import sys
input = sys.stdin.readline

N, M = map(int, input().split())
A = list(map(int, input().split()))
S = [0]
temp = 0

for i in A:
    temp += i
    S.append(temp)

for i in range(M):
    s, e = map(int, input().split())
    print(S[e] - S[s-1])
