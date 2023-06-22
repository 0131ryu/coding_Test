n = int(input())
A = list(map(int, input().split()))
A.sort()
count = 0

for k in range(n):
    i = 0
    j = n - 1
    while i < j:
        if A[i] + A[j] == A[k]:
            if i != k and j != k:
                count += 1
                break
            elif i == k:
                i += 1
            elif j == k:
                j -= 1
        elif A[i] + A[j] > A[k]:
            j -= 1
        else:
            i += 1

print(count)
