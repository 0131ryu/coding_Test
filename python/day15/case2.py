skill = str(input())  # "CBD"
skill_tress = []  # ["BACDE", "CBADF", "AECB", "BDA"]

for i in range(4):
    skill_tress.append(input())

answer = 0

for i in skill_tress:
    temp = ''
    for j in i:
        if j in skill:
            temp += j
    if temp == skill[:len(temp)]:
        answer += 1

print(answer) #2
