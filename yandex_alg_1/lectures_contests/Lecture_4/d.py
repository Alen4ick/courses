n = int(input())
d = {i + 1 : int(el) for i, el in enumerate(input().split())}
k = int(input())
for number in input().split():
    d[int(number)]-=1
for number in range(1, n + 1):
    if d[number] < 0:
        print("YES")
    else:
        print("NO")