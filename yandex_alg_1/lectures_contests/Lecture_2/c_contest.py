n = int(input())
m = [int(x) for x in input().split()]
x = int(input())

diff = abs(x - m[0])
ans = m[0]
for el in m:
    if abs(x - el) < diff:
        diff = abs(x - el)
        ans = el
print(ans)