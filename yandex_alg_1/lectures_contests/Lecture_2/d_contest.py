m = [int(x) for x in input().split()]

ans = 0
for i in range(1, len(m) - 1):
    if m[i] > m[i-1] and m[i] > m[i+1]:
        ans+=1
print(ans)