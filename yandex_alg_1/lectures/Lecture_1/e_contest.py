k1, m, k2, p2, n2 = [int(x) for x in input().split()]
def div_big(a, b):
    if a % b == 0:
        return a // b
    else:
        return (a // b) + 1
amount_on_1_floor = div_big(k2, (p2 - 1) * m + n2)
count_floors = div_big(k1,amount_on_1_floor)
p1 = div_big(count_floors, m)
if p1==1:
    n1 = count_floors 
else:
     n1 = div_big(k1 - m*amount_on_1_floor * (p1 - 1), amount_on_1_floor)
print(p1, n1)