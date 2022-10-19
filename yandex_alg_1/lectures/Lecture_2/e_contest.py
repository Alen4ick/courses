n = int(input())
m = [int(x) for x in input().split()]

max_ = max(m)
ind_m = 0
for i in range(len(m)):
    if m[i] == max_:
        ind_m = i
        break
max_temp = -1
flag = False
for i in range(1, len(m) - 1):
    if i > ind_m and m[i] % 10 == 5 and m[i+1] < m[i]:
        flag = True
        if m[i] > max_temp:
            max_temp = m[i]
place = 1
if flag == False:
    print(0)
else:
    for el in m:
        if el > max_temp:
            place+=1
    print(place)
    
            
