m = [int(x) for x in input().split()]

max_ = max(m[0], m[1])
predmax_ = m[0] + m[1] - max_
min_ = predmax_
predmin_ = max_
for i in range(2, len(m)):
    if m[i] > max_:
        predmax_ = max_
        max_ = m[i]
    elif m[i] > predmax_:
        predmax_ = m[i]
    elif m[i] < min_:
        predmin_ = min_
        min_ = m[i]
    elif m[i] < predmin_:
        predmin_ = m[i]
if min_ * predmin_> max_ * predmax_:
    print(f'{min_} {predmin_}')
else:
    print(f'{predmax_} {max_}')

