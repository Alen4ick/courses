n = int(input())
d = {}
for i in range(n):
    word1, word2 = input().split()
    d[word1] = word2
    d[word2] = word1
word = input()
print(d[word])