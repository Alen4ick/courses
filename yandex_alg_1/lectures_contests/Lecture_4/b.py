with open("input.txt") as file:
    read = file.readlines()
d = {}
for line in read:
    line = line.split()
    for word in line:
        if word not in d:
            print(0, end = " ")
            d[word] = 1
        else:
            print(d[word], end = " ")
            d[word]+=1