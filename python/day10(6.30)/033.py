from queue import PriorityQueue

N = int(input())
pd = PriorityQueue()

for _ in range(N):
    date = int(input())
    pd.put(date)

num1 = 0
num2 = 0
sum = 0

while pd.qsize() > 1:
    num1 = pd.get()
    num2 = pd.get()
    temp = num1 + num2
    sum += temp
    pd.put(temp)

print(sum)
