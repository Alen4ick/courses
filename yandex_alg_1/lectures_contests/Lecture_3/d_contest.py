
f = open('input.txt', 'r')
lines = f.readlines()
my_set = set()
for line in lines:
    for el in line.split():
        my_set.add(el)
print(len(my_set))
f.close()