import sys
input = sys.stdin.readline

stack = []  # 스택
N = int(input())  # 입력값 N
count = 1  # 스택에 넣는 값
result = []  # 결과 모으는 리스트

for i in range(N):
    num = int(input())  # 값 입력

    # num값까지 스택에 append(push)
    while count <= num:
        stack.append(count)
        result.append('+')
        count += 1
    # 스택 맨 위의 있는 값이 num이면 pop
    if stack[-1] == num:
        stack.pop()
        result.append('-')
    else:
        print("NO")
        exit(0)

for i in result:
    print(i)
