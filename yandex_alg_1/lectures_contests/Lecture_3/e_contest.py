m =  [x for x in input().split()]
""" number = input()
set_ = set()
for let in number:
    if let not in set_:
        set_.add(let) """
set_ = {x for x in input() }
count = 0
for i in range(len(m)):
    if m[i] in set_:
        count+=1
print(len(set_) - count)