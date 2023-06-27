import sys
sys.setrecursionlimit(10000)

N = int(input())


def findNum(num):
    # 소수 구하기
    for i in range(2, int(num / 2 + 1)):
        if num % i == 0:
            return False
    return True


def DFS(number):
    if len(str(number)) == N:
        print(number)
    else:
        for i in range(1, 10):
            if i % 2 == 0:
                continue
            if findNum(10 * number + i):
                DFS(10 * number + i)


DFS(2)
DFS(3)
DFS(5)
DFS(7)
