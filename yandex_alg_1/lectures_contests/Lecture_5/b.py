n, target = map(int, input().split())
lst = [int(x) for x in input().split()]

def makepref(lst):
    pref_lst = [0] * (len(lst) + 1)
    for i in range(1, len(lst) + 1):
        pref_lst[i] = lst[i - 1] + pref_lst[i - 1]
    return pref_lst

pref_sum = makepref(lst)
ans = 0
left, right = 0, 1
while (right <= len(lst)):
    if pref_sum[right] - pref_sum[left] == target:
        ans += 1
        left, right = left + 1, right + 1
    elif (pref_sum[right] - pref_sum[left] > target):
        left += 1
    else:
        right += 1
print(ans)