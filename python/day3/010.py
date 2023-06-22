from collections import deque
N, L = map(int, input().split())
mydeque = deque()
now = list(map(int, input().split()))

for i in range(N):
    # 나보다 값이 큰 데이터 제거
    # 데이터 두 개 넣기 때문 mydeque[][]
    # 내 덱에 제일 끝에 있는 값이 더 크면
    while mydeque and mydeque[-1][0] > now[i]:
        mydeque.pop()  # 값을 제거
    mydeque.append((now[i], i))  # 각각 값과 인덱스 넣어줌
    # 내 덱에 제일 앞에 있는 인덱스
    if mydeque[0][1] <= i - L:  # 범위에서 윈도우 범위를 벗어날 경우
        mydeque.popleft()  # 앞에서 값을 뺌
    print(mydeque[0][0], end=' ')
