# Write a Python function that takes a dictionary as input and
# returns the keys of the dictionary in sorted order.

def fun(dc):
    return (sorted(dc.keys()))


a = {1: 'bugra', 5: 'ahmet', 3: 'mehmet'}
print(fun(a))
