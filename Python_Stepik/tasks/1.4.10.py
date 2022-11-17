# n = int(input())
dict_ = {"global" : {"parent" : None, "vars" : []}}

def create(namesp, parent, d):
    global dict_
    if parent in dict_:
        dict_[parent][namesp] = {"parent" : parent, "vars" : []}
        return None
    for key in dict_:
        """ print(d)
        print(d[key]) """
        return create(namesp, parent, dict_[key])
# {'global': {'parent': None, 'vars': [],
#       'medium': {'parent': 'global', 'vars': [],
#               'low': {'parent': 'medium', 'vars': []}}}}
print(id(dict_))
create("medium", "global", dict_)
create("low", "medium", dict_)
# create("least", "low", dict_)
""" print(dict_) """ 
    