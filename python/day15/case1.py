import sys
input = sys.stdin.readline
n, m = map(int, input().split())  # 1, 100


def isPalindrome(n):
    return n == n[::-1]


answer = 0

for i in range(n, m+1):
    if isPalindrome(str(i)):
        answer += 1
print(answer) #18
