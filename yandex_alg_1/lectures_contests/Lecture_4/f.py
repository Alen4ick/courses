with open("input.txt") as file:
    lines = file.readlines()
d = {}
for line in lines:
    client, product, price = line.split()
    if client not in d:
        d[client] = {product : int(price)}
    elif product not in d[client]:
        d[client][product] = int(price)
    else:
        d[client][product] += int(price)
for key in d:
    d[key] = dict(sorted(d[key].items(), key = lambda x: x[0]))
d = dict(sorted(d.items(), key = lambda x: x[0]))
for key in d:
    print(f'{key}:')
    for k in d[key]:
        print(f'{k} {d[key][k]}')