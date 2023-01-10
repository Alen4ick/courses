n = int(input())
lst1 = [int(x) for x in input().split()]
m = int(input())
lst2 = [int(x) for x in input().split()]
check = abs(lst1[0] - lst2[0])
ptr1 = ptr2 = 0
fptr1 = fptr2 = 0
for i in range(len(lst1) + len(lst2)):
    if (abs(lst1[ptr1] - lst2[ptr2])) < check:
        check = abs(lst1[ptr1] - lst2[ptr2])
        fptr1 = ptr1
        fptr2 = ptr2
    if (ptr1 < len(lst1) - 1) and (lst1[ptr1] <= lst2[ptr2]):
        ptr1 +=1
    elif (ptr2 < len(lst2) - 1) and (lst1[ptr1] >= lst2[ptr2]):
        ptr2 +=1 
"""print(f'check : {check}, lst1[fptr1] : {lst1[fptr1]}, lst2[fptr2] : {lst2[fptr2]}') """
print(lst1[fptr1], lst2[fptr2])