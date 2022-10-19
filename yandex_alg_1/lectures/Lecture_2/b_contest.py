
from random import Random


dict_ = {'ASCENDING': 1, 'WEAKLY ASCENDING': 1, 'CONSTANT': 1, 'DESCENDING': 1, 'WEAKLY DESCENDING': 1, 'RANDOM': 1}

x = 0
ans = "RANDOM"
last = 0
""" while x!= -2 * 10**9:
    x = int(input())

    if x > last: """

for i in range(len(dict_)):
    print(dict_[i])