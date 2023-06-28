import sys
input = sys.stdin.readline

N, M = map(int, input().split())
A = list(map(int, input().split()))
# A.sort() 순서 유지를 위해 정렬을 사용하면 안 됨
start = 0
end = 0

for i in A:
    if start < i:
        start = i  # A 리스트 중 최댓값
    end += i  # A 리스트 총합

while start <= end:
    mid = int(start + end) // 2  # 중간 인덱스
    sum = 0
    count = 0
    for i in range(N):
        if sum + A[i] > mid:  # 현재 레슨시간 > 중간 인덱스:
            count += 1  # count 값 올리고 sum을 0으로 리셋
            sum = 0
        sum += A[i]
    if sum != 0:
        count += 1
    if count > M:
        start = mid + 1
    else:
        end = mid - 1

print(start)
