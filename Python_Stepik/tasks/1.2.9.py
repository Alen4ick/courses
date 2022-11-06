objects = [1, 2, 1, 2, 1, "d"] # Это пример, в задании другие objects
""" set_ = set()
ans = 0
for obj in objects:
    set_.add(id(obj))
ans = len(set_)
print(ans)
 """
set_ = {id(obj) for obj in objects}
print(len(set_))