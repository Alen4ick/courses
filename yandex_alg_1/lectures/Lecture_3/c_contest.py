## 1 решение рукожопское руками
l1, l2 = [int(x) for x in input().split()]
m1 = []
m2 = []
ans = [[], [], []]
set_1 = set()
set_2 = set()
for i in range(l1):
    x = int(input())
    m1.append(x)
    set_1.add(x)
for i in range(l2):
    x = int(input())
    m2.append(x)
    set_2.add(x)
    if x in set_1:
        ans[0].append(x)
    else:
        ans[2].append(x)
for el in m1:
    if el not in set_2:
        ans[1].append(el)
for k in range(3):
    print(len(ans[k]))
    if len(ans[k]) > 0:
        print(*(sorted(ans[k])))
    else:
        print("")
## 2 решение красивое с фишками множеств (Не проходит по времени)
""" l1, l2 = [int(x) for x in input().split()] 

set_1, set_2 = set(), set()
for i in range(l1):
    set_1.add(int(input()))
for i in range(l2):
    set_2.add(int(input()))
konk = set_1 & set_2
print(len(konk))
print(*(sorted(list(konk))))
print(len(set_1 - set_2))
print(*(sorted(list(set_1 - set_2))))
print(len(set_2 - set_1))
print(*(sorted(list(set_2 - set_1))))
 """



    

    





