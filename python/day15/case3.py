dirs = str(input())  # ULRRRRRDLUL

answer = 0
visited = set()
x, y = 0, 0

for dir in dirs:
    if dir == 'U':
        if y < 5:
            visited.add((x, y, x, y+1))
            visited.add((x, y+1, x, y))
            y += 1
    elif dir == 'D':
        if y > -5:
            visited.add((x, y, x, y-1))
            visited.add((x, y-1, x, y))
            y -= 1
    elif dir == 'R':
        if x < 5:
            visited.add((x, y, x+1, y))
            visited.add((x+1, y, x, y))
            x += 1
    elif dir == 'L':
        if x > -5:
            visited.add((x, y, x-1, y))
            visited.add((x-1, y, x, y))
            x -= 1

for path in visited:
    answer += abs(path[0]-path[2]) + abs(path[1]-path[3])
    answer //= 2

print(answer)
