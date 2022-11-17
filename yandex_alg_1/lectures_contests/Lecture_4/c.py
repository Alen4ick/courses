with open("input.txt") as file:
    text = file.readlines()
d = {}
for line in text:
    line = line.split()
    for word in line:
        if word not in d:
            d[word] = 1
        else:
            d[word] +=1
max_count = 0
ans = ""
for key in d:
    if d[key] > max_count:
        ans = key
        max_count = d[key]
    elif d[key] == max_count:
        if key < ans:
            ans = key
print(ans)
