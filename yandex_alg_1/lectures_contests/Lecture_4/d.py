n = int(input())
d = {i : int(i) for i in input().split()}
k = int(input())
inp = input().split()
for el in inp:
    d[el]-=1
for key in d.keys():
    if d[key] >=0:
        print("YES")
    else:
        print("NO")