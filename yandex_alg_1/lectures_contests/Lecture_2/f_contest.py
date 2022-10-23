#n = int(input())
m = [int(x) for x in input().split()]
m_dop = []
# 1 2 3 2 -> 1 2 3 2 1 
# 1 5 2 3 -> 1 5 2 3 1 -> 1 5 2 3 5 1 -> 1 5 2 3 2 5 1
# 1 2 3 4 5 -> 1 2 3 4 5 1 -> 1 2 3 4 5 2 1 -> 1 2 3 4 5 3 2 1-> 1 2 3 4 5 4 3 2 1
# 1 2 1 2 2 - >1 2 1 2 2 1 ->1 2 1 2 1 2 1
k = -1
for i in range(len(m)):
    if m[i] !=m[k]:
        m_dop.append(m[i])
    else:
        k-=1
print(m_dop)
#1 2 3 2 5 -> 1 2 3 2 5 2 3 2 1