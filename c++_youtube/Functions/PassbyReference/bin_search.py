m = list(map(int, input().split()))
key = int(input())
l, r = -1, len(m)
""" while (r - l > 1):# Левый
    ind = (r + l) // 2
    if m[ind] < key:
        l = ind
    else:
        r = ind
print(r) """
while(r - l > 1): # Правый
    ind = (r + l) // 2
    if m[ind] > key:
        r = ind
    else:
        l = ind
if m[l] == key:
    print(l)
else:
    print(l + 1)