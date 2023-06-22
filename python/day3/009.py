checkArr = [0] * 4
myArr = [0] * 4
checkSecret = 0


def myadd(c):
    global checkArr, myArr, checkSecret
    if c == 'A':
        myArr[0] += 1
        if myArr[0] == checkArr[0]:
            checkSecret += 1
    elif c == 'C':
        myArr[1] += 1
        if myArr[1] == checkArr[1]:
            checkSecret += 1
    elif c == 'G':
        myArr[2] += 1
        if myArr[2] == checkArr[2]:
            checkSecret += 1
    elif c == 'T':
        myArr[3] += 1
        if myArr[3] == checkArr[3]:
            checkSecret += 1


def myremove(c):
    global checkArr, myArr, checkSecret
    if c == 'A':
        if myArr[0] == checkArr[0]:
            checkSecret -= 1
        myArr[0] -= 1
    elif c == 'C':
        if myArr[1] == checkArr[1]:
            checkSecret -= 1
        myArr[1] -= 1
    elif c == 'G':
        if myArr[2] == checkArr[2]:
            checkSecret -= 1
        myArr[2] -= 1
    elif c == 'T':
        if myArr[3] == checkArr[3]:
            checkSecret -= 1
        myArr[3] -= 1


S, P = map(int, input().split())
Result = 0
A = list(input())
checkArr = list(map(int, input().split()))
for i in range(4):
    if checkArr[i] == 0:
        checkSecret += 1
for i in range(P):
    myadd(A[i])
if checkSecret == 4:
    Result += 1
for i in range(P, S):
    j = i - P
    myadd(A[i])
    myremove(A[j])
    if checkSecret == 4:
        Result += 1
print(Result)
