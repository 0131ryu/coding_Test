import sys
input = sys.stdin.readline

N = int(input())
A = list(map(int, input().split()))
A.sort()
M = int(input())
B = list(map(int, input().split()))

for x in B:
    start = 0
    end = N - 1
    while start <= end:
        mid = (start + end) // 2
        if x == A[mid]:
            print(1)
            break
        elif x < A[mid]:
            end = mid - 1
        elif x > A[mid]:
            start = mid + 1
    else:
        print(0)
