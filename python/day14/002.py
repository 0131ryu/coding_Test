N = int(input())
A = map(int, input().split())

Sum = 0
Max = 0
ret = 0

for i in A:
    if Max < i:
        Max = i
    Sum += i

ret = (Sum * 100) / Max / N
print(ret)
