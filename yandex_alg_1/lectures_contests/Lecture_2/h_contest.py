m = [int(x) for x in input().split()]

max_ = [m[0], m[1], m[2]]
max_.sort()

min_ = [max_[0], max_[1]]

for i in range(3, len(m)):
    if m[i] > max_[2]:
        max_[0] = max_[1]
        max_[1] = max_[2]
        max_[2] = m[i]
    elif m[i] > max_[1]:
        max_[0] = max_[1]
        max_[1] = m[i]
    elif m[i] > max_[0]:
        max_[0] = m[i]
    elif m[i] < min_[0]:
        min_[1] = min_[0]
        min_[0] = m[i]
    elif m[i] < min_[1]:
        min_[1] = m[i]
if min_[0] * min_[1] * max_[2] > max_[0] * max_[1] * max_[2]:
    print(f'{min_[0]} {min_[1]} {max_[2]}')
else:
    print(f'{max_[0]} {max_[1]} {max_[2]}')



