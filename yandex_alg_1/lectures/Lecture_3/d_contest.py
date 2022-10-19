import sys
all_lines = sys.stdin
my_set = set()
for line in all_lines:
    if line.strip() == "":
        break
    line = line.strip()
    m = [x for x in line[0:len(line) -1].split()]
    for el in m:
        if el not in my_set:
            my_set.add(el)
print(len(my_set))
print(my_set)