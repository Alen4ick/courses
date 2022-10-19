a, b, c, d = [int(x) for x in input().split()]
if a > b:
    a, b= b, a
if c > d:
    c, d = d, c
min_ = min([max(a,c) * (b + d), max(b, d) * (a + c), max(a, d) * (b + c), max(b, c) * (a + d)])
m_tup = [(max(a, c),b + d),(max(b, d),a + c), (max(a, d),b + c), (max(b, c),a + d)]
for i in range (len(m_tup)):
    if m_tup[i][0] * m_tup[i][1] == min_:
        print(m_tup[i][0], m_tup[i][1])