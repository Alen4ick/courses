## Снизу представлено верное решение проблемы
a, b = [int (x) for x in input().split()]
c = input()
comands = ['heat', 'auto','freeze','fan']
if a >=b:
    if c == 'heat' or c == 'fan':
        print(a)
    elif c == 'freeze' or c == 'auto':
        print(b)
else:
    if c == 'heat' or c == 'auto':
        print(b)
    elif c == 'freeze' or c == 'fan':
        print(a)

