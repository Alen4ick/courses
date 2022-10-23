# 1 решение своими руками
""" m1 = [int(x) for x in input().split()]
m2 = [int(x) for x in input().split()]

if len(m1) < len(m2):
    m1, m2 = m2, m1

set_ = set(m1)

m_ = []

for el in m2:
    if el in set_:
        m_.append(el)
m_.sort()
print(*m_) """

# 2 решение через встроенные методы множеств
print(*(sorted({int(x) for x in input().split()}.intersection({int(x) for x in input().split()}))))
