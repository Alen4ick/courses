n, k = map(int, input().split())
def cnk(n, k):
    if k == 0:
        return 1
    if n < k:
        return 0
    else:
        return cnk(n-1, k) + cnk(n-1, k-1)
print(cnk(n, k))