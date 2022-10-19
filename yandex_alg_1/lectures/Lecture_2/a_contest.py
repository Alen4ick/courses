m = list(map(int, input().split()))
last = m[0]
ans = 'YES'
for el in m[1::]:
    if el <= last:
        ans = "NO"
        break
    last = el
print(ans)
