a, b, c = int(input()), int(input()), int(input())
if a == 0 and c**2 == b and c >=0:
    print('MANY SOLUTIONS')
elif c < 0 or a == 0:
    print('NO SOLUTIONS')
elif (c**2 - b) % a == 0:
    print(int((c**2 - b) / a))
else:
    print("NO SOLUTIONS")