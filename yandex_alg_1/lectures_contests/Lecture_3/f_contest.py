line_1, line_2 = input(), input()
my_set = set()
for i in range(len(line_2) - 1):
    my_set.add(line_2[i:i+2])
counter = 0
for i in range(len(line_1) - 1):
    if line_1[i:i+2] in my_set:
        counter +=1
print(counter)