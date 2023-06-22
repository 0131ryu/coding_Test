n = int(input())
m = int(input())
A = list(map(int, input().split()))
A.sort()

i = 0
j = n - 1
count = 0

while i < j:
    sum = A[i] + A[j]
    if sum == m:
        i += 1
        j -= 1
        count += 1
    elif sum > m:
        j -= 1
    else:
        i += 1

print(count)
