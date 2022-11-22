n = int(input())
a, b = map(int, input().split())
left = a
ans = b
cur_sum = b
for i in range(n - 1):
    a, b = map(int, input().split())
    if a > left:
        cur_sum += b
    else:
        if cur_sum > ans:
            ans = cur_sum
        cur_sum = b
    left = a
print(ans)